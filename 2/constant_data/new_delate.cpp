#include<iostream>
 using namespace std;
 int main(int argc,char* args[])
 {
    int n=5;
    int *p=new int(10);
    int *pa=new int(n);
    pa [n-1]=20;
    cout<<"(*p)="<<(*p);
    cout <<"pa[n-1]"<<pa[n-1];
    delete p;
    delete[] pa;
    system("pause");
    return 0;

 }
