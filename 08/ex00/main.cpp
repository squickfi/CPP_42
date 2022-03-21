#include "easyfind.hpp"
#include <vector>

int main() {

	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i + 10);
	
	std::cout << "Values in vector: " << std::endl;
	std::vector<int>::iterator it = vec.begin();
	for (; it != vec.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "Trying to find 13: " << std::endl;
	it = easyfind(vec, 13);
	std::cout << "*it = " << *it << std::endl;
	std::cout << "Trying to find 137: " << std::endl;
	it = easyfind(vec, 137);
	std::cout << "*it = " << *it << std::endl;

	return 0;
}