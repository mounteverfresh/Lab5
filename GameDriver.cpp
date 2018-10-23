//  GameDriver.cpp

//  Guess which container is in use.

//  Commands:
//    put number    inserts number into the container
//    get           removes and reports a container element
//                    reports "empty" as appropriate
//    next          restarts with a new container
//    hint          reports the container type
//    quit          exits the program

//  Kyle Leadbetter
//  10-22-18

#include "pch.h"
#include <iostream>
#include <limits>
#include <stack>
#include <string>
using namespace std;

#include "Container.h"
#include "RanGen.h"
#include "Lab5MyStack.h"


void setContainer( RanGen & rng, Container * & c ) {
	delete c;
	switch( rng.randint( 1, 4 ) ) {
	case 1: {
		c = new Mob( rng.randint( 1, 10000 ) );
		break;
			}
	case 2: {
		c = new Queue;
		break;
			}
	case 3: {
		c = new Stack;
		break;
			}
	case 4: {
		c = new Priority_Queue;
		break;
			}
	}
}

string stringReversal1( string in)
{
	string reverse = "";
	stack<char> stack1;
	for (int i = 0; i < in.length(); i++)
	{
		stack1.push( (in.c_str())[i] );
	}
	while (!stack1.empty())
	{
		reverse += stack1.top();
		stack1.pop();
	}

	return reverse;
}

string stringReversal2(string input)
{
	string reverse = "";
	vector<char> vector1;
	for (int i = 0; i < input.length(); i++)
	{
		vector1.push_back((input.c_str())[i]);
	}
	while (!vector1.empty())
	{
		reverse += vector1.back();
		vector1.pop_back();
	}
	return reverse;
}

string stringReversal3(string input)
{
	string reverse = "";
	list<char> list1;
	for (int i = 0; i < input.length(); i++)
	{
		list1.push_back((input.c_str())[i]);
	}
	while (!list1.empty())
	{
		reverse += list1.back();
		list1.pop_back();
	}
	return reverse;
}

string stringReversal4(string input)
{
	string reverse = "";
	MyStack mStack;
	for (int i = 0; i < input.length(); i++)
	{
		mStack.push( (( input.c_str() )[i]) );
	}
	while (!mStack.isEmpty())
	{
		reverse += mStack.pull();
	}
	return reverse;
}


int
main() {

	cout << "Enter a string: ";
	string str;
	cin >> str;
	cout << endl << stringReversal1(str) << endl << stringReversal2(str) << endl << stringReversal3(str)<< endl << stringReversal4(str) << endl << endl; //test for the stringReversalX functions
   
	/* //commented all of this out so i wouldnt have to cancel the program to test edited reversal functions
	cout << "Enter seed for random generator:";
	unsigned long seed;
	cin >> seed;
	RanGen rng( seed );


	Container * c = NULL;
	setContainer( rng, c );
	cout << "  new container created" << endl;

	string command;

	cout << "Command? ";
	while( cin >> command ) {
		if( command == "quit" )
			break;

		else if( command == "next" ) {
			setContainer( rng, c );
			cout << "  new container created" << endl;
		}

		else if( command == "get" )
			if( c->empty() )
				cout << "  empty" << endl;
			else
				cout << "  " << c->get() << " removed" << endl;

		else if( command == "put" ) {
			double item;
			if( cin >> item ) {
				c->put( item );
				cout << "  " << item << " entered" << endl;
			}
			else {
				cout << "  bad item entered, put ignored" << endl;
				cin.clear();
			}
		}

		else if( command == "hint" ) {
			cout << "  container is ";
			c->printName( cout );
			cout << endl;
		}

		else {
			cout << "  unknown command" << endl;
			cout << "  known commands are" << endl;
			cout << "    quit:  exit from the program" << endl;
			cout << "    next:  start over with a new, empty container" << endl;
			cout << "    put x: insert the number x into the container" << endl;
			cout << "    get:   remove a number from the container and report it" << endl;
			cout << "    hint:  report the container type" << endl;
		}

		// skip past end of line
		cin.ignore( numeric_limits<int>::max(), '\n' );

		cout << "Command? ";
	}
	*/
	return 0;
}
