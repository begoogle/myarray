#include "MyArray.hpp"

int main()
{
	MyArray arr1{ 3,2,1 };
	MyArray arr2(4);
	MyArray arr4 = arr2;
	MyArray arr5 = std::move(arr4);

	std::cout << arr1.toString();

	return 0;
}