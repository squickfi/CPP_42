#include "Span.hpp"

int	main( void )
{
	std::cout << "span1: " << std::endl;

	Span	span1(5);

	span1.addNumber(4);
	try {

		std::cout << span1 << std::endl;
	}
	catch (std::exception &e) {

		std::cerr << e.what() << std::endl;
	}
	try {

		span1.addNumber(7);
		std::cout << span1 << std::endl;
		span1.addNumber(2);
		std::cout << span1 << std::endl;
		span1.addNumber(6);
		std::cout << span1 << std::endl;
		span1.addNumber(25);
		std::cout << span1 << std::endl;
		span1.addNumber(4);
	}
	catch (std::exception &e) {

		std::cerr << e.what() << std::endl;
	}

	std::cout << span1 << std::endl;

	std::cout << "\nspan2: " << std::endl;

	Span	span2(500000);
	try {

		span2.addNumber(3);
		span2.addNumber(30000);
		span2.addRandomNumbers(500);
		span2.addRandomNumbers(500000, 5000000);
		span2.addRandomNumbers(500000, 5000000);
	}
	catch(const std::exception& e) {

		std::cerr << e.what() << '\n';
	}
	std::cout << span2 << std::endl;

	std::cout << "\nspan3: " << std::endl;

	Span	span3(500);
	std::vector<int> vec;
	for (int i = 0; i < 5; i++)
		vec.push_back(i * 10);
	try {

		span3.addWithIterators(vec.begin(), vec.end());
		for (int i = 0; i < 500; i++)
			vec.push_back(i * 10);
		span3.addWithIterators(vec.begin(), vec.end());
	}
	catch(const std::exception& e) {

		std::cerr << e.what() << '\n';
	}
	std::cout << span3 << std::endl;
	return 0;
}
