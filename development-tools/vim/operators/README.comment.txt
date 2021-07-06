<p>(See <b>:h operator</b> )</p>

<p>The <mark>d{motion}</mark> command can operate on a single character <mark>dl</mark>, a complete word <mark>daw</mark>, or an entire paragraph <mark>dap</mark>. Its reach is defined by the motion.</p>

<p>The same goes for <mark>c{motion}</mark>, <mark>y{motion}</mark>, and a handful of others. Collectively, these commands are called operators.</p>

<p>Learning new motions and operators is like learning the vocabulary of Vim. If we follow the simple grammar rules, we can express more ideas as our vocabulary grows.</p>

<table class="table table-dark">
	<thead>
		<tr>
			<th scope="col">Trigger</th>
			<th scope="col">Effect</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><mark>c</mark></td>
			<td>Change</td>
		</td>
		<tr>
			<td><mark>d</mark></td>
			<td>Delete</td>
		</td>
		<tr>
			<td><mark>y</mark></td>
			<td>Yank (copy) into register</td>
		</td>
		<tr>
			<td><mark>g~</mark></td>
			<td>Swap case</td>
		</td>
		<tr>
			<td><mark>gu</mark></td>
			<td>Make lowercase</td>
		</td>
		<tr>
			<td><mark>gU</mark></td>
			<td>Make uppercase</td>
		</td>
		<tr>
			<td><mark>&gt;</mark></td>
			<td>Shift right</td>
		</td>
		<tr>
			<td><mark>&lt;</mark></td>
			<td>Shift left</td>
		</td>
		<tr>
			<td><mark>=</mark></td>
			<td>Autoindent</td>
		</td>
	</tbody>
</table>

<p>Vim's grammar has just one more rule: when an operator command is invoked in duplicate, it acts upon the current line. So <mark>dd</mark> deletes the current line, while <mark>&gt;&gt;</mark> indents it. The <mark>gU</mark> command is a special case. We can make it act upon the current line by running either <mark>gUgU</mark> or the shorthand <mark>gUU</mark>.</p>
