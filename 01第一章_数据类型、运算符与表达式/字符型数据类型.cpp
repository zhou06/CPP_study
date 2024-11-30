#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char ch = 97;
    cout << ch << endl;
    cout << ch + 1 << endl;
    cout << ch + 0 << endl;

    char ch2 = 'a';
    cout << ch2 + 1 << endl;

    char ch3 = 'a' + 2;
    cout << ch3 << endl;

    return  0;
}