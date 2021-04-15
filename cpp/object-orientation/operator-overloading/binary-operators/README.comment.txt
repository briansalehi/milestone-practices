<p>Operators that function on two operands are called <b>binary operators</b>. The definition of a binary operator implemented as a global function or a static member function is the following:</p>

<pre class="language-cpp">
	<code>
		return_type operator_type(parameter1, parameter2);
	</code>
</pre>

<p>The definition of a binary operator implemented as a class member is:</p>

<pre class="language-cpp">
	<code>
		return_type operator_type(parameter);
	</code>
</pre>

<p>The reason the class member version of a binary operator accepts only one parameter is that the second parameter is usually derived from the attributes of the class itself.</p>

<p>Table below contains binary operators that can be overloaded or redefined in your C++ application.</p>

<table class="table table-dark">
	<thead>
		<tr>
			<th scope="col">Operator</th>
			<th scope="col">Name</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><code>,</code></td>
			<td>Comma</td>
		</tr>
		<tr>
			<td><code>!=</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/equality">Inequality</a></td>
		</tr>
		<tr>
			<td><code>%</code></td>
			<td>Modulus</td>
		</tr>
		<tr>
			<td><code>%=</code></td>
			<td>Modulus/assignment</td>
		</tr>
		<tr>
			<td><code>&amp;</code></td>
			<td>Bitwise AND</td>
		</tr>
		<tr>
			<td><code>&amp;&amp;</code></td>
			<td>Logical AND</td>
		</tr>
		<tr>
			<td><code>&amp;=</code></td>
			<td>Bitwise AND/assignment</td>
		</tr>
		<tr>
			<td><code>*</code></td>
			<td>Multiplication</td>
		</tr>
		<tr>
			<td><code>*=</code></td>
			<td>Multiplication/assignment</td>
		</tr>
		<tr>
			<td><code>+</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/addition-subtraction">Addition</a></td>
		</tr>
		<tr>
			<td><code>+=</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/assignment">Addition/assignment</a></td>
		</tr>
		<tr>
			<td><code>-</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/addition-subtraction">Subtraction</a></td>
		</tr>
		<tr>
			<td><code>-=</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/assignment">Subtraction/assignment</a></td>
		</tr>
		<tr>
			<td><code>-&gt;*</code></td>
			<td>Pointer-to-member selection</td>
		</tr>
		<tr>
			<td><code>/</code></td>
			<td>Division</td>
		</tr>
		<tr>
			<td><code>/=</code></td>
			<td>Division/assignment</td>
		</tr>
		<tr>
			<td><code>&lt;</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/comparison">Less than</a></td>
		</tr>
		<tr>
			<td><code>&lt;&lt;</code></td>
			<td>Left shift</td>
		</tr>
		<tr>
			<td><code>&lt;&lt;=</code></td>
			<td>Left shift/assignment</td>
		</tr>
		<tr>
			<td><code>&lt;=</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/comparison">Less than or equal to</a></td>
		</tr>
		<tr>
			<td><code>=</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/assignment">Assignment</a></td>
		</tr>
		<tr>
			<td><b>Same object type assignments</b></td>
			<td><a href="/cpp/object-oriented/operator-overloading/copy-assignment">Copy Assignment</a> and <a href="/cpp/object-oriented/operator-overloading/move-assignment">Move Assignment</a></td>
		</tr>
		<tr>
			<td><code>==</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/comparison">Equality</a></td>
		</tr>
		<tr>
			<td><code>&gt;</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/comparison">Greater than</a></td>
		</tr>
		<tr>
			<td><code>&gt;=</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/comparison">Greater than or equal to</a></td>
		</tr>
		<tr>
			<td><code>&lt;&lt;</code></td>
			<td>Right shift</td>
		</tr>
		<tr>
			<td><code>&gt;&gt;=</code></td>
			<td>Right shift/assignment</td>
		</tr>
		<tr>
			<td><code>^</code></td>
			<td>Exclusive OR</td>
		</tr>
		<tr>
			<td><code>^=</code></td>
			<td>Exclusive OR/assignment</td>
		</tr>
		<tr>
			<td><code>|</code></td>
			<td>Bitwise inclusive OR</td>
		</tr>
		<tr>
			<td><code>|=</code></td>
			<td>Bitwise inclusive OR/assignment</td>
		</tr>
		<tr>
			<td><code>||</code></td>
			<td>Logical OR</td>
		</tr>
		<tr>
			<td><code>[]</code></td>
			<td><a href="/cpp/object-oriented/operator-overloading/binary-operators/subscript">Subscript operator</a></td>
		</tr>
	</tbody>
</table>
