// Kyle Leadbetter
// 10-22-18
// Lab5

#include "pch.h"
#include "Lab5MyStack.h"

bool MyStack::isEmpty() const
{
	return items.empty();
}

void MyStack::push(const char &c)
{
	items.push_back(c);
}

char MyStack::pull()
{
	char temp = items.back();
	items.pop_back();
	return temp;
}