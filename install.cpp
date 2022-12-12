#include	<iostream>

using namespace std;

int main()
{
	system("curl -s --basic https://device-black.github.io/mpk_build/mpk -o /usr/local/bin/mpk");
	system("chmod +x /usr/local/bin/mpk && mkdir -p '/media/Mobile Pawn Kit' && mpk reinstall");
	return 0;
}
