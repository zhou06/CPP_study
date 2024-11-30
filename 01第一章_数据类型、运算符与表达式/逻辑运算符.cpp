#include "iostream"
using namespace std;
int main()
{
    // bool 1为真，0为假
    // ! 非
    bool b1 = !(1==1);
    bool b2 = !(1==2);
    cout << b1 << endl;
    cout << b2 << endl;
    // && 与,全真方真,有假则假
    bool b3 = 1==1 && 2==2;
    bool b4 = 1==2 && 2==2;
    cout << b3 << endl;
    cout << b4 << endl;
    // || 或,有真则真,全假方假
    bool b5 = 1==1 || 1==2;
    bool b6 = 1==2 || 2==3;
    cout << b5 << endl;
    cout << b6 << endl;

    return 0;
}