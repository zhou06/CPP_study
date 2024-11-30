#include "iostream"
using namespace std;


int main()
{
    // 定义变量num用于存储用户输入的猜测数字
    int num;
    // 正确答案定义为5
    int answer = 5;

    // 提示用户输入第一次猜测的数字
    cout << "请输入第一次猜想的数字:" << endl;
    // 获取用户输入的数字
    cin >> num;

    // 判断用户第一次是否猜对
    if(num == answer){
        // 如果猜对了，给予表扬
        cout << "第一次就猜对了，你真棒！" << endl;
    }else{
        // 如果猜错了，提示用户进行第二次猜测
        cout << "不对，请再输入一次:" << endl;
        // 获取用户第二次输入的数字
        cin >> num;
        // 再次判断用户是否猜对
        if (num == answer){
            // 如果猜对了，给予表扬
            cout << "第二次猜对了，你真棒！" << endl;
        }else{
            // 如果还是猜错，提示用户进行最后一次猜测
            cout << "不对，请最后再输入一次:" << endl;
            // 获取用户最后一次输入的数字
            cin >> num;
            // 最后一次判断用户是否猜对
            if(num == answer) {
                // 如果猜对了，给予表扬
                cout << "第三次猜对了，你真棒！" << endl;
            }else{
                // 如果三次都没猜对，告诉用户正确答案
                cout << "sorry,全都猜错了，正确答案是5" <<endl;
            }
        }
    }

    // 程序结束，返回0
    return 0;
}
