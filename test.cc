#include <iostream>
using namespace std;
int main()
{
	int ival = 1024;
	int &refVal = ival;
	
	refVal += 2;
	int ii = refVal;
	
	cout << ival << endl << ii << endl << refVal << endl << &refVal << endl;
	
	enum meiju {aa, bb, cc, dd};
	
	cout << aa << bb << cc << dd << endl;
	
	return 0;
}