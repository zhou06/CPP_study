#include "iostream"
using namespace std;

int main()
{
    /* if(条件)
     * {
     *      .......
     * }
     * else
     * {
     *      .......
     * }
     *
     */
    int love;
    cout << "小美你喜欢我吗？喜欢扣1，不喜欢扣0" << endl;
    cin >> love;
    if(love)
    {
        cout << "小美我也喜欢你" << endl;
    }
    else
    {
        cout << "伤心，我去追求小新去了!" << endl;
    }

    cout << "欢迎来到黑马动物园。\n请输入你的身高(cm): " << endl;
    int height;
    cin >> height;
    if (height>120)
    {
        cout << "您的身高超出120cm,游玩需要购票10元。" << endl;
    }
    else
    {
        cout << "您的身高未超出120cm,可以免费游玩。" << endl;
    }

    return 0;
}