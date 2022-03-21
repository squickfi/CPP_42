#pragma once

template <typename T> void iter(T *arr, int length, void (*foo)(T &)) {

	for (int i = 0; i < length; i++)
		foo(arr[i]);
}
