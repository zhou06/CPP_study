#include "iostream"
#include "random"
using namespace std;

int get_random_num(int min, int max)
{
    // 创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());

    // 定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);

    // 生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;
}
int main()
{
    int num = get_random_num(1,8);
    cout << num << endl;

    return 0;
}