// 关于cin作为while条件，这里有个解释http://blog.csdn.net/bladelyer/article/details/8505912
#include <iostream>
int main()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}