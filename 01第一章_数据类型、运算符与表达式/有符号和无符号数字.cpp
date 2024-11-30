#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 有符号：signed（可选） 无符号：unsigned（必选）
    signed int num1 = 10;
    int num2 = -10;         // 以上两种都是有符号int


    unsigned int num3 = 20;     // 无符号的数字，必须大于等于0

    // 无符号的int、short、long有快捷写法
    u_int num4 = 20;
    u_short num5 = 30;

    cout << num1 << "," << num2 <<"," << num3 << "," << num4 << "," << num5 << endl;


    return 0;
}