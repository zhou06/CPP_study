#include "iostream"
using namespace std;

int main()
{
    int sum = 0;    // 累加变量
    int num = 1;    // 循环控制因子
    while(num <= 100){
        sum += num;
        num++;      // 控制因子的更新
    }
    cout << "1-100累加的结果是" << sum << endl;
    return 0;
}