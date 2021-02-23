/*
* @Author: yingmanwumen
* @Date:   2021-02-23 11:55:28
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 12:09:52
*/

#include <iostream>

using namespace std;

int main()
{
	int rows;

	cout << "Enter the number of rows: ";
	cin >> rows;

	for (int i = 0; i < rows; i ++)
	{
		int last = rows - i;
		cout << "Row #" << i << " contains numbers from 1 to" << last << '\t';
		for (int j = 0; j < last; j ++)
		{
			cout << j + 1 << " ";
		}
		cout << endl;
	}

	return 0;
}