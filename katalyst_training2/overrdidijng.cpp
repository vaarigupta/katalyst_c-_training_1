#include<iostream>
using namespace std;
class over
{
public:
    int i;
    float j;
    void input()
    {
        cin>>i;
    }
    void display()
    {
        cout<<i<<endl;
    }
};
class over1 : public over
{
public:

    void input()
    {
        cin>>j;
    }
    void display()
    {
        cout<<j<<endl;
    }

};
int main()
{
     over1 o;
     o.input();
     o.display();
    return 0;
}
