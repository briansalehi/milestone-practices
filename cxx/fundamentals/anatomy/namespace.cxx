#include <iostream>

// nested namespaces
namespace os
{
	namespace network
	{
		namespace tcp { }
	}
}

// c++17 alternative
namespace os::network::udp { }

namespace os
{
	// function implementation inside namespace
	void run()
	{
		using namespace std;
		cout << "running" << endl;
	}

	// function declaration inside namespace
	void shutdown();
}

// function implementation outside namespace
void os::shutdown()
{
	std::cout << "shutting down" << std::endl;
}

int main()
{
	os::run();

	using os::shutdown;
	shutdown();

    return 0;
}
