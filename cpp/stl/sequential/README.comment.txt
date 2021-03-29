<p>As the name suggests, these are containers used to hold data in a sequential fashion, such as arrays and lists. Sequential containers are characterized by a <b>fast insertion time</b>, but are relatively <b>slow</b> in <b>find operations</b>.</p>

<p>The STL sequential containers are:</p>

<ul>
	<li><code>std::vector</code><p>Operates like a dynamic array and grows at the end.</p></li>
	<li><code>std::deque</code><p>Similar to std::vector except that it allows for new elements to be inserted or removed at the beginning, too</p></li>
	<li><code>std::list</code><p>Operates like a doubly linked list.</p></li>
	<li><code>std::forward_list</code><p>Similar to a std::list except that it is a singly linked list of elements that allows you to iterate only in one direction</p></li>
</ul>
