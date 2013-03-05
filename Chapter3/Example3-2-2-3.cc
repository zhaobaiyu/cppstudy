//Function "getline" 读取正行文本
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line;
	
	while (getline(cin, line))
		cout << line << endl;
	return 0;
}