#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[30];
    int len , v=0, c=0;
    cout<<"Enter the string"<<endl;
    cin.getline(a,30);
    len = strlen(a);
    for(int i = 0;i<len;i++)
    {
        if(a[i]=='i' || a[i]== 'o' || a[i]== 'a' || a[i]== 'e' || a[i]=='u')
        {
           v+=1 ;
        }
        else if(a[i]!= ' ')
        {
            c+=1;
        }
    }
    cout<<"Vowels :"<<v<<endl<<"Consonants :"<<c<<endl;



    return 0;
}

