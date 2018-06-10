#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[30];
    int len ,i , j;
    cout<<"Enter the string"<<endl;
    cin.getline(a,30);
    len = strlen(a);
    cout<<len<<endl;
    i=0;
    j=len-1;
    while(i<j)
    {
        if (a[i]==a[j])
        {
            i++;
            j--;
        }
        else if (a[i]!=a[j])
        {
            cout<<a<<"Not a palindrome"<<endl;
            break;
        }
    }
    if(i>=j)
    {
        cout<<a<<" Is a palindrome"<<endl;
    }

}


