
#include <iostream>
#include<fstream>
#include<cassert>

void loadData(const char* filename, int* num) {
	std::ifstream fin(filename);
	assert(fin);
	fin >> *num;
}
void countDown(int num) {
	for (int i = num; i > 0; i--) {
		std::cout << i << ' ';
	}
	std::cout << "Mery Christmas!";
	std::cout << "Mery さん!";

}

int main()
{
	int num = 0;
	loadData("data.txt", &num);
	countDown(num);
	system("pause>0");
}

