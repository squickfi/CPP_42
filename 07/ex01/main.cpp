#include <iostream>
#include "iter.hpp"

void inc(int &i) { i++; }

int main() {

	int *arr = new int[4];
	for (int i = 0; i < 4; i++)
		arr[i] = i;

	for (int i = 0; i < 4; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
	
	::iter(arr, 4, &inc);
	for (int i = 0; i < 4; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;

	delete[] arr;
	return 0;
}