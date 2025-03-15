#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::cout << "file1.txt: \n";
	std::ifstream in("file1.txt");
	std::string word = "";
	while (!in.eof())
	{
		in >> word;	
		std::cout << word << std::endl;
	}
	
	in.close();
	return 0;
}