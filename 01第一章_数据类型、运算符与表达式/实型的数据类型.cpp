#include "iostream"
#include "windows.h"
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // float单精度浮点数，4字节，6~7位有效位数
    // 有效位数：整数位，小数点，小数位
    float num1 = 123456789;       // 只提供前七位的有效输出
    float num2 = 1.2345678;       // 只提供前七位的有效输出且小数点也算一位

    cout << fixed;                // 设置为小数显示（正常用科学计数法显示）
    cout.width(20);          // 设置显示的最大宽度（最大位数）
    cout << num1 << "," << sizeof(num1) << endl;
    cout << num2 << "," << sizeof(num2) << endl;

    // double双精度浮点数，8字节，15~16有效位数
    double num3 = 1234567890.123456789;
    cout << num3 << "," << sizeof(num3) << endl;

    // long double长精度（多精度）浮点数，16字节，18~19有效位数
    long double num4 = 1234567890.123456789;
    cout << num4 << "," << sizeof(num4) << endl;

    return 0;
}