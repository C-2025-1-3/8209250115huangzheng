#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[80];
    int letter = 0;
    int num = 0;
    int sign = 0;
    int blank = 0;
    cin.getline(arr, 80);
    int len = strlen(arr);
    for (int i = 0; i < len; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z') {
            letter++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9') {
            num++;
        }
        else if (arr[i] == ' ') {
            blank++;
        }
        else {
            sign++;
        }

    }
    cout << "Ó¢ÎÄ×ÖÄ¸£º" << letter << endl;
    cout << "Êı×Ö£º" << num << endl;
    cout << "ÆäËû×Ö·û£º" << sign << endl;
    cout << "¿Õ¸ñ:" << blank << endl;

    return 0;
}