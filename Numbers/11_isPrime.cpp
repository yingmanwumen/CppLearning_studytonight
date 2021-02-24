/*
* @Author: yingmanwumen
* @Date:   2021-02-24 11:35:26
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-24 14:53:19
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);

int main()
{
	int n;
	cout << "Please Enter the Num: ";
	cin >> n;
	cout << (isPrime(n) ? "is Prime" : "not Prime") << endl;

	return 0;
}

bool isPrime(int n)
{
	if (n == 1 || n == 2)
		return true;
	int base = 2;
	int sq = sqrt(n);
	while (base++ <= sq)
		if (n % sq == 0)
			return false;
	return true;
}