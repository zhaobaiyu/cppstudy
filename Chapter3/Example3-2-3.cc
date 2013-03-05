//string的 size() 和 empty() 操作
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string st("The expense of spirit\n");
	cout << "The size of " << st << "is " << st.size()
		<< " characters, including the newline" << endl << st.empty() << endl << endl;
	
	cout << "字符串逐个字符显示" << endl;
	string str("some string");
	for (string::size_type ix = 0; ix != str.size(); ++ix)
		cout << str[ix] << endl;
	
	return 0;

}