#include<iostream>

using namespace std;

int main()
{
	cout << "�Է��� ������ ������?";

	int n;
	cin >> n; // ������ ���� �Է�
	if (n <= 0) return 0;
	int *p = new int[n];
	if (!p) {
		cout << "�޿����� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "��° ����: ";
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "��� = " << sum / n << endl;

	delete [] p;
	
	cout << "second test" << endl;

	char *pa = new char[5];

	char *ppa = pa;

	ppa[0] = 'a';

	pa[1] = 'b';

	cout << ppa[0] << endl;

	cout << pa[1] << endl;

	cout << ppa[1] << endl;

	delete pa;
}