#include<fstream>
#include<cassert>

void loadData(const char* filename, int* num) {
	std::ifstream fin(filename);
	assert(fin);
	fin >> *num;
}
