#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        if (i%15==0)
        {
            cout<<"fizzbuzz"<<endl;
        }
        else if (i%3==0) {
            cout<<"fizz"<<endl;

        }
        else if (i%5==0)
        {
            cout<<"buzz"<<endl;

        }
        else
        cout <<i<<endl;
    }
return 0;

}