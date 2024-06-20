#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

enum E_weekend {SUN=10,MON,TUE,WED,THU,FRI,SAT};
// 枚举类型格式：enum 枚举类型名 {枚举常量列表}
enum E_color{RED,GREEN,BLUE};
enum E_weekend e=WED;

int main(int argc, char* args[])
{
    char m[3]="sa"; // 修正定义，只定义一次，并初始化
    cout << "m=" << m[2] << "  " << m[1] << "  " << m[0] << endl; 
    //m[0]=s m[1]=a m[2]的值是'\0'，这是一个表示字符串结束的特殊字符，其ASCII值为0
    //在输出时，'\0'通常不会显示为可见字符。
    cout<<"MON="<<MON<<endl;
    cout<<"e="<<e<<endl;
    enum E_color L=BLUE;
    int num=100;
    int *p=&num; // 指针p指向num，*表示取值，如果没有*，则p指向的是指针p指向的地址，而不是p指向的值。
    cout<<"l="<<L<<" /n "<<"p="<<*p<<endl;
    char a[]=u8"this.";
    cout<<"a="<<a<<endl;
    int c[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; ++i)
    {
        for (int j=0; j<3; ++j)
        {
            cout<<c[i][j];
            if(j<2)
                cout<<",";
            else
                cout<<endl;
            
        }
        
    }

  
    for(int k=0; k<3; ++k)
    {
        for(int t=0; t<3; ++t)
        {
            cout<<c[k][t];
            if (t<2)
            
                cout <<"  ";
            else
                cout <<endl;
            
            
        }

        
    }
    



    int A[2][3]={0,1,2,3,4,5,};    
    for(int z=0; z<2; ++z)
    {
        for(int tr=0; tr<3; ++tr)
        {
            cout<<A[z][tr];
            if (tr<2)
            
                cout <<"  ";
            else
                cout <<endl;
            
            
        }
    }

      // int (*mm)[3][3]=&c;
    //////////////////
    int row=3,col=3;
    srand(time(0));
    vector<vector<int>>O(row,vector<int>(col));
    //外层的 vector<vector<int>> 表示这是一个可以动态改变大小的二维容器，每个元素都是一个 vector<int>，即一个整数向量。
    //O(rows, vector<int>(cols)) 部分执行了这个二维向量的初始化，创建了 rows 行，每行有 cols 列的矩阵。
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            O[i][j]=rand()%10; 
            //rand()生成0~RAND_MAX之间的随机数RAND_MAX是一个很大的数，具体值依赖于实现，但至少是32767
            //rand()%10表示生成随机数后除以10之后去余数，保证生成0~9之间的随机数
        }
    }
    cout<<"O="<<endl;
    for(int k=0; k<3; ++k)
    {
        for(int t=0; t<3; ++t)
        {
            cout<<O[k][t];
            if (t<2)
            
                cout <<"  ";
            else
                cout <<endl;
            
            
        }

        
    }

    int BB[row][col]={0,0,0,0,0,0,0,0,0};
    for (int i= 0; i< row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            BB[i][j]=O[i][j];
        }
    }
    int (*mm)[row][col]=&BB;
    (*mm)[0][0]=109;
    cout<<"mm="<<BB[0][0]<<endl;
    //动态的数组或矩阵不能赋值或转换成一个指针，只能通过指针来操作。
    // for(int i = 0; i < 3; ++i)
    //  {
    //     for(int j = 0; j < 3; ++j) {
    //         cout << c[i][j];
    //         if(j < 2) cout << ", "; // 除了最后一个元素外，每个元素后加逗号和空格
    //     }
    //     cout << endl; // 换行以开始新的一行
    // }
    // cout<<"c="<<c<<endl; // 输出的是指向第一个元素的指针的值


    system("pause");
    return 0;
}
