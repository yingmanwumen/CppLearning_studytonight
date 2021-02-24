/*
* @Author: yingmanwumen
* @Date:   2021-02-24 11:29:24
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-24 11:34:32
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int n);

int main()
{
	int n;
	cout << "Please Enter the num: ";
	cin >> n;

	cout << "It is"
	<< (isPerfectSquare(n) ? " " : " not ")
	<< "a Perfect Square" << endl;

	return 0;
}

bool isPerfectSquare(int n)
{
	int sr = sqrt(n);
	return sr * sr == n;
}