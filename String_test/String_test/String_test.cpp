/*
String class�� �̿��Ͽ� ���ڿ��� �ٷ�� �����̴�.
*/

#include <iostream>
#include <string>

using namespace std;

#define button 5

int main()
{
#if(button == 1)
	string str;
	string address("����Ư���� ���ʱ�");
	string copyAddress(address);

	char text[] = {'L','O', 'V', 'E', 'C', '+', '+', '\0'};
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;


#endif

#if(button == 2)
	string names[5];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];
	for (int i = 1; i<5; i++)
	{
		if (latter < names[i])
		{
			latter = names[i];
		}
	}

	cout << "�������� ���� �ڿ� ������ ���ڿ���" << latter << endl;

	string s;
	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���";
#endif

#if(button == 3)
	string s;
	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�.(�ѱ� �ȵ�)" << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0; i < len; i++)
	{
		string first = s.substr(0, 1);
		string sub = s.substr(1, len - 1);
		s = sub + first;
		cout << s << endl;
	}
#endif

#if(button ==4)
	string s;
	
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;
	while (1)
	{
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1)
		{
			string part = s.substr(startIndex);
			if (part == "") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = fIndex = startIndex;
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "���ڵ��� ����" << sum;
#endif

#if(button ==5)
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore();

	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');
	cout << "replace: ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true)
	{
		int fIndex = s.find(f, startIndex);
		if (fIndex == -1)
			break;
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}

	cout << s << endl;
#endif
}
