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
    int answer = get_random_num(1,100);
    int guess_num;
    do{
        cout << "请输入一个猜测的数字：" << endl;
        cin >> guess_num;
        if(guess_num > answer){
            cout << "你猜大了" << endl;
        }else if(guess_num < answer){
            cout << "你猜小了" << endl;
        }else{
            cout << "恭喜你，猜对了!" << endl;
        }
    }while(guess_num != answer);

    return 0;
}