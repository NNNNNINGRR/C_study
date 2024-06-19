//数据类型
#include<iostream>
#include<limits>

using namespace std;
int main (int argc, char const *argv[])
{
    
    cout << "The maximum value of int is " << numeric_limits<int>::max() << endl;
    cout << "bool: \t\t" <<"所占字节数："<< sizeof(bool)<<endl;
    //\t 是一个转义序列，代表一个水平制表符（horizontal tab）。它的作用是在输出文本时插入一个制表符，
    //效果等同于在文本编辑器中按Tab键。制表符用于创建固定间隔的列对齐效果，这对于制作简单的排版、表格或对齐输出数据非常有用。
    cout <<"The maxmium value of bool is\t" << numeric_limits<bool>::max() << endl;
    //标准的C++编译器支持bool类型，并且bool类型只有两个值：true和false。
    //std::numeric_limits<bool>::max() 是C++标准库中 <limits> 头文件提供的一个功能，用于获取数据类型的最大有限值
    //查看所有数据类型所占的字节数采用sizeof()函数
//     type:         ************size**************
// bool:         所占字节数：1    最大值：1        最小值：0
// char:         所占字节数：1    最大值：        最小值：?
// signed char:     所占字节数：1    最大值：        最小值：?
// unsigned char:     所占字节数：1    最大值：?        最小值：
// wchar_t:     所占字节数：4    最大值：2147483647        最小值：-2147483648
// short:         所占字节数：2    最大值：32767        最小值：-32768
// int:         所占字节数：4    最大值：2147483647    最小值：-2147483648
// unsigned:     所占字节数：4    最大值：4294967295    最小值：0
// long:         所占字节数：8    最大值：9223372036854775807    最小值：-9223372036854775808
// unsigned long:     所占字节数：8    最大值：18446744073709551615    最小值：0
// double:     所占字节数：8    最大值：1.79769e+308    最小值：2.22507e-308
// long double:     所占字节数：16    最大值：1.18973e+4932    最小值：3.3621e-4932
// float:         所占字节数：4    最大值：3.40282e+38    最小值：1.17549e-38
// size_t:     所占字节数：8    最大值：18446744073709551615    最小值：0
// string:     所占字节数：24
// type:         ************size**************

}
