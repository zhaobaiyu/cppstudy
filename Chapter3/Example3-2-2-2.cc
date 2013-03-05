//读入位置数目的string对象，每行输出一个单词
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	
	while (cin >> word)
		cout << word << endl;
	return 0;
}