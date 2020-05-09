#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define button 2

int main()
{
#if(button ==1)
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	v[0] = 10;
	int m = v[2];
	v.at(2) = 5;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

#endif

#if(button==2)
	vector<string> sv;
	string name;

	cout << "이름을 5개 입력하라" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name = sv.at(0);
	for (int i = 0; i < sv.size(); i++)
	{
		if (name < sv[i])
			name = sv[i];
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;

#endif
}