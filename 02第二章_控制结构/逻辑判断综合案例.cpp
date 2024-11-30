#include "iostream"
#include "random"
using namespace std;
/*
 * 案例需求（猜扑克牌）：
 * 随机产出3份信息：
 * 第一份信息：1~10的数字，代表扑克牌1~10
 * 第二份信息：字符串，红色或黑色，代表扑克牌的花色
 * 第三份信息：字符串，如果是红色产出红桃或方块，如果是黑色产出黑桃或梅花
 * 案例要求：
 * 通过嵌套判断，并结合判断语句猜测上述信息，如
 * 先猜数字，成功后猜颜色，再成功猜测具体的花型
 */
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
    // 第一份信息：1~10的数字，代表扑克牌1~10
    int num = get_random_num(1,10);

    // 第二份信息：字符串，红色或黑色，代表扑克牌的花色
    string color = get_random_num(0,1)? "红色":"黑色";

    // 第三份信息：字符串，如果是红色产出红桃或方块，如果是黑色产出黑桃或梅花
    string suit;
    if(color == "红色"){
        suit = get_random_num(0,1)? "红桃":"方块";
    }else{
        suit = get_random_num(0,1)? "黑桃":"梅花";
    }
    cout << num << "," << color << "," << suit << endl;
    // 开始游戏
    int guess_num;
    cout << "请输入猜测的数字：" << endl;
    cin >> guess_num;
    if(guess_num == num){
        // 数字对了，猜颜色
        cout << "请猜测颜色，红色输入1，黑色输入0" << endl;
        int guess_color;
        cin >> guess_color;

        if((guess_color?"红色":"黑色") == color){ // 判断颜色是否正确，括号内意为将输入的1和0转换为字符串
            // 颜色对了，猜花色
            if(color == "红色"){
                // 如果是红色，猜红桃或方块
                cout << "请猜测花色，红桃输入1，方块输入0" << endl;
                int guess_suit;
                cin >> guess_suit;

                if((guess_suit?"红桃":"方块") == suit){
                    cout << "恭喜你，全部猜对了" << endl;
                }else{
                    cout << "花色猜错了，游戏结束" << endl;
                }
            }else{
                // 如果是黑色，猜黑桃或梅花
                cout << "请猜测花色，黑桃输入1，梅花输入0" << endl;
                int guess_suit;
                cin >> guess_suit;

                if((guess_suit?"黑桃":"梅花") == suit){
                    cout << "恭喜你，全部猜对了" << endl;
                }else{
                    cout << "花色猜错了，游戏结束" <<endl;
                }
            }
        }else{
            // 颜色错了，游戏结束
            cout << "颜色猜错了，游戏结束" << endl;
        }
    }else{
        // 数字错了，游戏结束
        cout << "数字猜错了，游戏结束" << endl;
    }
    return 0;
}