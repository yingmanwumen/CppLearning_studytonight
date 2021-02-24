/*
* @Author: yingmanwumen
* @Date:   2021-02-24 14:53:55
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-24 14:58:36
*/

#include <iostream>

using namespace std;

int reverseNum(int n);

int main()
{
	int n;
	cout << "Please Enter the num: ";
	cin >> n;
	cout << reverseNum(n) << endl;

	return 0;
}

int reverseNum(int n)
{
	int res = 0;
	do
	{
		int tmp = n % 10;
		res = res * 10 + tmp;
		n /= 10;
	}while (n);
	return res;
}