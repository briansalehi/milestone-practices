<p>C++ streams are a generic implementation of read and write (in other words, input and output) logic that enables you to use certain consistent patterns toward reading or writing data. These patterns are consistent irrespective of whether you are reading data from the disk or the keyboard or whether you are writing to the display or back to the disk. You just need to use the right stream class, and the implementation within the class takes care of device- and OS-specific details.</p>

<p>C++ provides you with a set of standard classes and headers that help you perform some important and frequent I/O operations. Below table is a list of classes that you use frequently:</p>

<table class="table table-dark">
	<thead>
		<tr>
			<th scope="col">Object</th>
			<th scope="col">Purpose</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><code>std::cout</code></th>
			<td>Standard output stream, typically redirected to the console</th>
		</tr>
		<tr>
			<td><code>std::cin</code></th>
			<td>Standard input stream, typically used to read data into variables</th>
		</tr>
		<tr>
			<td><code>std::cerr</code></th>
			<td>Standard output stream for errors</th>
		</tr>
		<tr>
			<td><code>std::fstream</code></th>
			<td>Input and output stream class for file operations; inherits from <code>std::ofstream</code> and <code>std::ifstream</code></th>
		</tr>
		<tr>
			<td><code>std::ofstream</code></th>
			<td>Output stream class for writing operations on file</th>
		</tr>
		<tr>
			<td><code>std::ifstream</code></th>
			<td>Input stream class for reading operations on file</th>
		</tr>
		<tr>
			<td><code>std::stringstream</code></th>
			<td>Input and output stream class for string operations; inherits from <code>std::istringstream</code> and <code>std::ostringstream</code>; typically used to perform conversions from (or to) string and other types</th>
		</tr>
	</tbody>
</table>

<p>Three streams of <code>std::cout</code>, <code>std::cin</code> and <code>std::cerr</code> are global objects of stream classes <code>std::ostream</code>, <code>std::istream</code>, and <code>std::ostream</code>, respectively. Being global objects, they’re initialized before <code>main()</code> starts.</p>
