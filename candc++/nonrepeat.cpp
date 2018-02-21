#include<iostream>
using namespace std;

void unique(string s)
{
    int a[256]={0};
    for (auto i:s)
    a[i]++;
    for (int i=0;i<s.length();i++)
    {
        if (a[s[i]]==1)
        {
            cout<<s[i]<<" ";
        cout<<i<<endl;
        
        }

    }

}
int main ()
{
    cout<<"enter the string"<<endl;
    string s;
    cin>>s;
    unique(s);
    return 0;
}