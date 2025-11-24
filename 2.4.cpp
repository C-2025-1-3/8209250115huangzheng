#include<iostream>
using namespace std;
int main()
{
	float a, b,c;
	char d;
	cin >> a >> d >> b;
	switch (d) {
	case'+': c = a + b;
		cout << c << endl;
		break;
	case'-':c = a - b;
		cout << c << endl;
		break;
	case'*':c = a * b;
		cout << c << endl;
		break;
	case'/':if (b != 0)
	{
		c = a / b;
		cout << c << endl;
	}
		   else cout << "ÎÞÒâÒå" << endl;
		break;
		return 0;
	}
		
}
