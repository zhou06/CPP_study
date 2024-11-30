#include "iostream"
using namespace std;
int main()
{
    /*
     * enum 枚举类型{
     * 枚举元素1,
     * 枚举元素2,
     * 枚举元素3,
     * ...,
     * ...,
     * ...,
     * };
     */
     // 询问小朋友喜欢的颜色，红黄蓝三种选一个
     enum Color{
         RED = 1,
         YELLOW,
         BLUE
     };
     int num;
     cout << "你喜欢什么颜色？1红色，2黄色，3蓝色" << endl;
     cin >> num;
     switch(num){
         case RED:
             cout << "你喜欢红色啊" << endl;
             break;
         case YELLOW:
             cout << "你喜欢黄色啊" << endl;
             break;
         case BLUE:
             cout << "你喜欢蓝色啊" << endl;
         default:
             cout << "输入的数字有误" << endl;
     }

    return 0;
}