#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
	cout << "圆锥底面半径是：" << "圆锥的高是：" << endl;
	int r, h;
	cin >> r >> h ;
	float s;
	s = pi * r * r * h / 3;
	cout << "圆锥的体积为：" <<s<< endl;
	return 0;
}
