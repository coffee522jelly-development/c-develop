#include <iostream>
#include "sample.h"
 
using namespace std;
 
int main()
{
    CSample obj;  // CSampleをインスタンス化
    int num; //ローカル変数num
     
    cout << "整数を入力して下さい:" << endl;
    cin >> num; //ローカル変数numに入力値の代入
     
    obj.set( num );  // CSampleのメンバ変数をセット（ローカル変数numの値をインスタンス化した構造体CSampleの変数objの.setメンバに、numを代入）
    cout << obj.get() << endl;  // メンバ変数の値を出力
 
    return 0;
}