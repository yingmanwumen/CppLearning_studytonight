/*
* @Author: yingmanwumen
* @Date:   2021-02-23 11:42:22
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 11:44:57
*/

#include <iostream>

using namespace std;

int main()
{
	int i, j, rows;

	cout << "Enter the number of rows in the pyramid: ";
	cin >> rows;

	for (i = 0; i < rows; i ++)
	{
		for (j = 0; j < i; j ++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}
