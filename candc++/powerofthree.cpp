#include<iostream>
using namespace std;
bool powerof(int n)
{
    if(n<1)
    cout<<"error"<<endl;
    else 
    {
        while(n%3==0)
        {
            n=n/3;
        }
        return n==1;
    
    }
    
}
int main()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    bool a=powerof(n);
    if(a)
    cout<<"power of three"<<endl;
    else
    cout<<"isnt"<<endl;
}
