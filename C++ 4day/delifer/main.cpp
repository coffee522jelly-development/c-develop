#include <iostream>
using namespace std;
int main(void){
    //間接参照プログラム
    int x = 25; //int 型の変数
    int *ptr; //int型へのポインタ
    
    ptr = &x; //xのアドレスをポインタに代入
    
    cout << x << endl;
    cout << *ptr << endl;
    cout << &x << endl;
    cout << ptr << endl;
    
    *ptr = 100; //ポインタ変数の書き換えによって、中身を変更する(間接参照)
    
    cout << x << endl;
    cout << *ptr << endl;
    cout << &x << endl;
    cout << ptr << endl;
}
