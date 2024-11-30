#include "iostream"
using namespace std;
int main()
{
    // 定义变量来表示小美对我的态度，1表示喜欢，0表示不喜欢
    int love;
    // 定义变量来表示天气情况，1表示好天气，2表示坏天气
    int weather;

    // 询问小美对我的态度
    cout << "小美对我的态度是怎么样的？" << endl;
    // 输入小美对我的态度
    cin >> love;

    // 判断小美是否喜欢我
    if (love) {
        // 如果小美喜欢我，输出喜欢的回应
        cout << "很高兴小美喜欢我，我也喜欢你" << endl;

        // 询问天气情况
        cout << "看一下天气怎么样，1好，2不好" << endl;
        // 输入天气情况
        cin >> weather;

        // 根据天气情况安排活动
        if (weather) {
            // 如果天气好，建议去公园
            cout << "天气不错，我们去公园吧" << endl;
        } else {
            // 如果天气不好，建议去看电影
            cout << "今天天气不好，我们去看电影吧" << endl;
        }
    } else {
        // 如果小美不喜欢我，输出失落的回应
        cout << "很伤心，我去追求小新了" << endl;
    }

    // 程序执行结束，返回0
    return 0;
}
