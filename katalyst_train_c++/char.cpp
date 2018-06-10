#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char A[30];
    int len;
    cout<<"enter the string"<<endl;
    cin.getline(A,10);
    cout<<A<<endl;
    len = strlen(A);
    cout<<len<<endl;
}
