#include<iostream>
using namespace std;
int main()
{
    int x,y,power = 1;
    cin>> x>>y;
    for(int i=0;i<y;i++)
        {
            power *= x;

        }
        cout<<power;
    }
