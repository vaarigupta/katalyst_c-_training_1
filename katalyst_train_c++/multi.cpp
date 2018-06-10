#include<iostream>
using namespace std;
int main()
{
    int n,m,p,q,a[10][10],b[10][10], c[10][10] ={0};
    cout<<"Enter the number of rows and colns of matrix A "<<endl;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the number of rows and colns of matrix B "<<endl;
    cin>>p>>q;
    for(int i=0;i<p;i++)
    {
        for(int  j =0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }
    if(n==p)
    {

         for(int i =0;i<m;i++)
        {
        for(int j =0;j<q;j++)
        {
          for(int k =0;k<n;k++)
          {
              c[i][j] += a[i][k]*b[k][j];
          }
        }
       }


    }
    for(int i =0;i<n;i++)
        {
        for(int j =0;j<m;j++)
        {
           cout<<c[i][j]<<" ";

        }
        cout<<endl;

        }
return 0;
}

