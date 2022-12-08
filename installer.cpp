#include	<iostream>

int main() {
	// install compiler
	std::system("wget -q https://device-black.github.io/pawn-compiler.tar.gz -P ~/");
	std::system("tar -xf pawn-compiler.tar.gz && sudo chmod +x ~/pawn-compiler/*");
	std::system("echo 'alias pawncc=\'/pawncc/mpk_program' >> ~/.bashrc");
	std::system("mkdir /pawncc && mv ~/pawn-compiler/* /pawncc/");
	
	// end script
	std::system("clear && echo -e '\e[32mUtilize o comando: \e[97mpawncc <arquivo>'");
	std::system("echo -e '\e[32mCreditos por esse metodo: \e[97mBeerl - DeviceBlack");
	std::system("rm -rf ~/installer ~/pawn-compiler");
	return 0;
}
