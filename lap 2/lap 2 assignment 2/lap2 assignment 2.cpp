#include<cmath>
#include<iostream>
using namespace std;

int main ()
{
int a;
int b;
int c;
int Result;
float x1;
float x2;


cout<<"A :"<<endl;
cin>>a;
cout<<"B :"<<endl;
cin>>b;
cout<<"C :"<<endl;
cin>>c;

Result =pow(b,2)-(4*a*c);

if (Result == 0)
{
 x1 = (-b / (2*a));
 x2 = (-b / (2*a));
 cout<<"X1 :" <<x1<<endl;
 cout<<"X2 :" <<x2<<endl;

}
else
{
 if(Result > 0)
 {
    x1 = (-b - sqrt(Result)) / 2*a;
    x2 = (-b + sqrt(Result)) / 2*a;
    cout<<"X1 :" <<x1<<endl;
    cout<<"X2 :" <<x2<<endl;
 }
 else
    {
    if(Result < 0)
    {

       cout<<"Real :" <<(-b /2*a)<<endl;
       cout<<"Imag :" <<((sqrt(Result * -1))) / (2*a)<<endl;
    }
 }
}







return 0;
}
