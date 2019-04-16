#include <iostream>

//CBaseクラス
class CBase 
{
//隠蔽されたメンバ変数x
private:
    int x;
//公開されている仮想メンバ関数foo()
//virtual修飾子が付いている場合、サブクラスに実装されたメンバ関数foo()が実行されている。
//これは、仮想関数に寄る関数のオーバーライドである。
public:
    virtual void foo();
};

//CBaseを継承したクラスCsub
class CSub : public CBase 
{
//隠蔽されたメンバ変数y
private:
    int y;
//公開されたメンバ変数foo()
public:
    void foo();
};

//CBaseクラスのfoo関数の定義
void CBase::foo()
{
    std::cout << "CBase::foo" << std::endl;
}

//CSubクラスのfoo関数の定義
void CSub::foo()
{
    std::cout << "CSub::foo" << std::endl;
}

//返り値intのmain()関数
int main()
{
    //CBaseクラスのオブジェクト生成
    CBase objb;

    //CSubクラスのオブジェクト生成
    CSub objs;
    
    //オブジェクトobjbのメンバ関数foo()へのアクセス
    objb.foo();

    //オブジェクトobjbのメンバ関数foo()へのアクセス
    objs.foo();

    //戻り値が0
    return 0;
}