﻿#include <iostream>
using namespace std;


float F(float x, int n)
	{
		int a;
		if (n % 2 == 0)

			a = 1;
		else
			a = -1;
		float temp = 1;
		for (int i = 1; i <= 2 * n + 1; i++)
			temp = temp * x / i;
		return a * temp;
	}
int main()
{
	float x, sin = 0;
	cout << "Nhap gia tri sin sin can tinh: ";
	cin >> x;
	int n = 0;
	while (abs(F(x,n))>0.00001)
	{
		sin += F(x, n);
		n++;
	}
	cout << " gia tri can tinh " << sin << endl;
	return 0;

}
