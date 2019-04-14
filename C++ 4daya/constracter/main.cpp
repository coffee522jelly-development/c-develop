#include <iostream.h>

class CInt //CIntクラスを作成
{
public:
    int m_num; //メンバ変数は整数型のm_numを定義

    CInt();         //CIntを再帰的に呼び出し初期化
    void Disp;      //戻り値なしのDisp変数の定義
};

CInt::CInt()//コンストラクタにより、メンバ変数を初期化
{
    m_num = 0;
}

void CInt::Disp()   //CIntクラスのDisp用コンストラクタでメンバ変数を表示。
{
    cout << m_num << endl;
}

int main()
{
    CInt a,b,c,d;  //CIntクラスの変数a,b,c,d
    a.Disp();  //変数のメンバの呼び出し。
    b.Disp();
    c.Disp();
    d.Disp();


    return 0;
}