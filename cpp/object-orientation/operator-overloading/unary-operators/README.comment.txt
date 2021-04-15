<p>A <b>unary operator</b> that is implemented in the global namespace or as a static member function of a class uses the following structure:</p>

<pre class="language-cpp line-numbers">
	<code>
		return_type operator operator_type (parameter_type)
		{
			// ... implementation
		}
	</code>
</pre>

<p>A unary operator that is a (non-static) member of a class has a similar structure but is lacking in parameters, because the single parameter that it works upon is the instance of the class itself (<code>*this</code>):</p>

<pre class="language-cpp line-numbers">
	<code>
		return_type operator operator_type ()
		{
			// ... implementation
		}
	</code>
</pre>

<p>The unary operators that can be overloaded (or redefined) are shown in the following table.</p>

<table class="table table-dark">
	<thead>
		<tr>
			<th scope="col">Operator</th>
			<th scope="col">Name</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><code>++</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/unary-operators/increment-decrement">Increment</a></td>
		</tr>
		<tr>
			<td><code>--</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/unary-operators/increment-decrement">Decrement</a></td>
		</tr>
		<tr>
			<td><code>*</code></td>
			<td>Pointer dereference</td>
		</tr>
		<tr>
			<td><code>-&gt;</code></td>
			<td>Member selection</td>
		</tr>
		<tr>
			<td><code>!</code></td>
			<td>Logical NOT</td>
		</tr>
		<tr>
			<td><code>&</code></td>
			<td>Address-of</td>
		</tr>
		<tr>
			<td><code>~</code></td>
			<td>One’s complement</td>
		</tr>
		<tr>
			<td><code>+</code></td>
			<td>Unary plus</td>
		</tr>
		<tr>
			<td><code>-</code></td>
			<td>Unary negation</td>
		</tr>
		<tr>
			<td>Conversion operators</td>
			<td><a href="/cpp/object-oriented/operator-overloading/unary-operators/conversion">Conversion into other types</a></td>
		</tr>
	</tbody>
</table>
