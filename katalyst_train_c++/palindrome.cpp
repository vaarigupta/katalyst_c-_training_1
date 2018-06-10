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
    i=0;
    j=len;
    while(i>j)
    {
        if (a[i]==a[j])
        {
            i++;
            j--;
        }
        else
        {
            cout<<"Not a palindrome"<<endl;
        }
    }
    if(i>=j)
    {
        cout<<a<<"Is a palindrome"<<endl;
    }

}

