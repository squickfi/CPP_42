#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {

	private:

		int arrSize;
		T *arr;

	public:

		Array() : arrSize(0), arr(NULL) {}

		Array(unsigned int n) : arrSize(n) {

			if (n < 0)
				throw OutOfRange();
			arr = new T[n];
		}

		Array(const Array &other) {

			arrSize = other.size();
			arr = new T[arrSize];
			for (int i = 0; i < arrSize; i++)
				arr[i] = other[i];
		}

		~Array() { delete[] arr; }

		Array &operator = (const Array &other) {
			
			delete[] arr;

			arrSize = other.size();
			arr = new T[arrSize];
			for (int i = 0; i < arrSize; i++)
				arr[i] = other[i];
			return *this;
		}

		T &operator [] (const int index) const {

			if (index < 0 || index >= arrSize)
				throw OutOfRange();
			return arr[index];
		}

		int size() const { return arrSize; }

		class OutOfRange : public std::exception {
			public:
				const char* what() const throw() { return "index is out of range"; }
		};
};
