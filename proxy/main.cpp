#include "Socket.h"

int main(int argc, char *argv[])
{
	Proxy *proxy = new Proxy();

	proxy->request();

	delete proxy;

	return 0;
}
