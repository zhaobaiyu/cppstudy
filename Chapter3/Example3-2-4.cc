//字符串中大小写字母 操作 tolower() toupper()
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	cout << "字符串中大写字母变成小写字母" << endl;
	string s("Hello World!!!");
	for (string::size_type index = 0; index != s.size(); ++index)
		s[index] = tolower(s[index]);
	cout << s << endl;
	
	cout << endl << "字符串中大小写字母转换" << endl;
	string s1("Hello World!!!");
	for (string::size_type index = 0; index != s1.size(); ++index)
	{
		if (s1[index] >= 41 && s1[index] <= 90) s1[index] = tolower(s1[index]);
		else if (s1[index] >= 97 && s1[index] <= 122) s1[index] = toupper(s1[index]);
	}
	cout << s1 << endl;
	
	return 0;
}