/*
* @Author: yingmanwumen
* @Date:   2021-02-23 16:21:16
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-23 16:24:25
*/

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Enter the number: ";
	cin >> n;

	cout << ((n % 2 == 0) ?
		"It is Even" :
		"It is Odd")
		<< endl;

	return 0;
}