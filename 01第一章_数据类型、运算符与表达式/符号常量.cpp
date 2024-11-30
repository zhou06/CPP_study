#include "iostream"
//include "windows.h"
using namespace std;
#define FAT_BMI 28       //肥胖VMI
#define J2C_RATE 4.19   //焦耳转卡路里的比率
/* 符号常量：#define 名称（标识符） 常量值
 * 符号常量的名称是标识符的一种，字母建议全部大写
 * 符号常量定义在代码头部
 * 符号常量的定义不需要分号结尾
 */

/* 解决中文乱码的方式
 * 方式1：引入windows.h库,并在main函数中输入SetConsoleOutputCP(CP_UTF8);
 * 方式2：system("chcp 65001");
 */



int main()
{
    system("chcp 65001");
    // SetConsoleOutputCP(CP_UTF8);
    // 使用符号常量的语句，就是正常的代码了，要写在main函数中
    // 如何使用：使用符号常量，就直接用它的名字即可
    cout<< FAT_BMI <<endl;
    cout<<"焦耳转卡路里需要除以： "<<J2C_RATE<<endl;

    return 0;
}