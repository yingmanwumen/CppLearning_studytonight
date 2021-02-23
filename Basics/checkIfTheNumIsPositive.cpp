/*
* @Author: yingmanwumen
* @Date:   2021-02-23 11:19:55
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 11:21:53
*/

#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Enter any non-zero Number: ";
	cin >> num;

	if (num > 0)
		cout << "Entered Number is positive" << endl;
	else
		cout << "Entered Number is negative" << endl;

	return 0;
}