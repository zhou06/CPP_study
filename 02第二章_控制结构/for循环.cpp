#include "iostream"
using namespace std;

int main()
{
    // 基础for循环，打印1-10的数字
    for(int i =1;i <= 10;i++){
        cout << i << endl;
    }
    // 打印1-20之间的奇数
    for(int odd = 1;odd <= 20;odd+=2){
        cout << odd << endl;
    }
    // for循环括号内的三个部分可以省略，但;需要保留
    // 循环控制因子的创建可以省略，但需要另外创建，不写在括号内，不推荐省略
    // 条件判断和循环控制因子的更新虽然可以省略，但是会导致无限循环，所以不推荐省略
    return 0;
}