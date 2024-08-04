#include<iostream>
using namespace std;
int main(int aegc, char* args[])
{
    char ch='A';
    switch(ch)
    {
        case 'A':
            cout<<"优秀"<<endl;
            break;
        case 'B':
            cout<<"良"<<endl;
            break;
        case 'C':
            cout<<"及格"<<endl;
            break;
        case 'E':
            cout<<"再接再厉"<<endl;
            break;

    }
    double da[]={1.2,2.3,3.4,4.5};
    for (double &n:da)
    // for (double &n : da) 的含义是：
    //“对于数组da中的每个元素，让n引用当前元素，并执行一次循环体中的代码。”
    //在每次循环迭代中，n都会绑定到数组中的下一个元素，允许你读取或修改该元素。
    {
        n *=3;
        cout<<"n="<<n<<endl;
    }
    // 数组da的值是可以被修改的，因为数组da的元素是引用类型
    for (const double &n:da)
        cout<<"n="<<n<<endl;
    for (double n : {1.5,2.5,3.5,4.5})
    //不能改为&n，因为数组元素是值类型，保证不可更改
    {
        n *=3;
        cout<<"n="<<n<<endl;
    }
    for (const double &n : {1.5,2.5,3.5,4.5})
        cout<<"n="<<n<<endl;
    cin.get();
    return 0;
}