/*
* @Author: yingmanwumen
* @Date:   2021-02-23 12:01:09
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 12:08:57
*/

#include <iostream>

using namespace std;

int main()
{
	int rows, cols;

	cout << "Enter the number of rows in the pyramid: ";
	cin >> rows;

	for (int i = 0; i < rows; i ++)
	{
		char first = 'A';
		char last = first + rows - i - 1;
		char c = first;
		cols = rows - i;
		cout << "Row #" << i << " contains characters form " << first << " to " << last << '\t';
		for (int j = 0; j < cols; j ++)
		{
			cout << c << " ";
			c += 1;
		}
		cout << endl;
	}

	return 0;
}