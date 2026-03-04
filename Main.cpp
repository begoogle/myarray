#include "MyArray.hpp"

int main()
{
	MyArray arr(5);
	
	std::cin >> arr;

	std::cout << arr.toString();

	return 0;
}