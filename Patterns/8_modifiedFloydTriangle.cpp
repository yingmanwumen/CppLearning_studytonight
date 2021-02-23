/*
* @Author: yingmanwumen
* @Date:   2021-02-23 16:06:52
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 16:10:43
*/

#include <iostream>

using namespace std;

int main()
{
	int rows;

	cout << "Enter the number of rows: ";
	cin >> rows;

	int n = 0;
	for (int i = 0; i < rows; i ++)
	{
		for (int j = 0; j <= i; j ++)
			cout << n + j + 1 << " ";

		n ++;
		cout << endl;
	}

	return 0;
}