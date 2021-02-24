/*
* @Author: yingmanwumen
* @Date:   2021-02-23 16:28:56
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 16:31:34
*/

#include <iostream>

using namespace std;

void swap2Num(int &a, int &b);

int main()
{
	int a, b;
	cout << "Enter the two numbers" << endl;
	cin >> a >> b;

	swap2Num(a, b);
	cout << "The swapped two numbers is: " << a << " " << b << endl;

	return 0;
}

void swap2Num(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}