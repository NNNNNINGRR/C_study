#include<iostream>

double M_PI =3.14159222;
// 移除全局变量定义，直接在main中使用局部变量
int main()
{
    // 使用命名空间限定符避免潜在的命名冲突
    std::cout << "The value of pi is " << M_PI << std::endl;
    system("pause");
    return 0;
}
