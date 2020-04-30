#include<iostream>

#include "MyStack.h"

using namespace std;

template <class T>
MyStack<T>::MyStack()
{
	tos = -1;
}

template <class T>
void MyStack<T>::push(T element)
{
	if (tos == 99)
	{
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop()
{
	T retData;
	if (tos == -1)
	{
		cout << "Stack empty";
		return 0; //오류표시
	}
	retData = data[tos--];
	return retData;
}