<p><b>Container adapters</b> are variants of sequential and <b>associative containers</b> that have limited functionality and are intended to fulfill a particular purpose. The main adapter classes are:</p>

<ul>
	<li><code>std::stack</code><p>Stores elements in a LIFO (last-in-first-out) fashion, allowing  elements to be inserted (pushed) and removed (popped) at the top.</p></li>
	<li><code>std::queue</code><p>Stores elements in FIFO (first-in-first-out) fashion, allowing the first element to be removed in the order they’re inserted.</p></li>
	<li><code>std::priority_queue</code><p>Stores elements in a sorted order, such that the one whose value is evaluated to be the highest is always first in the queue.</p></li>
</ul>

<p>The Standard Template Library (STL) features containers that adapt others to simulate stack and queue behavior. Such containers that internally use another and present a distinct behavior are called adaptive containers.</p>

<p>Stacks and queues are like arrays or lists but present a restriction on how elements are inserted, accessed, and removed.</p>
