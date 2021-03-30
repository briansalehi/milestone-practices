<p><b>Casting</b> is a mechanism by which the programmer can temporarily or permanently change the interpretation of an object by the compiler.</p> 

<p>Note that this does not imply that the programmer changes the object itself; She simply changes the interpretation thereof. Operators that change the interpretation of an object are called <b>casting operators</b>.</p>

<p>In a perfectly <b>type-safe</b> and <b>type-strong</b> world comprising well-written C++ applications, there should be no need for <b>casting</b> and for <b>casting operators</b>. However, we live in a real world where modules programmed by a lot of different people and vendors often using different environments have to work together. To make this happen, compilers very often need to be instructed to interpret data in ways that make them compile and the application function correctly.</p>

<p>Let’s take a real-world example: Although most C++ compilers might support <code>bool</code> as a native type, a lot of libraries are still in use that were programmed years back and in C. These libraries made for C compilers had to rely on the use of an integral type to hold Boolean data. So, a <code>bool</code> on these compilers is something akin to</p>

<pre class="language-cpp">
	<code>
		typedef unsigned short BOOL;
	</code>
</pre>

<p>A function that returns Boolean data would be declared as</p>

<pre class="language-cpp">
	<code>
		BOOL IsX();
	</code>
</pre>

<p>Now, if such a library is to be used with a new application programmed in the latest version of the C++ compiler, the programmer has to find a way to make the <code>bool</code> data type as understood by his C++ compiler function with the <code>BOOL</code> data type as understood by the library. The way to make this happen is by using casts:</p>

<pre class="language-cpp">
	<code>
		bool Result = (bool) IsX(); // C-Style cast
	</code>
</pre>

<p>Despite the disadvantages of casting, the concept of casting itself cannot be discarded. In many situations, casts are legitimate requirements to solve important compatibility issues. C++ additionally supplies a new casting operator specific to inheritance-based scenarios that did not exist with C programming.</p>

<p>The four C++ casting operators are:</p>

<ul>
	<li><code>static_cast</code></li>
	<li><code>dynamic_cast</code></li>
	<li><code>reinterpret_cast</code></li>
	<li><code>const_cast</code></li>
</ul>

<p>The usage syntax of the casting operators is consistent:</p>

<pre class="language-cpp">
	<code>
		destination_type result = cast_operator&lt;destination_type&gt; (object_to_cast);
	</code>
</pre>
