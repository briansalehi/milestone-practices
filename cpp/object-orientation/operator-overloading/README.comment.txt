<p>In addition to encapsulating data and methods, classes can also encapsulate operators that make it easy to operate on instances of this class. You can use these operators to perform operations such as assignment or addition on class objects.</p>

<p>Just like functions, operators can also be overloaded.</p>

<p>On a syntactical level, there is very little that differentiates an operator from a function, save for the use of the keyword <b>operator</b>. An operator declaration looks quite like a function declaration:</p>

<pre class="language-cpp">
	<code>
		return_type operator operator_symbol (...parameter list...);
	</code>
</pre>

<p>So, why does C++ provide <b>operators</b> when <b>functions</b> are also supported?</p>

<p>Consider a utility class <code>Date</code> that encapsulates the <code>day</code>, <code>month</code>, and <code>year</code>:</p>

<pre class="language-cpp">
	<code>
		Date holiday(12, 25, 2016); // initialized to Dec 25, 2016
	</code>
</pre>

<p>Assuming that you want to add a <code>day</code> and get the instance to contain the next day—<i>Dec 26, 2016</i>—which of the following two options would be more intuitive?</p>

<p>Option 1 (using the increment operator):</p>

<pre class="language-cpp">
	<code>
		++holiday;
	</code>
</pre>

<p>Option 2 (using a member function <code>Increment()</code>):</p>

<pre class="language-cpp">
	<code>
		holiday.Increment(); // Dec 26, 2016
	</code>
</pre>

<p>Clearly, Option 1 scores over method <code>Increment()</code>. The operator-based mechanism facilitates consumption by supplying ease of use and intuitiveness.</p>

<p>Implementing <code>operator&lt;</code> in class <code>Date</code> would help you compare two instances of class <code>Date</code> like this:</p>

<pre class="language-cpp line-numbers">
	<code>
		if (date1 &lt; date2) {
			// Do something
		} else {
			// Do something else
		}
	</code>
</pre>

<p>On a broad level, operators in C++ can be classified into two types: <b>unary operators</b> and <b>binary operators</b>.</p>

<p>With all the flexibility that C++ gives you in customizing the behavior of the operators and making your classes easy to use, it still keeps some cards to itself by not allowing you to change or alter the behavior of some operators that are expected to perform  consistently. The operators that cannot be redefined are shown in the following table.</p>

<table class="table table-dark">
	<thead>
		<tr>
			<th scope="col">Operator</th>
			<th scope="col">Name</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><code>.</code></td>
			<td>Member selection</td>
		</tr>
		<tr>
			<td><code>.*</code></td>
			<td>Pointer-to-member selection</td>
		</tr>
		<tr>
			<td><code>::</code></td>
			<td>Scope resolution</td>
		</tr>
		<tr>
			<td><code>?:</code></td>
			<td>Conditional ternary operator</td>
		</tr>
		<tr>
			<td><code>sizeof</code></td>
			<td>Gets the size of an object/class type</td>
		</tr>
	</tbody>
</table>
