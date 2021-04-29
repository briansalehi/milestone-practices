<p>
In this course, we will write code for the Netwide Assembler (NASM).<br />
There are other assemblers such as YASM, FASM, GAS, or MASM from Microsoft. And as with everything in the computer world, there are sometimes heavy discussions about which assembler is the best. We will use NASM in this course because it is available on Linux, Windows, and macOS and because there is a large community using NASM. You can find the manual at <a href="www.nasm.us">www.nasm.us</a>.
</p>

<p>To compile an assembly source, you need to use NASM as follows:</p>

<pre class="language-bash command-line" data-user="user" data-host="milestone">
	<code>
		nasm -f elf64 -g -F dwarf source.asm
	</code>
</pre>

<p>The <code>-f</code> is followed by the output format, in our case <i>elf64</i>, which means <b>Executable and Linkable Format</b> for 64-bit . The <code>-g</code> means that we want to include debug information in a debug format specified after the <code>-F</code> option. We use the <i>dwarf</i> debug format. The software geeks who invented this format seemed to like The Hobbit and Lord of the Rings written by J.J.R. Tolkien, so maybe that is why they decided that DWARF would be a nice complement to ELF… just in case you were wondering. Seriously, DWARF stands for <b>Debug With Arbitrary Record Format</b>.</p>

<p><b>STABS</b> is another debug format; the name comes from <b>Symbol Table Strings</b>.</p>

<p>The <code>-l</code> tells NASM to generate a <code>.lst</code> file. We will use <code>.lst</code> files to examine the result of the assembly. NASM will create an object file with an <code>.o</code> extension. That object file will next be used by a linker.</p>

<p>The recent GCC linker and compiler generate <b>Position-Independent Executables</b> (PIEs) by default. This is to prevent hackers from investigating how memory is used by a program and eventually interfering with program execution. At this point, we will not build position-independent executables; it would really complicate the analysis of our program (on purpose, for security reasons). So, we add the parameter <code>-no-pie</code> in the makefile.</p>

<pre class="language-bash command-line" data-user="user" data-host="milestone">
	<code>
		gcc -no-pie -o program source.o
	</code>
</pre>

<p>We use GCC because of the ease of accessing C standard library functions from within assembler code. To make life easy, we will use C language functions from time to time to simplify the example assembly code.</p>

<p>Just so you know, another popular linker on Linux is <code>ld</code>, the GNU linker.</p>
