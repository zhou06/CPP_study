#include "iostream"
using namespace std;
int main()
{
    // 输入数字1-7，输出星期几
    int num;
    cout << "请输入数字告知是星期几（1-7）" << endl;
    cin >> num;

    switch(num){
        case 1:
            cout << "今天是星期一" << endl;
            break;
        case 2:
            cout << "今天是星期二" << endl;
            break;
        case 3:
            cout << "今天是星期三" << endl;
            break;
        case 4:
            cout << "今天是星期四" << endl;
            break;
        case 5:
            cout << "今天是星期五" << endl;
            break;
        case 6:
            cout << "今天是星期六" << endl;
            break;
        default:
            cout << "今天是星期天" << endl;
    }


    int point;
    cout << "请给电影打分（1-10）9-10为优秀，7-8为一般，5-6为普通，5分一下是勾史" << endl;
    cin >> point;
    switch(point){
        case 10:
        case 9:
            cout << "优秀" << endl;
            break;
        case 8:
        case 7:
            cout << "一般" << endl;
            break;
        case 6:
        case 5:
            cout << "普通" << endl;
            break;
        default:
            cout << "勾史" << endl;
    }
    return 0;
}