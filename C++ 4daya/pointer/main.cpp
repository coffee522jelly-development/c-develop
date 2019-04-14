#include <iostream>
using namespace std;
int main(void){
    //ポインタ変数の宣言
    // Your code here!
   int x = 25;
   int *ptr;
   
   ptr = &x;
   
   cout << "xの値は" << x << endl;
   cout << "xのアドレスは" << ptr << endl;
   cout << "xのアドレスは" << &x << endl;
}
