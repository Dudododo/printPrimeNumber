#include <iostream>
#include <stdlib.h>

using namespace std;


//0：不是素数
//1：是素数
int checkPrimeNumber(int num)
{
	if (num == 0 || num == 1)
		return 0;
	else
	{
		for (int i = 2; i <= sqrt(num); i++)
		{
			if (num % i == 0)
				return 0;
		}
	}
	return 1;
}

int main()
{
	int totalnum = 100;

	for (int i = 0; i < totalnum; i+=2)
	{
		int res = checkPrimeNumber(i);
		if (res == 1)
		{
			cout << "the primenumber is:" << i << endl;
		}
		if (i == 2) //从2之后只检验奇数
			i = 1;
	}
	
	system("pause");
}

