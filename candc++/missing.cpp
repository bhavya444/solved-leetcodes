#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int a[100];
    cout<<"enter the array"<<endl;
    for (int i=0;i<n;i++)
    cin>>a[i];

    int missing=n; // important

    for(int i=0;i<n;i++)
    missing^=i^a[i];

cout<<"the missing no is "<<missing<<endl;
}
