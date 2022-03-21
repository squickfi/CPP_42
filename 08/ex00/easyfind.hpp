#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int value) {

	typename T::iterator it;
	it = std::find(container.begin(), container.end(), value);
	return it;
}
