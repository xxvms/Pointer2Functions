// Pointer2Functions.cpp : Defines the entry point for the console application.
//

#include <iostream>
void addFunc(int a, int b);
void subFunc(int a, int b);

int main()
{
	void(*add)(int a, int b);
	add = &addFunc;
	
	add(2, 3);

	void(*sub)(int a, int b);
	sub = &subFunc;

	sub(3, 4);

	system("pause");

    return 0;
}

void addFunc(int a, int b)
{
	std::cout << a + b << std::endl;
}

void subFunc(int a, int b)
{
	std::cout << a - b << std::endl;
}