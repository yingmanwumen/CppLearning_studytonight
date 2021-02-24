/*
* @Author: yingmanwumen
* @Date:   2021-02-23 16:32:10
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 16:34:53
*/

/* swap 2 numbers without 3rd variable */

#include <iostream>

using namespace std;

void swap2Num(int &a, int &b);

int main()
{
	int a, b;

	cout << "Enter two numbers" << endl;
	cin >> a >> b;

	swap2Num(a, b);

	cout << "The swapped 2 Number is " << a << ' ' << b << endl;
	return 0;
}

void swap2Num(int &a, int &b)
{
	a += b;
	b = a - b;
	a = a - b;
}