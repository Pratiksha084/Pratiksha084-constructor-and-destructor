#include<iostream>
using namespace std;
int a,b;
class construct
{
public:
 construct ()
 {
   int a=10;
   cout<<"a:"<<a;
 }
 construct(int x)
 {
    int a=29;
   x=a;
   cout<<"x:"<<x;
 }
 construct(int a , int b)
{
    a=20;
    cout<<"a:"<<a;
    b=30;
    cout<<"b:"<<b;
}
 construct(int a, float b)
{
    a=123;
    cout<<"a:"<<a;
    b=12.22;
    cout<<"b:"<<b;
}
};
int main()
{
    construct();
    construct(int x);
    construct(int a,int b);
    construct(int a,float b);

}