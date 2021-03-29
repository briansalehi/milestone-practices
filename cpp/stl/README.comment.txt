<p><b>Containers</b> are STL classes that are used to store data. STL supplies two types of container classes:</p>

<ul>
	<li><a href="/cpp/stl/sequential-containers">Sequential containers</a></li>
	<li><a href="/cpp/stl/associative-containers">Associative containers</a></li>
</ul>

<p>In addition to these STL also provides classes called <a href="/cpp/stl/adaptive-containers">container adapters</a> that are variants of the same with reduced functionality to support a specific purpose.</p>

<p><b>Complexity</b> is an indication of the performance of the container with relation to the number of elements contained by it. Therefore, when we speak of constant complexity, as in the case of <code>std::unordered_map</code>, we mean that the performance of the container is unrelated to the number of elements contained by it. Such a container would need as much time to perform on a thousand elements as it would on a million.</p>

<p><b>Logarithmic</b> complexity as is the case with <code>std::map</code> indicates that the performance is proportional to the logarithm of the number of elements contained in it. Such a container would take twice as long in processing a million elements as it would in processing a thousand.</p>

<p><b>Linear</b> complexity means that the performance is proportional to the number of elements. Such a container would be a thousand times slower in processing a million elements than it would be in processing a thousand.</p>

<p>For a given container, the complexities may be different for differing operations. That is, the element insertion complexity may be constant but search complexity linear. Therefore, an understanding of how a container may perform in addition to the functionality it will be used with is key to choosing the right container.</p>

<p>The <b>sort criteria</b> of STL containers can be customized by programming <a href="/cpp/stl/function-object/binary-predicate">predicate functions</a>.</p>

<cite>Table. Property of STL's Container Classes</cite>
<table class="table table-dark">
	<thead>
		<tr>
			<td scope="col"><b>Container</b></td>
			<td scope="col"><b>Advantages</b></td>
			<td scope="col"><b>Disadvantages</b></td>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td scope="col"><b>Sequential</b></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td><code>std::vector</code></td>
			<td><p>Quick (constant time) insertion at the end.</p><p>Array-like access.</p></td>
			<td><p>Resizing can result in performance loss.</p><p>Search time is proportional to the number of elements in the container.</p><p>Insertion only at the end.</p></td>
		</tr>
		<tr>
			<td><code>std::deque</code></td>
			<td><p>All advantages of the <code>std::vector</code>. Additionally, offers constant-time insertion at the beginning of the container.</p></td>
			<td><p>Disadvantages of the <code>std::vector</code> with respect to performance and search are applicable to the <code>std::deque</code>.</p><p>Unlike the <code>std::vector</code>, the <code>std::deque</code> by specification does not need to feature the <code>reverse()</code> function that allows programmer to reserve memory space to be used. a feature that avoids frequent resizing to improve performance.</p></td>
		</tr>
		<tr>
			<td><code>std::list</code></td>
			<td><p>Constant time insertion at the front, middle, or end of the list.</p><p>Removal of elements from a <code>std::list</code>is a constant-time activity regardless of the position of the element.</p><p>Insertion or removal of an element does not invalidate iterators that point to the elements in the list.</p></td>
			<td><p>Elements cannot be accessed randomly given an index as in an array.</p><p>Accessing elements can be slower than the <code>std::vector</code> because elements are not stored in adjacent memory.</p><p>Search time is proportional to the number of elements in the container.</p></td>
		</tr>
		<tr>
			<td><code>std::forward_list</code></td>
			<td><p>Singly linked list class that allows iteration only in one direction.</p></td>
			<td><p>Allows insertion only at the front of the list via <code>push_front()</code></p></td>
		</tr>
		<tr>
			<td scope="col"><b>Associative</b></td>
			<td></td>
			<td></td>
		</tr>
		<tr>
			<td><code>std::set</code></td>
			<td><p>Search is not directly proportional to the number of elements in the container, rather to the logarithm thereof and hence is often significantly faster than sequential containers.</p></td>
			<td><p>Insertion of elements is slower than in sequential counterparts, as elements are sorted at insertion.</p></td>
		</tr>
		<tr>
			<td><code>std::unordered_set</code></td>
			<td><p>Search, insertion, and removal in this type of container are nearly independent to the number of elements in the container.</p></td>
			<td><p>As elements are weakly ordered, one cannot rely on their rlative position within the container.</p></td>
		</tr>
		<tr>
			<td><code>std::multiset</code></td>
			<td><p>Should be used when a set needs to contain nonunique values too.</p></td>
			<td><p>Insertions may be slower than in a sequential container as elements (pairs) are sorted on insertion.</p></td>
		</tr>
		<tr>
			<td><code>std::unordered_multiset</code></td>
			<td><p>Should be preferred over <code>std::unordered_set</code> when you need to contain nonunique values too.</p><p>Performance is similar to <code>std::unordered_set</code>, namely, constant average time for search, insertion and removal of elements, independent of size of container.</p></td>
			<td><p>Elements are weakly ordered, so one cannot rely on their relative position within the container.</p></td>
		</tr>
		<tr>
			<td><code>std::map</code></td>
			<td><p>Key-value pairs container that offers search performance proportional to the logarithm of number of elements in the container and hence often significantly faster than sequential containers.</p></td>
			<td><p>Elements (pairs) are sorted on insertion, hence insertion will be slower than in a sequential container of pairs.</p></td>
		</tr>
		<tr>
			<td><code>std::unordered_map</code></td>
			<td><p>Offers advantages of near constant time search, insertion, and removal of elements independent of the size of the container.</p></td>
			<td><p>Elements are weakly ordered and hence not suited to cases where order is important.</p></td>
		</tr>
		<tr>
			<td><code>std::multimap</code></td>
			<td><p>To be selected over <code>std::map</code> when requirements necessitate the need of key-value pairs container that holds elements with nonunique keys.</p></td>
			<td><p>Insertion of elements will be slower than in a sequential equivalent as elements are sorted on insertion.</p></td>
		</tr>
		<tr>
			<td><code>std::unordered_multimap</code></td>
			<td><p>To be selected over <code>std::unordered_map</code> when need a key-value pairs container where keys can be nonunique.</p><p>Allows constant average time insertion, search and removal of elements, independent of the size of the container.</p></td>
			<td><p></p></td>
		</tr>
	</tbody>
</table>
