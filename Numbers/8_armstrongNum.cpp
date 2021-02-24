/*
* @Author: yingmanwumen
* @Date:   2021-02-24 11:15:34
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-24 11:23:16
*/

/* 153 is an armstrong num: 1^3 + 5^3 + 3^3 = 153 
   213 is not an armstrong num: 2^3 + 1^3 + 3^3 != 213
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int n);

int main()
{
	int n;

	cout << "Enter the num: ";
	cin >> n;

	cout << n << " is" <<
	(isArmstrong(n) ? " " : " not ")
	<< "an armstrong num" << endl;

	return 0;
}

bool isArmstrong(int n)
{
	int tmp = 0, m = n;
	while (m)
	{
		int item = m % 10;
		tmp += pow(item, 3);
		m /= 10;
	}
	return tmp == n;
}