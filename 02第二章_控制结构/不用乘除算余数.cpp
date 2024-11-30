#include "iostream"
using namespace std;
int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    if(b == 0){
        cout << "0不能做除数" << endl;
        return 1;
    }
    int c = 0;
    int d = a;
    while(1){
        d -= b;
        if(d < 0)
        {
            d += b;
            break;
        }
        c++;
    }
    cout << "商:" << c << endl;
    cout << "余数:" << d << endl;
    return 0;
}