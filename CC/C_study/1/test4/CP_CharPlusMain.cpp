#include<iostream>
using namespace std;
#include "CP_CharPlus.h"

/* 主函数 */
int main(int argc, char* args[])
{
    /* 创建一个CP_CharPlus对象，初始化为加号字符 */
	CP_CharPlus a('.');
    
    /* 调用对象的方法，绘制加号图形 */
    a.mb_drawPLus();
    
    /* 暂停程序运行，以便观察输出结果 */
    system("pause");
    
    /* 程序正常结束 */
    return 0;
}