#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::cout << "file1.txt: \n";
	std::ifstream in("file1.txt");
	char buffer[256];
	while (!in.eof())
	{
		in.getline(buffer, 256);	
		std::cout << buffer << std::endl;
	}
	
	in.close();
	return 0;
}