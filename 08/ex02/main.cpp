#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "stack size: " << mstack.size() << std::endl;
	std::cout << "top element: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "stack size (after one pop()): " << mstack.size() << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	
	std::cout << "stack size: " << mstack.size() << std::endl;
	for (; it != mstack.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << std::endl;
	
	mstack.pop();
	mstack.push(17);
	mstack.push(371);

	it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	
	std::cout << "stack size: " << mstack.size() << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	return 0;
}