#include "iostream"
using namespace std;
int main()
{
    // 语法: 表达式 ? 值1:值2;
    int num1 , num2;
    cout << "请输入num1的值：" << endl;
    cin >> num1;
    cout << "请输入num2的值：" << endl;
    cin >> num2;

    num1 > num2 ? "num1大于num2" : "num1小于num2";
    string result = num1 > num2 ? "num1大于num2" : "num1小于num2";
    cout << result << endl;

    return 0;
}