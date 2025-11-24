#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "请输入两个正整数：" << endl;
	int a, b;
	cin >> a >> b;
	int c = max(a, b);
	int d = min(a, b);
	while (c % a != 0 || c % b != 0) c++;
	while (a % d != 0 || b % d != 0)d--;
	cout << "最大公约数：" << d << endl;
	cout << "最小共倍数：" << c << endl;
	return 0;
}