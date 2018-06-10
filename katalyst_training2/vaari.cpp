#include<iostream>
using namespace std;
int lin(int n , int *a , int d)
{   int i;
    for(int i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            return i;
            break;
        }
    }
    if (i ==n)
    {
        return 0;
    }


}
int main()
{
    int n,d,A[10];
    cout<<"Enter the range of  the array"<<endl;
    cin>>n;
    cout<<"Enter the number of elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the key to search"<<endl;
    cin>>d;
    int ans = lin (n,A,d);
    cout<<d<<" is found at "<<ans<<endl;
}
