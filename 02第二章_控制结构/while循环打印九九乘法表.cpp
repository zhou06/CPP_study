#include "iostream"
using namespace std;
int main()
{
    // 1.用外层控制循环输出九行
    int line = 1;       // 外层循环控制因子，从1开始
    while(line <= 9){   // 判断条件，输出9行
    // 2.内层循环
        int num = 1;    // 内层循环的控制因子
        while(num <= line){
            cout << num << "x" << line << "=" << num*line << "\t";
            num++;
        }
        line++;         // 外层循环控制因子的更新
        cout << endl;
    }



    return 0;
}