#include<iostream>
#include<string>

#include "MyStack.h"
#include "MyStack.cpp"
#include "Point.h"

using namespace std;

#define button 2 


int main()
{	

#if(button == 1)
	
	MyStack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;

	
	MyStack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<char> *p = new MyStack<char>();
	p->push('a');
	cout << p->pop() << endl;
	delete p;
#endif	

#if(button ==2)

	MyStack<int *> ipStack; //int*만 저장하는 스택
	int *p = new int[3];
	for (int i = 0; i < 3; i++) p[i] = i * 10;
	ipStack.push(p);
	int *q = ipStack.pop();
	for (int i = 0; i < 3; i++) cout << q[i] << ' ';
	cout << endl;
	delete [] p;

	MyStack<Point> pointStack;
	Point a(2, 3), b;
	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	MyStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	MyStack<string> stringStack;
	string s = "C++";
	stringStack.push(s);
	stringStack.push("java");
	
	cout << stringStack.pop() << ' ';
	cout << stringStack.pop() << endl;
#endif
}

/*
button ==1일 때, 출력결과
3
3.5
a
*/
/*
button ==2 일 때, 출력결과
0 10 20
(2,3)
(10,20)
java C++
*/
