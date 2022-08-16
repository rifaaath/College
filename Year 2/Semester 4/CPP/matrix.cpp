//Write a C++ program to multiply given two matrix.


#include <iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;  
    cout<<"Enter rows: ";  cin>>r;  
    cout<<"Enter columns: ";  cin>>c;  
    cout<<"Enter matrix A: ";  
    for(i=0;i<r;i++) 
        for(j=0;j<c;j++) cin>>a[i][j];   

    cout<<"Enter matrix B: ";  
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)  cin>>b[i][j];  

    cout<<"multiply of the matrix=\n";  
    for(i=0;i<r;i++)  
    {  
        for(j=0;j<c;j++)  
        {  
            mul[i][j]=0;  
            for(k=0;k<c;k++)  
                mul[i][j]+=a[i][k]*b[k][j];  
        }  
    }  
    //for printing result  
    for(i=0;i<r;i++)  
    {  
        for(j=0;j<c;j++)   
            cout<<mul[i][j]<<" ";  

        cout<<"\n";  
    }  
}  
