#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;

//BBX is beautiful
int main(int argc , char* args[])
{
    // 初始化一个整数向量a，包含1到9的数字
    vector<int> a={1,2,3,4,5,6,7,8,9};
    vector<int>output;
    vector<vector<int>> matrix;
    vector<vector<int>> output0;
    vector<int> a0={0,0,0};
    vector<int> b={0,0,0};
    vector<int> c={0,0,0};
    vector<int> tmp;
    
    // 遍历向量a中的每个元素，计算所有可能的三个数字的组合及其和
    for(int i=0;i<a.size();i++)
    {
        int x=a[i]*100;
        vector<int> p = a;               
        p.erase(p.begin()+i);
        for(int j=0;j<p.size();j++)
        {
            int y=p[j]*10;
            vector<int> p_copy = p;
            p_copy.erase(p_copy.begin()+j);
            for(int k=0;k<p_copy.size();k++)
            {
                int z=p_copy[k];
                int out=x+y+z;
                output.push_back(out);
            }
        }
    }
return 0;
}