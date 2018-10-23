// Kyle Leadbetter
// 10-22-18
// Lab5

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class MyStack
{
public:
	bool isEmpty() const;
	void push(const char &c);
	char pull();

private:
	list<char> items;
};