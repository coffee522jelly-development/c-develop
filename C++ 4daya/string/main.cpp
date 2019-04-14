#include <stdio.h>
#include <string>

int main() {
    std::string s1 = "abcde";
    std::string s2 = "fghij";
    std::string buf = s1 + s2;
    printf("%s\n", buf.c_str());
}

//C++ではmain()のように()とかくと（void）と同じ意味になる
//main()は特別扱いで、return を書かない場合、0を返す。
//std::stringは、printfでそのまま表示できないため、.c_str()と言うメンバを使用し変換する。

