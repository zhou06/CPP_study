#include "iostream"
using namespace std;

int main()
{
    // 通过for循环输出1-20之间的奇数
    for(int i = 1;i <= 20;i++)
    {
        // 如果i为偶数，则会跳过本次循环，继续下一次循环
        if(i %2 == 0)
            continue;
        cout << i << " ";
    }
    cout << endl;
    // 通过for循环输出1-20的数字
    for(int i = 1;true;i++)
    {
        cout << i << " ";
        if(20 == i)
            break;
    }
    return 0;
}