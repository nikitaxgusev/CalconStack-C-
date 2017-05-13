#include "Stack.h"
#include <iostream>
#include <conio.h>
#include <windows.h>



int main()
{
	Stack<float> s;


	int value;
    char choice;
	std::cout << "\t\t\tCalculator" << std::endl;
	std::cout << "\t\t\tSay how many values will you have in your exercise?     ";
	std::cin >> value;

	for (int i(0); i < value; i++)
	{
		float n;
		std::cout << "\t\t\t->Enter  your ["<<i+1<<"]number:   ";
		std::cin >> n;
		s.Push(n);
	}
	
	
	while (1) {
		std::cout << "\t\t\tChoose operation:  +  , - , * , /:  "<<std::endl;
		choice = _getch();
		switch (choice)
		{
		case '+':
			s.Push(s.Pop() + s.Pop());
			break;
		case '-':
			s.Push(-s.Pop() + s.Pop());
			break;
		case '*':
			s.Push(s.Pop()*s.Pop());
			break;
		case '/':
			s.Push(s.Pop() / s.Pop());
			break;
		case '=':
			std::cout << "Result: " << s.Pop() << std::endl;
			std::cout << "Press SPACE after getting the result" << std::endl;
			break;
		case ' ':
			exit(-1);
			break;
		default:
			break;
		}
	}
	system("pause");

	return 0;
}