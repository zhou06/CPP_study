#include "iostream"
using namespace std;

int main()
{
    // cin >> 变量;
    int num;
    cout << "请输入一个整数：" << endl;
    cin >> num;

    double num2;
    cout << "请输入一个实型数字：" << endl;
    cin >> num2;

    char c;
    cout << "请输入一个字符：" << endl;
    cin >> c;

    string s;
    cout << "请输入一个字符串：" << endl;
    cin >> s;

    cout << "输入的整数值是：" << num << endl;
    cout << "输入的小数值是：" << num2 << endl;
    cout << "输入的字符是：" << c << endl;
    cout << "输入的字符串是：" << s << endl;

    string str;
    cout << "（测试用）输入中文：" << endl;
    cin >> str;
    cout << "输出中文：" << str << endl;

    return 0;
}