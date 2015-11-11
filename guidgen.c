#include <stdio.h>
#include <windows.h>
#include <rpc.h>
#pragma comment(lib, "rpcrt4.lib")
int main(int argc, char* argv[])
{
	UUID uuid;
	if (RPC_S_OK == UuidCreate(&uuid)) {
		unsigned int* guid = (unsigned int*)&uuid;
		printf("%.8x%.8x%.8x%.8x", guid[0], guid[1], guid[2], guid[3]);
	} else {
		printf("guid creation failed\n");
	}
}

