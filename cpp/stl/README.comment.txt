<p><b>Containers</b> are STL classes that are used to store data. STL supplies two types of container classes:</p>

<ul>
	<li><a href="/cpp/stl/sequencial-containers">Sequential containers</a></li>
	<li><a href="/cpp/stl/associative-containers">Associative containers</a></li>
</ul>

<p>In addition to these STL also provides classes called <a href="/cpp/stl/adaptive-containers">container adapters</a> that are variants of the same with reduced functionality to support a specific purpose.</p>

<p><b>Complexity</b> is an indication of the performance of the container with relation to the number of elements contained by it. Therefore, when we speak of constant complexity, as in the case of <code>std::unordered_map</code>, we mean that the performance of the container is unrelated to the number of elements contained by it. Such a container would need as much time to perform on a thousand elements as it would on a million.</p>

<p><b>Logarithmic</b> complexity as is the case with <code>std::map</code> indicates that the performance is proportional to the logarithm of the number of elements contained in it. Such a container would take twice as long in processing a million elements as it would in processing a thousand.</p>

<p><b>Linear</b> complexity means that the performance is proportional to the number of elements. Such a container would be a thousand times slower in processing a million elements than it would be in processing a thousand.</p>

<p>For a given container, the complexities may be different for differing operations. That is, the element insertion complexity may be constant but search complexity linear. Therefore, an understanding of how a container may perform in addition to the functionality it will be used with is key to choosing the right container.</p>

<p>The <b>sort criteria</b> of STL containers can be customized by programming <a href="/cpp/stl/function-object/binary-predicate">predicate functions</a>.</p>
