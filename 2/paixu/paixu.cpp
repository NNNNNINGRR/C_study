#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;
int main(int argc,char* grgs[])
{
    vector<int> a={1,2,3,4,5,6,7,8,9};
    vector<int> temp;
    vector<vector<int>> mtrix;
    vector<vector<int>> output;
    vector<int> a0={0,0,0};
    vector<int> b={0,0,0};
    vector<int> c={0,0,0};
    vector<int> tmp;
    
    for (int i = 0; i < 7; ++i) 
    {
        for (int j = 0; j < 8; ++j) 
        { // 第二层循环应遍历至8，以确保组合完整
            if (j <= i) continue; // 跳过已经考虑过的起始元素
            for (int k = 0; k < 9; ++k) 
            {
                if (k <= i || k <= j) continue; // 确保k大于i和j，避免重复和自我组合
                vector<int> temp = {a[i], a[j], a[k]}; // 直接构造三元组，提高效率
                mtrix.push_back(temp);
            }
        }
    }
    cout << "Matrix:" << endl;
    for (const auto &row : mtrix) 
    // 遍历矩阵的每一行
    // 对于mtrix中的每一个元素（在这里是每一个vector<int>，我们将其称为row），执行循环体内的代码块。
    { // 更简洁的遍历方式
        for (int num : row) 
        {
            cout << num << ' '; // 输出当前行的每个元素
        }
        cout << endl; // 换行，结束当前行的输出
    }


    

    for(int i=0;i<mtrix.size();i++)
    {
        
        const vector<int> &tmp=mtrix[i];
        a0[0]=floor(tmp[0]/100);
        a0[1]=floor((tmp[0]%100)/10);
        a0[2]=tmp[0]%10;
        b[0]=floor(tmp[1]/100);
        b[1]=floor((tmp[1]%100)/10);
        b[2]=tmp[1]%10;
        c[0]=floor(tmp[2]/100);
        c[1]=floor((tmp[2]%100)/10);
        c[2]=tmp[2]%10;
        
        
        if(a0[0]==b[0]||a0[0]==b[1]||a0[0]==b[2]||a0[1]==b[0]||a0[1]==b[1]||a0[1]==b[2]||a0[2]\
        ||a0[2]==b[0]||a0[2]==b[1]||a0[2]==b[2]||a0[0]==c[0]||a0[0]==c[1]||a0[0]==c[2]||a0[1]==c[0]||a0[1]==c[1]\
        ||a0[1]==c[2]||a0[2]==c[0]||a0[2]==c[1]||a0[2]==c[2]\
        ||b[0]==c[0]||b[0]==c[1]||b[0]==c[2]||b[1]==c[0]||b[1]==c[1]||b[1]==c[2]||b[2]==c[0]||b[2]==c[1]||b[2]==c[2])
        {  
            output.push_back(tmp);
        }
        else continue;
    }
    for (const auto &row : output) 
    // 遍历矩阵的每一行
    // 对于mtrix中的每一个元素（在这里是每一个vector<int>，我们将其称为row），执行循环体内的代码块。
    { // 更简洁的遍历方式
        for (int num : row) 
        {
            cout << num << ' '; // 输出当前行的每个元素
        }
        cout << endl; // 换行，结束当前行的输出
    }
    
    system ("pause");
    return 0;

}