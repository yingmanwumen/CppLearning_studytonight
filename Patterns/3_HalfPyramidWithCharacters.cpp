/*
* @Author: yingmanwumen
* @Date:   2021-02-23 11:46:10
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 11:50:33
*/

#include <iostream>

using namespace std;

int main()
{
	int i, j, rows;
	char c= 'A';

	cout << "Enter the number of rows in the pyramid: ";
	cin >> rows;

	for (i = 0; i < rows; i ++)
	{
		cout << "Row #" << i << "   ";
		c = 'A';

		for (j = 0; j < i; j ++)
		{
			cout << c << " ";
			c += 1;
		}
		cout << endl;
	}

	return 0;
}