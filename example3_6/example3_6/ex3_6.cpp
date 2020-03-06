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
	cout << "������" << radius << "�� ����" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::~Circle()
{
	cout << "������" << radius << "�� �Ҹ�" << endl;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}

Circle globalDonut(1000); // ���� ��ü ����
Circle globalPizza(2000); // ���� ��ü ����

void f()
{
	Circle fDonut(100); // ���� ��ü ����
	Circle fPizza(200); // ���� ��ü ����
}

int main()
{
	Circle mainDonut; // ���� ��ü ����
	Circle mainPizza(30); // ���� ��ü ����
	f();
}

/*
���α׷� ���� ���

������ 1000 �� ����
������ 2000 �� ����
������ 1 �� ����
������ 30 �� ����
������ 100 �� ����
������ 200 �� ����
������ 200 �� �Ҹ�
������ 100 �� �Ҹ�
������ 30 �� �Ҹ�
������ 1 �� �Ҹ�
������ 200 �� �Ҹ�
������ 100 �� �Ҹ�
*/