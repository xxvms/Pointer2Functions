// Pointer2Functions.cpp : Defines the entry point for the console application.
//

#include <iostream>
void addFunc(int, int);

int main()
{
	void(*add)(int a, int b);
	add = &addFunc;
	
	add(2, 3);

	system("pause");

    return 0;
}

void addFunc(int a, int b)
{
	std::cout << a + b << std::endl;
}