#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "请输入华氏度：" << endl;
	float h,f;
	cin >> h;
	f = (h - 32) * 5 / 9;
	cout << "摄氏度是：" <<fixed<<setprecision(2)<< f << endl;
	return 0;

}