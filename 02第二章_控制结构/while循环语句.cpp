#include "iostream"
using namespace std;

int main()
{
    bool is_run = true; // 循环的控制因子
    int num = 0;    // 控制变量
    while(is_run){      // false就停止循环，true就继续执行循环体
        cout << "hello" << endl;
        num++;      // 控制因子的更新


        if(num > 2){
            is_run = false;
            cout << "退出while循环" << endl;
        }
    }

    // 我要向小美表白，每一天都要表白，连续表白10天

    int day = 1;
    while(day <= 10){
        cout << "今天是第" << day << "天，小美我喜欢你" << endl;
        day++;

    }



    return 0;
}