#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[30];
    int len ;
    cout<<"Enter the string"<<endl;
    cin.getline(a,30);
    len = strlen(a);
    cout<<len<<endl;
    for(int i = 0 ;i<=len;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }

}



