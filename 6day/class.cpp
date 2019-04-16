#include "iostream"

using namespace std;


class Coffee {
    public:
        int drink(){
            int a = 100;
            a -= 5;
            return a;
        }
};

int main (void)
{
    Coffee cafeorait;
    int num;
    cin >> num;
    for (int i =0;i<cafeorait.drink();i++)
    {
        cout << cafeorait.drink() << endl;
    }
}
