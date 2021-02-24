/*
* @Author: yingmanwumen
* @Date:   2021-02-23 16:15:09
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 16:19:24
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	int sum = 0;

	cout << "Enter the number of integers you want to add: ";
	cin >> n;

	for (int i = 0; i < n; i ++)
	{
		int tmp;
		cout << "Enter number " << i + 1 << ": ";
		cin >> tmp;

		sum += tmp;
	}

	cout << "The sum of the numbers is: " << sum << endl;

	return 0;
}