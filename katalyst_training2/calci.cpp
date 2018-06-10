#include<iostream>
using namespace std;
void sum(int i , int j)
{
    cout<<(i+j)<<endl;
}
void sum(float x , float y)
{
    cout<<(x+y)<<endl;
}
int main()
{
   int i , j;
   float x,y;
   cout<<"Enter the elements "<<endl;
   cin>>i>>j;
   sum(i,j);
   cout<<"Enter the elements "<<endl;
   cin>>x>>y;
   sum(x,y);
}
