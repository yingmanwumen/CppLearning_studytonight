/*
* @Author: yingmanwumen
* @Date:   2021-02-24 10:56:52
* @Last Modified by:   yingmanwumen
* @Last Modified time: 2021-02-24 11:14:43
*/

#include <iostream>

using namespace std;

int GCD(int a, int b);
int LCM(int a, int b);


int main()
{
	int n1, n2, i;
	int gcd = 1, lcm = 1;

	cout << "Enter the numbers you want to find GCD and LCM" << endl;
	cin >> n1 >> n2;

	cout << "the GCD: " << GCD(n1, n2) << endl;
	cout << "the LCM: " << LCM(n1, n2) << endl;

	return 0;
}

int GCD(int a, int b)
{
	return (b == 0) ? a : GCD(b, a % b);
}

int LCM(int a, int b)
{
	return (a * b) / GCD(a, b);
}