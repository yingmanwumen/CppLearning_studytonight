/*
* @Author: yingmanwumen
* @Date:   2021-02-23 11:51:18
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 11:54:44
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
		cout << "Row #" << i << " contains " << (rows - i + 1) << '\t';
		for (int j = rows; j > i; j --)
			cout << "*";
		cout << endl;
	}

	return 0;
}