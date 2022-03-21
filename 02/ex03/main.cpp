#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

void ft_print_result(bool is_there) {

	if (is_there)
		std::cout << "The point IS inside the triangle c:\n\n";
	else
		std::cout << "The point is NOT inside the triangle c:\n\n";
}

int main( void ) {
	
	{
		Point a(3.0f, 7.7f), b(3.45f, 13.11f), c(5.6f, 8.71f);
		Point point;

		std::cout << "Triangle 1: a(" << a.getXvalue() << ", " << a.getYvalue() << "), " 
					<< "b(" << b.getXvalue() << ", " << b.getXvalue() << "), " 
					<< "c(" << c.getXvalue() << ", " << c.getXvalue() << ")\n";

		std::cout << "Point(0.0, 0.0) - default constructor\n";

		ft_print_result(bsp(a, b, c, point));
	}

	{
		Point a(4.15f, 5.4f), b(1.0f, 11.75f), c(7.6f, 9.1f);
		Point point(5.11f, 8.13f);

		std::cout << "Triangle 1: a(" << a.getXvalue() << ", " << a.getYvalue() << "), " 
					<< "b(" << b.getXvalue() << ", " << b.getXvalue() << "), " 
					<< "c(" << c.getXvalue() << ", " << c.getXvalue() << ")\n";

		std::cout << "Point(" << point.getXvalue() << ", " << point.getYvalue() << ")\n";

		ft_print_result(bsp(a, b, c, point));
	}

	{
		Point a(3.0f, 7.7f), b(3.45f, 13.11f), c(5.6f, 8.71f);
		Point point(2.48f, 9.17f);

		std::cout << "Triangle 1: a(" << a.getXvalue() << ", " << a.getYvalue() << "), " 
					<< "b(" << b.getXvalue() << ", " << b.getXvalue() << "), " 
					<< "c(" << c.getXvalue() << ", " << c.getXvalue() << ")\n";

		std::cout << "Point(" << point.getXvalue() << ", " << point.getYvalue() << ")\n";

		ft_print_result(bsp(a, b, c, point));
	}

	{
		Point a(-1.0f, -1.0f), b(-1.0f, 0.0f), c(1.0f, 1.0f);
		Point point(-0.0f, 0.0f);

		std::cout << "Triangle 1: a(" << a.getXvalue() << ", " << a.getYvalue() << "), " 
					<< "b(" << b.getXvalue() << ", " << b.getXvalue() << "), " 
					<< "c(" << c.getXvalue() << ", " << c.getXvalue() << ")\n";

		std::cout << "Point(" << point.getXvalue() << ", " << point.getYvalue() << ")\n";
		
		ft_print_result(bsp(a, b, c, point));
	}

	return 0;
}