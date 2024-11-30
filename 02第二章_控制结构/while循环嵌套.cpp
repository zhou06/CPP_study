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
    bool is_continue = true;
    int guess_count = 1;
    while(is_continue){
        cout << "今天又是新的一天，开始向小美表白" << endl;
        guess_count++;
        // 每一天表白的流程是送3朵玫瑰花
        int i = 0;  // 内层循环控制因子
        while(i < 3){
            cout << "送给小美一朵玫瑰花" << endl;
            i++;  // 内层循环控制因子的更新
        }
        cout << "小美我喜欢你" << endl;

        int num = get_random_num(1,20);     // 模拟5%概率表白成功
        if(num == 1){
            // 认为表白成功
            is_continue = false;
        }
        cout << endl;
    }
    cout << "总算表白成功了" << endl;
    cout << "一共表白了" << guess_count << "天" << endl;



    return 0;
}