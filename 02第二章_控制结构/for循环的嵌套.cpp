#include "iostream"
using namespace std;
int main()
{
    // 用for循环输出九九乘法表
    for(int line = 1; line <= 9; line++)
    {
        for(int num = 1; num <= line; num++)
        {
            cout << num << "x" << line << "=" << num*line << "\t";
        }
        cout << endl;
    }

    return 0;
}