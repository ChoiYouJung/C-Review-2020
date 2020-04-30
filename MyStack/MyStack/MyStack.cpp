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
		return 0; //����ǥ��
	}
	retData = data[tos--];
	return retData;
}