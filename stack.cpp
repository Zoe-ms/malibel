#include "stack.h"

int main()
{
	myStack<int> mystack;
	int i;
	int &elem = i;

	mystack.stackPush(10);
	mystack.stackPush(20);
	mystack.stackPush(30);

	mystack.stackPrint();

	mystack.stackPop(elem);

	mystack.stackPrint();

	return 1;
}