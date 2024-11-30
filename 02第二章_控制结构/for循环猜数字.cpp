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
    int answer = get_random_num(1,10);
    int guess_num;
    // 第一次猜数字
    cout << "请输入一个数字：";
    cin >> guess_num;

    // for循环判断并执行猜测流程
    for(bool is_continue = true;is_continue;)
    {
        // 对猜测的内容做判断
        if(guess_num == answer){
            cout<< "恭喜你，猜对了" << endl;
            is_continue = false;
        }
        else if(guess_num > answer){
            cout << "猜大了，再猜一次吧" << endl;
            cin >> guess_num;
        }
        else{
            cout << "猜小了，再猜一次吧" << endl;
            cin >> guess_num;
        }
    }


    return 0;
}