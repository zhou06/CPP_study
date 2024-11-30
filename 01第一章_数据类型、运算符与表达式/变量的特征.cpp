#include "iostream"
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int bmi;        // 声明
    bmi = 30;      // 赋值
    cout<<"小明现在的BMI是："<< bmi << endl;

    // 再一次使用赋值语句，就可以修改变量内记录的值
    bmi = 26;
    cout<<"经过一个月的减肥，小明现在的BMI是："<< bmi << endl;

    // 进行数学计算，可以用：+、-、*、/
    bmi = bmi - 2;
    cout<<"又经过一个月的减肥，小明现在的BMI是："<< bmi << endl;

    int money;
    money = 50;
    cout<<"小明余额："<< money <<"元"<<endl;

    money-=5;
    cout<<"购买奶茶花费5元，余额剩余："<< money <<"元"<<endl;

    money+=10;
    cout<<"卖掉奶茶得到10元，余额剩余："<< money <<"元"<<endl;


    money-=2;
    cout<<"购买彩票花费2元，余额剩余："<< money <<"元"<<endl;

    money*=2;
    cout<<"彩票中奖余额翻倍，余额剩余："<< money <<"元"<<endl;

    return 0;
}
