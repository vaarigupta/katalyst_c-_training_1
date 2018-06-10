#include<iostream>
using namespace std;
int main()
{
    int n , m ,i, a[100];
    cin>>n>>m;
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>0;i--)
    {
        if(a[i]==m)
        {
            cout<<i<<endl;
            break;
        }

    }
    if(a[i])
    {
       cout<<(-1)<<endl;
    }

}
