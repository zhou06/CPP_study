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

/*
 * · 无限次机会，直到猜中为止
 * · 每一次猜不中，会提示大了或小了
 * · 猜完数字后，提示猜了几次
 */
int main()
{
    // 得到一个随机数
    int num = get_random_num(1,100);
    int guess_count = 1;
    int guess_num;
    cout << "请输入一个数字：" << endl;
    cin >> guess_num;
    while(guess_num != num){
        // 1.循环控制因子为guess_num
        // 2.循环因子的更新为猜错后用户再次输入
        cout << "不好意思你猜错了" << endl;

        // 提示用户大了或小了
        if(guess_num > num){
            cout << "猜测的数字较大\n请再次输入一个数字：" << endl;
            cin >> guess_num;
        }else{
            cout << "猜测的数字较小\n请再次输入一个数字：" << endl;
            cin >> guess_num;
        }

        guess_count++;         // 用来表示猜测的次数
    }
    cout << "恭喜你猜对了,你猜了" << guess_count << "次" << endl;
    return 0;
}