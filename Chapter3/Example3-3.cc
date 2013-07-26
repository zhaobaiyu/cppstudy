#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec;
	vector<int> ivec4(10, -1);
	vector<string> svec(10, "hi!");
	string word;
	vector<string> text;
	while (cin >> word){
		text.push_back(word);
	}
	
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
		ivec[ix] = 0;
}