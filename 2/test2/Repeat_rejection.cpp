#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main (int arcg,char* args[])
{
    vector<vector<int>> input;
    vector<int> a;vector<int> b;vector<int> c;
    size_t n;
    for(int i=0;i<input.size();i++)
    {
        
        const vector<int> &temp=input[i];
        a[0]=temp[0]/100;
        a[1]=(temp[0]%100)/10;
        a[2]=temp[0]%10;
        b[0]=temp[1]/100;
        b[1]=(temp[1]%100)/10;
        b[2]=temp[1]%10;
        c[0]=temp[2]/100;
        c[1]=(temp[2]%100)/10;
        c[2]=temp[2]%10;
        
        
        if(a[0]==b[0]||a[0]==b[1]||a[0]==b[2]||a[1]==b[0]||a[1]==b[1]||a[1]==b[2]||a[2]\
        ||a[2]==b[0]||a[2]==b[1]||a[2]==b[2]||a[0]==c[0]||a[0]==c[1]||a[0]==c[2]||a[1]==c[0]||a[1]==c[1]||a[1]==c[2]||a[2]==c[0]||a[2]==c[1]||a[2]==c[2]\
        ||b[0]==c[0]||b[0]==c[1]||b[0]==c[2]||b[1]==c[0]||b[1]==c[1]||b[1]==c[2]||b[2]==c[0]||b[2]==c[1]||b[2]==c[2])
        {
            cout <<"temp"<<temp[0]<<"  "<<temp[1]<<"  "<<temp[2]<<"  "<<endl;

        }

        

    }
}