#include<iostream>

using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle()
{
	radius = 1;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::~Circle()
{
	cout << "반지름" << radius << "원 소멸" << endl;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}

Circle globalDonut(1000); // 전역 객체 생성
Circle globalPizza(2000); // 전역 객체 생성

void f()
{
	Circle fDonut(100); // 지역 객체 생성
	Circle fPizza(200); // 지역 객체 생성
}

int main()
{
	Circle mainDonut; // 지역 객체 생성
	Circle mainPizza(30); // 지역 객체 생성
	f();
}

/*
프로그램 실행 결과

반지름 1000 원 생성
반지름 2000 원 생성
반지름 1 원 생성
반지름 30 원 생성
반지름 100 원 생성
반지름 200 원 생성
반지름 200 원 소멸
반지름 100 원 소멸
반지름 30 원 소멸
반지름 1 원 소멸
반지름 200 원 소멸
반지름 100 원 소멸
*/