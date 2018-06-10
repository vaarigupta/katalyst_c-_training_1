#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[30];
    int len;
    cout<<"Enter the string"<<endl;
    cin.getline(a,30);
    len = strlen(a);
    for(int i = len; i>=0;i--)
    {
        cout<<a[i];
    }



    return 0;
}
