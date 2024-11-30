#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    //  快捷形式1，定义（声明）变量的同时进行赋值。  变量类型 变量名 = 变量值
    int age = 21;
    string name = "小明";
    cout << "我叫做：" << name << ",今年" << age << "岁。" << endl;
    //  快捷形式2，一次性定义（声明）多个变量。变量类型 变量名,变量名,.......;
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    cout << a << b << c << endl;
    //  快捷形式3，一次性定义（声明）多个变量的同时进行赋值。
    int d = 40, e = 50, f = 60;
    cout << d << e << f << endl;

    return 0;

}