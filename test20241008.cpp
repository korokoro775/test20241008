
#include <iostream>
#include<fstream>
#include<cassert>

void countDown(int num) {
	for (int i = num; i > 0; i--) {
		std::cout << i << ' ';
	}
	std::cout << "Mery Christmas!";
	std::cout << "Mery さん!";

}


void loadData(const char* filename, int* num) {
	std::ifstream fin(filename);
	assert(fin);
	fin >> *num;
}

int main()
{
	countDown(3);
	system("pause>0");
}

