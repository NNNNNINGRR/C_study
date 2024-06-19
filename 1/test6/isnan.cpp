#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float f = 0.0f;
    f = 0.0f / f; //表示生成一个未定数
    bool k =isnan(f);
    cout << "isnan("<<f<<")=" << k << endl;
    //“<< f ” 将变量 f 的值转换为字符串形式并输出。
    //这个应该看作为这几部分 cout <<  |"isnan("|  <<f<<|   ")=" |<< k << endl;
    return 0;
}
