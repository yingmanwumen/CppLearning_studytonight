/*
* @Author: yingmanwumen
* @Date:   2021-02-23 16:02:48
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 16:13:10
*/

#include <iostream>

using namespace std;

int main()
{
	int rows, cols;

	cout << "Enter the number of rows: ";
	cin >> rows;

	int n = 1;
	for (int i = 0; i < rows; i ++)
	{
		cols = i;

		for (int j = 0; j < cols; j ++)
		{
			cout << n ++ << " ";
		}
		cout << endl;
	}

	return 0;
}