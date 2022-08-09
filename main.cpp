// Includes
#include <enet/enet.h>
#include <iostream>

// Namespaces
using namespace std;

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Winmm.lib")

int main(int argc, char** argv)
{
	if (enet_initialize() != 0)
	{
		fprintf(stderr, "An error occurred while initializing ENet.\n");
		cout << "An error occurred while initializing ENet.\n" << endl;
		return EXIT_FAILURE;
	}
	atexit(enet_deinitialize);
	

	return EXIT_SUCCESS;
}