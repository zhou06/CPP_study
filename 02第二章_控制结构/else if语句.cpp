#include "iostream"
using namespace std;
int main()
{
    /*
     * if(条件)
     * {}
     * else if(条件)
     * {}
     * ..
     * ..
     * ..
     * else
     * {}
     */
    bool 小美 = 1;  // 1喜欢，0不喜欢
    bool 小甜 = 0;
    if(小美)
    {
        cout << "小美我也喜欢你" << endl;
    }
    else if(小甜)
    {
        cout << "小甜我也喜欢你" << endl;
    }
    else{
        cout << "小新我喜欢你" << endl;
    }
    return 0;
}