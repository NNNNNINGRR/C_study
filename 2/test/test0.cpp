#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc , char* args[])
{
vector<int> a={1,2,3,4,5,6,7,8,9};

    
    for(int i=0;i<a.size();i++)
    {        
        vector<int> p = a;
    }
    for(int l=0;l<p.size();l++)
    {
        cout<<p[l]<<endl;
    }
    system("pause");
    return 0;
}
