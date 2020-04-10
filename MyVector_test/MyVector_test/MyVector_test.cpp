/*
이 예시는 복사생성자, 동적객체생성, 중복함수 개념에 대한 예시입니다.
*/

#include <iostream>

using namespace std;

class MyVector_test
{
	int *p;
	int size;

public:
	MyVector_test(int n =100)
	{
		p = new int[n];
		size = n;
		
		cout << "생성자가 생성되었습니다" << size << endl;
	}
	MyVector_test(MyVector_test &myvector)
	{
		this->p = new int[myvector.size];
		this->size = myvector.size;

		cout << "복사생성자가 생성되었습니다." << size << endl;
	}
	~MyVector_test() 
	{
		delete [] p;
	}
};

int main()
{
	MyVector_test *v1,*v2,*v3;

	v1 = new MyVector_test();
	v2 = new MyVector_test(1024);
	v3 = new MyVector_test(*v2);

	delete v1;
	delete v2;
	delete v3;
}