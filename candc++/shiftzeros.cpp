#include<iostream>
using namespace std;

void shiftzero(int a[],int n)
{


int count=0;
 for (int i=0;i<n;i++)
 {
     if(a[i]!=0)
     {
     a[count++]=a[i];

     }
     
 }

 while (count < n)
        a[count++] = 0;

for (int i=0;i<n;i++)
cout<<a[i];


}


int main()
{
    cout<<"enter the no of elements in array"<<endl;
    
    int n;
    cin>>n;
    int a[100];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    shiftzero(a,n);
  return 0;
}