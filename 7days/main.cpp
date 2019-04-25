#include <iostream>

using namespace std;


bool x = false;
int i = 0;

bool hantei(int i)  //判定関数
{
    if(i==0) //三項演算子
    return true;
    else 
    return false;
}

int main()
{
    int i;
    cin >> i;
    bool m = hantei(i);
    cout << m << endl;
    return 0;
}

