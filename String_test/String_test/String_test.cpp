/*
String class을 이용하여 문자열을 다루는 예시이다.
*/

#include <iostream>
#include <string>

using namespace std;

#define button 5

int main()
{
#if(button == 1)
	string str;
	string address("서울특별시 서초구");
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
		cout << "이름 >> ";
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

	cout << "사전에서 가장 뒤에 나오는 문자열은" << latter << endl;

	string s;
	cout << "아래에 문자열을 입력하세요";
#endif

#if(button == 3)
	string s;
	cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다.(한글 안됨)" << endl;
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
	
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
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
	cout << "숫자들의 합은" << sum;
#endif

#if(button ==5)
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
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
