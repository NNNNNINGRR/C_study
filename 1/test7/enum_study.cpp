#include <iostream>

using namespace std;
enum E_weekend {SUN=10,MON,TUE,WED,THU,FRI,SAT};
// 枚举类型格式：enum 枚举类型名 {枚举常量列表}
enum E_color{RED,GREEN,BLUE};
enum E_weekend e=WED;

int main(int argc, char* args[])
{
    cout<<"MON="<<MON<<endl;
    cout<<"e="<<e<<endl;
    e=SAT;
    cout<<"e="<<e<<endl;
    char a[]=u8"this.";
    cout<<"a="<<a<<endl;
    system("pause");
    return 0;
}