#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,a[10][10],sum=0;
    cout<<"Enter the number of rows and colns "<<endl;
    cin>>n>>m;
    for(i=i;i<n;i++)
    {
        for( j =0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

       cout<<"print row sum"<<endl;
        for(i =0;i<n;i++)
        {
        for(j =0;j<m;j++)
        {
           sum += a[i][j];
           cout<<sum<<" ";

        }
        cout<<sum<<" ";
        sum =0;
       }
return 0;
}
