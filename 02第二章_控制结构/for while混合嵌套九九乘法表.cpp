#include "iostream"
using namespace std;

int main()
{
    for(int line = 1;line <= 9;line++)
    {   int num = 1;
        while(num <= line){
            cout << num << "x" << line << "=" << num*line << "\t";
            num++;
        }
        cout << endl;
    }
}