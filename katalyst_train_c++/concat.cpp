#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[30] , b[30] , c[60];
    int len1 , len2 ;
    cout<<"Enter the string1 "<<endl;
    cin.getline(a,30);
    len1 = strlen(a);
    cout<<len1<<endl;
    cout<<"Enter the string2 "<<endl;
    cin.getline(b,30);
    len2 = strlen(b);
    cout<<len2<<endl;
    if(len1 >len2)
    {
        strcpy(c,a);
        strcat(c,b);
        cout<<c;
    }
    else
    {
         strcpy(c,b);
        strcat(c,a);
        cout<<c;
    }

    return 0;
}
