#include "iostream"
using namespace std;
int main()
{
    // 有点胖需要减掉10斤，5天达成，1天2斤
    /*
     * 每段输出
     * 今天是减肥的第n天！
     * 开始做第n天的第1个俯卧撑！开始做第n天的第2个俯卧撑！开始做第n天的第3个俯卧撑！
     * 减肥第n天的3个俯卧撑做完，体重减少1斤，目前累计减少体重：n++斤！
     * 开始减肥第n天的第1批次400米冲刺跑！！开始减肥第n天的第2批次400米冲刺跑！开始减肥第n天的第3批次400米冲刺跑！
     * 减肥第n天的3批次400米跑完，体重减少1斤，目前累计减少体重：n*2斤！
     */
    int weight = 0;
    int day = 0;
    cout << "有点胖需要减掉10斤，5天达成，1天2斤" << endl;
    while(weight < 10){
        day++;
        cout << "今天是减肥的第" << day << "天！" << endl;
        int push_up = 0;
        while(push_up < 3){
            push_up++;
            cout << "开始做第" << day << "天的第" << push_up << "个俯卧撑！  " ;
        }
        cout << endl;
        weight++;
        cout << "减肥第" << day << "天的俯卧撑做完。体重减少1斤，目前累计减少体重：" << weight << "斤" << endl;
        int run = 0;
        while(run < 3){
            run++;
            cout << "开始减肥第" << day << "天的第" << run << "批次400米冲刺跑！  " ;
        }
        cout << endl;
        weight++;
        cout << "减肥第" << day << "天的3批次400米跑完。体重减少1斤，目前累计减少体重：" << weight << "斤" << endl;
        cout << endl;

    }
    cout << day << "天减肥完成，体重累计减少：" << weight << "斤！" << endl;


    return 0;
}