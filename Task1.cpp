#include <iostream>

int main()
{
	int startS, n, curS;
	std::cin >> startS >> n;
	curS = startS;
	while (n - curS >= 0)
	{
		n -= curS;
		if (curS == 1)
			curS = startS;
		else
			curS--;
	}
	std::cout << n << std::endl;
	return 0;
}