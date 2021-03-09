<p>When using a stream class, you have the option of specifying <a href="/cpp/fundamentals/string-manipulators">manipulators</a> that perform specific actions for you. <code>std::endl</code> is one such manipulator that you have been using thus far to insert a newline character.</p>

<p>Below table demonstrates a few other such manipulator functions and flags:</p>

<table class="table table-dark">
	<thead>
		<tr>
			<th scope="col">Output Manipulators</th>
			<th scope="col">Purpose</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><code>std::endl</code></td>
			<td>Inserts a newline character</td>
		</tr>
		<tr>
			<td><code>std::ends</code></td>
			<td>Inserts a null character</td>
		</tr>
		<tr>
			<th scope="col">Radix Manipulators</th>
			<th scope="col">Purpose</th>
		</tr>
		<tr>
			<td><code>std::dec</code></td>
			<td>Instructs stream to interpret input or display output in decimal</td>
		</tr>
		<tr>
			<td><code>std::dex</code></td>
			<td>Instructs stream to interpret input or display output in hexadecimal</td>
		</tr>
		<tr>
			<td><code>std::oct</code></td>
			<td>Instructs stream to interpret input or display output in octal</td>
		</tr>
		<tr>
			<th scope="col">Floating Point</th>
			<th scope="col">Representing Manipulators Purpose</th>
		</tr>
		<tr>
			<td><code>std::fixed</code></td>
			<td>Instructs stream to display in fixed point notation</td>
		</tr>
		<tr>
			<td><code>std::scientific</code></td>
			<td>Instructs stream to display in scientific notation</td>
		</tr>
		<tr>
			<td><code>&lt;iomanip&gt;</code> header</td>
			<td></td>
		</tr>
		<tr>
			<th scope="col">Manipulators</th>
			<th scope="col">Purpose</th>
		</tr>
		<tr>
			<td><code>std::setprecision</code></td>
			<td>Set decimal point precision as a parameter</td>
		</tr>
		<tr>
			<td><code>std::setw</code></td>
			<td>Set field width as a parameter</td>
		</tr>
		<tr>
			<td><code>std::setfill</code></td>
			<td>Set fill character as a parameter</td>
		</tr>
		<tr>
			<td><code>std::setbase</code></td>
			<td>Set the radix/base, akin to using <code>std::dec</code> , <code>std::hex</code> , or <code>std::oct</code> as a parameter</td>
		</tr>
		<tr>
			<td><code>std::setiosflag</code></td>
			<td>Set flags via a mask input parameter of type <code>std::ios_base::fmtflags</code></td>
		</tr>
		<tr>
			<td><code>std::resetiosflag</code></td>
			<td>Restore defaults for a particular type specified by that contained in <code>std::ios_base::fmtflags</code></td>
		</tr>
	</tbody>
</table>
