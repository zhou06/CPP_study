#include "iostream"
using namespace std;

int main()
{
    // !
//    int num = 1;
//    if(!num){
//        cout << "if被执行" << endl;
//    }else{
//        cout << "else被执行" << endl;
//    }
    // &&
//    int age,height;
//    cout << "请输入你的年龄：" << endl;
//    cin >> age;
//    cout << "请输入你的身高(cm)：" << endl;
//    cin >> height;
//    // 必须同时满足年龄小于18，并且身高小于120cm，才可免费
//    if(age < 18 && height < 120){
//        cout << "恭喜你，可以免费游玩" <<endl;
//    }else{
//        cout << "很遗憾，你没有免费资格" << endl;
//    }

    // ||
    int age,height;
    cout << "请输入你的年龄：" << endl;
    cin >> age;
    cout << "请输入你的身高(cm)：" << endl;
    cin >> height;
    // 只需要满足年龄大于18，或者身高大于120，即可免费
    if(age<18 || height < 120){
        cout << "恭喜你，可以免费游玩" <<endl;
    }else {
        cout << "很遗憾，你没有免费资格" << endl;
    }

    return 0;
}