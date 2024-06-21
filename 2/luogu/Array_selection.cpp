#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;


int main(int argc , char* args[])
{
    vector<int> a={1,2,3,4,5,6,7,8,9};
    vector<int>output;
    vector<vector<int>> matrix;
    vector<vector<int>> output0;
    vector<int> a0={0,0,0};
    vector<int> b={0,0,0};
    vector<int> c={0,0,0};
    vector<int> tmp;
    
      
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
    for(int i=0;i<output.size();i++)
    {
        int t0=output[i];
        for(int j=0;j<output.size();j++)
        {
            int t1=output[j];
            if(t1==2*t0)
            {
                for(int k=0;k<output.size();k++)
                {
                    int t2=output[k];
                    if(t2==3*t0)
                    {
                        vector<int> tmp = {output[i], output[j], output[k]};
                        matrix.push_back(tmp);
                    }
                }
            }
        }
    }
    // for(int l=0;l<output.size();l++)
    // {
    //     cout<<output[l]<<endl;
    // }
    cout << "matrix" << endl;
    
    for(const auto &row:matrix) 
    {
        for (int num : row) 
        {
            cout << num << ' ';
        }
        cout << endl; // 换行
    }



    for(int i=0;i<matrix.size();i++)
    {
        
        const vector<int> &tmp=matrix[i];
        a0[0]=floor(tmp[0]/100);
        a0[1]=floor((tmp[0]%100)/10);
        a0[2]=tmp[0]%10;
        b[0]=floor(tmp[1]/100);
        b[1]=floor((tmp[1]%100)/10);
        b[2]=tmp[1]%10;
        c[0]=floor(tmp[2]/100);
        c[1]=floor((tmp[2]%100)/10);
        c[2]=tmp[2]%10;
        
        
        if(a0[0]==b[0]||a0[0]==b[1]||a0[0]==b[2]||a0[1]==b[0]||a0[1]==b[1]||a0[1]==b[2]\
        ||a0[2]==b[0]||a0[2]==b[1]||a0[2]==b[2]||a0[0]==c[0]||a0[0]==c[1]||a0[0]==c[2]||a0[1]==c[0]||a0[1]==c[1]\
        ||a0[1]==c[2]||a0[2]==c[0]||a0[2]==c[1]||a0[2]==c[2]\
        ||b[0]==c[0]||b[0]==c[1]||b[0]==c[2]||b[1]==c[0]||b[1]==c[1]||b[1]==c[2]||b[2]==c[0]||b[2]==c[1]||b[2]==c[2])\
        continue;
        else
        {  
            output0.push_back(tmp);
        }
        
    }
    cout<<"output0"<<endl;
    for (const auto &row : output0) 
    // 遍历矩阵的每一行
    // 对于mtrix中的每一个元素（在这里是每一个vector<int>，我们将其称为row），执行循环体内的代码块。
    { // 更简洁的遍历方式
        for (int n : row) 
        {
            cout << n << ' '; // 输出当前行的每个元素
        }
        cout << endl; // 换行，结束当前行的输出
    }
    





    system("pause");
    return 0;
}
