#include<iostream>
using namespace std;
class area 
{
 public:
 int area1()
 {
    int l=10;
    int b=20;
    int ar=l*b;
    cout<<"the area of room is:"<<ar<<endl;
    return 0;

 };
 int area2(int l, int b) 
 {
    int ar=l*b;
    cout<<"the area of room is:"<<ar<<endl;
    return 0;
  
 };
 float area3(double a, double b) 
 {
    int ar=a*b;
    cout<<"the area of room is:"<<ar<<endl;
    return 0;

 };
   int area4(double a, int b) 
 {
    int ar=a*b;
    cout<<"the area of room is:"<<ar<<endl;
    return 0;  };
};
int main()
{ 
    area A1;
    area A1(11.52,20);
    area A1(15.20,20.20);
}