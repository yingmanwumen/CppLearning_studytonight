/*
* @Author: yingmanwumen
* @Date:   2021-02-23 16:25:12
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 16:28:22
*/

#include <iostream>

using namespace std;

int main()
{
	int factorial = 1;
	int n;

	cout << "Enter the num: ";
	cin >> n;

	for (int i = 1; i <= n; i ++)
		factorial *= i;

	cout << "The factorial of " << n << " is: " << factorial << endl;

	return 0;
}