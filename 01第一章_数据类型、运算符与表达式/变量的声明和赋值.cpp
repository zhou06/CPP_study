#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // 1.变量的声明（定义）：变量类型 变量名;
    int age;
    int weight;
    float height;
    string name;
    // 2.变量的赋值：变量名=变量值;
    age = 21;
    weight = 56;
    height = 180.5;
    name = "周杰轮";

    // 3.变量的使用(取值)，直接使用变量名称即可
    cout<<"我是" << name  << ",今年"<<age<<"岁"<<endl;
    cout<< "身高" <<height<<"cm"<<",体重"<<weight<<"KG"<<endl;

    return 0;
}