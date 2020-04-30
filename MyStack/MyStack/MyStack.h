#ifndef MYSTACK_H 
#define MYSTACK_H

using namespace std;

template <class T>
class MyStack
{
	int tos;
	T data[100];

public:
	MyStack();
	void push(T elemant);
	T pop();
};

#endif 
