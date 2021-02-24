/*
* @Author: yingmanwumen
* @Date:   2021-02-24 14:59:34
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-24 15:03:09
*/

/* A number is equal to its reverse */

#include <iostream>

using namespace std;

int reverseNum(int n);
bool isPalindrome(int n);

int main()
{
	int n;
	cout << "Please Enter the number: ";
	cin >> n;
	cout << (isPalindrome(n) ? "yes" : "no") << endl;
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

bool isPalindrome(int n)
{
	return reverseNum(n) == n;
}