#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
 string word;
 vector<string> text;
 cout<<"请输入字符串并以stop结束！！！"<<endl;
 while(cin>>word)
 {
  if(word=="stop")
   break;
  text.push_back (word);
 }
 cout<<"运行结果为："<<endl;
 for(int i=0;i<text.size ();i++)
  cout<<text[i]<<endl;
 return 0;
}