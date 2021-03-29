<p><b>Associative</b> containers are those that store data in a sorted fashion—akin to a dictionary. This results in <b>slower insertion times</b>, but presents significant advantages when it comes to <b>searching</b>.</p>

<p>The associative containers supplied by STL are:</p>

<ul>
	<li><code>std::set</code><p>Stores unique values sorted on insertion in a container featuring logarithmic complexity</p></li>
	<li><code>std::unordered_set</code><p>Stores unique values sorted on insertion in a container f eaturing near constant complexity.</p></li>
	<li><code>std::map</code><p>Stores key-value pairs sorted by their unique keys in a container with logarithmic complexity</p></li>
	<li><code>std::unordered_map</code><p>Stores key-value pairs sorted by their unique keys in a container with near constant complexity.</p></li>
	<li><code>std::multiset</code><p>Akin to a set. Additionally, supports the ability to store mul-tiple items having the same value;</p></li>
	<li><code>std::unordered_multiset</code><p>Akin to a unordered_set. Additionally, supports the ability to store multiple items having the same value;</p></li>
	<li><code>std::multimap</code><p>Akin to a map. Additionally, supports the ability to store key-value pairs where keys don’t need to be unique.</p></li>
	<li><code>std::unordered_multimap</code><p>Akin to a unordered_map. Additionally, supports the ability to store key-value pairs where keys don’t need to be unique.</p></li>
</ul>
