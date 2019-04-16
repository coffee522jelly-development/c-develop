//お絵かき
#include <iostream>
using namespace std;

class Pencil
{
    public:
        int core = 100; //鉛筆の真の長さ
        void Write()
        {
            core -= 1;//書くたびに真が1mmずつ小さくなる
            if(core < 0) core = 0;
        }
};

class ErasePencil : public Pencil  //機能が追加されたクラスの定義
{
    public:
        int rubber = 10;
        void Erase()
        {
            rubber -= 1;
            if(rubber < 0) rubber = 0;
        }
};

int main(void)
{
    // Your code here!
    Pencil pen;
    ErasePencil epen;
    int a;
    cin >>  a;
    for (int i=0;i<a;i++)
    {
        pen.Write();
        epen.Write();
        epen.Erase();
    }
    cout << pen.core << endl;
}
