#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string name = "小黑";
    string major = "物理";
    int age = 21;
    double height = 172.50;
    // to_string()函数，可以将内容转换位字符串类型，用法：to_string(内容)
    string msg = "我叫做" + name + ",我的专业是" + major + "，年龄是" + to_string(age) + "，身高是" + to_string(height);
    cout << msg << endl;


    return 0;
}