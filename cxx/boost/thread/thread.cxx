#include <iostream>
#include <boost/thread.hpp>
#include <boost/chrono.hpp>

void function1()
{
	for (int i = 0; i < 5; ++i) {
		boost::this_thread::sleep_for(boost::chrono::milliseconds(300));
		std::cout << "function 1\n";
	}
}

void function2()
{
	for (int i = 0; i < 5; ++i) {
		boost::this_thread::sleep_for(boost::chrono::milliseconds(300));
		std::cout << "function 2\n";
	}
}

int main()
{
	boost::thread_group threads;
	threads.create_thread(function1);
	threads.create_thread(function2);
	threads.join_all();

	return 0;
}
