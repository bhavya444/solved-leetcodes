#include<iostream>
using namespace std;
void inter(int a[100],int b[100],int m,int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
   if(a[i]<b[j])
     a[i]++;
     else if (a[i]>b[j])
     b[j]++;
     else
     {
     cout<<b[j]<<endl;
     i++;
     j++;
     }
    }
}
    int main ()
    {
        cout <<"enter the size of  two arrays"<<endl;
        int m,n;
        cin>>m;
        cin>>n;
        int a[100],b[100];
        cout<<"enter the elements of 1st array"<<endl;
        for (int i=0;i<m;i++)
         cin>>a[i];
         cout<<"enter the elements of 2nd array"<<endl;
        for (int i=0;i<n;i++)
         cin>>b[i];
         inter(a,b,m,n);
         return 0;
    }
