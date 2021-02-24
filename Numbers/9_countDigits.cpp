/*
* @Author: yingmanwumen
* @Date:   2021-02-24 11:24:20
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-24 11:28:28
*/

#include <iostream>

using namespace std;

int countDigit(int n);

int main()
{
	int n;

	cout << "Please Enter the num: ";
	cin >> n;

	cout << "the digit of " << n << " is "
	<< countDigit(n) << endl;

	return 0;
}

int countDigit(int n)
{
	int res = 1;
	while (n /= 10)
		res ++;
	return res;
}