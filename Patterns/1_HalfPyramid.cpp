/*
* @Author: yingmanwumen
* @Date:   2021-02-23 11:37:45
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 11:41:37
*/

/* Learn how to print a Half Pyramid Structure using character * */

#include <iostream>

using namespace std;

int main()
{
	int i, j, rows;

	cout << "Enter the number of rows in pyramid: ";
	cin >> rows;

	for (i = 0; i < rows; i ++)
	{
		for (j = 0; j < i; j ++)
			cout << '*';
		cout << endl;
	}

	return 0;
}
