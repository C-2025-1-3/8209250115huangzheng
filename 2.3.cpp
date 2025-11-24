#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三角形的三个边长："<<endl;
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&&a + c > a)
		if (a == b or b == c or a == c)
			cout << "此三角形是等腰三角形" << endl;
		else cout << "不是等腰三角形" << endl;
	else cout << "不能构成三角形"<< endl;
	return 0;
}