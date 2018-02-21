#include<iostream>

using namespace std;
class aa{
    public:
    int a,b;

    void read(){
        cout<<"input length"<<endl;
     cin>>a;
     cout<<"input breadth"<<endl;
    cin>>b;
    }
};

class bb:public aa
{
    public:
     int ar;
    int area() {
        
         return  ar =a*b;
    }
    void display() {
         cout<<"area="<<ar<<endl;

    }

};

int main ()
{

    bb s1;
    
    s1.read();
  s1.area();
  s1.display();

}