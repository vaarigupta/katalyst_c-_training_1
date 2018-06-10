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
    for(int i = 0;i<len;i++)
    {
        if(a[i]=='i' || a[i]== 'o' || a[i]== 'a' || a[i]== 'e' || a[i]=='u')
        {
           a[i]= '*';
        }

    }
    cout<<"The string is "<<a<<endl;
}
