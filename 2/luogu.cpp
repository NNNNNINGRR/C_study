#include<iostream>
#include<vector>
using namespace std;
int main(int argc,char* args[])
{
    vector<int>a={1,2,3,4,5,6,7,8,9};
    vector<int>output;
    for(int i=0;i<a.size();i++)
    {
        int x=a[i]*100;
        for(int j=0;j<a.size();j++)
        {
            if (j==i) continue;
            int y=a[j]*10;
            for (int k=0;k<a.size();k++)
            {
                if (k==i||k==j) continue;
                int z=a[k]+x+y;
                output.push_back(z);
            }
            
            
        }
    }
    for(int i=0; i<output.size(); i++)
    {
        cout<<output[i]<<" ";
    }
    system("pause");
}