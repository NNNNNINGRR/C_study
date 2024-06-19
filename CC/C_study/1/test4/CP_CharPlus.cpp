#include<iostream>
using namespace std;
#include"CP_CharPlus.h"

/**
 * @brief 打印一个字符形成的加号形状
 * 
 * 此函数通过输出字符来形成一个加号的形状，利用字符的重复输出来创建一个视觉上的图形。
 * 它首先打印一个字符，然后打印一个由三个字符组成的行，最后再打印一个字符，这样就形成了一个加号的形状。
 * @note 此函数是CP_CharPlus类的一部分，该类可能提供了更多与字符操作相关的功能。
 */
void CP_CharPlus::mb_drawPLus()
{
    cout << " "<< m_char <<endl; // 在行首空格后打印一个字符
    cout<<m_char<<m_char<<m_char<<endl; // 打印一行三个字符
    cout<<" "<<m_char<<endl; // 在行首空格后打印一个字符
}