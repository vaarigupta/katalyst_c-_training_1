#include<iostream>
using namespace std;
int main()
{
  int n ,d,i=0, a[40] ;
  cout<<"Enter the no of elements:"<<endl;
  cin>>n;
  cout<<"Enter the elements of array"<<endl;
  for(int i =0;i<n;i++)
  {
      cin>>a[i];
  }
  cout<<"ENter the value to search"<<endl;
  cin>>d;

  while(i<n)
  {
      if(a[i]==d)
      {
          cout<<"hence found "<<a[i]<<" At "<<i<<endl;
          break;
      }
      i++;
  }
  if(i>=n)
{
   cout<<"Not found"<<endl;
}
return 0;
}
