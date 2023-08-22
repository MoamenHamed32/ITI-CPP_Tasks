#include<iostream>
using namespace std;

int main ()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int Max;
    int Min;

    cout<<"Number 1: "<<endl;
    cin>>num1;
    cout<<"Number 2: "<<endl;
    cin>>num2;
    cout<<"Number 3: "<<endl;
    cin>>num3;
    cout<<"Number 4: "<<endl;
    cin>>num4;
    cout<<"Number 5: "<<endl;
    cin>>num5;


    if (num1>=num2&&num1>=num3&&num1>=num4&&num1>=num5)
       {
           Max = num1;

       }
       else
       {
        if (num2>=num1&&num2>=num3&&num2>=num4&&num2>=num5)
        {
            Max = num2;
        }
        else
       {
        if (num3>=num1&&num3>=num2&&num3>=num4&&num3>=num5)
        {
            Max = num3;
        }
        else
       {
        if (num4>=num1&&num4>=num2&&num4>=num3&&num4>=num5)
        {
            Max = num4;
        }
        else
       {
        if (num5>=num1&&num5>=num3&&num5>=num4&&num5>=num2)
        {
            Max = num5;
        }
       }
       }
       }
       }


           if (num1<=num2&&num1<=num3&&num1<=num4&&num1<=num5)
       {
           Min = num1;

       }
       else
       {
        if (num2<=num1&&num2<=num3&&num2<=num4&&num2<=num5)
        {
            Min = num2;
        }
        else
       {
        if (num3<=num1&&num3<=num2&&num3<=num4&&num3<=num5)
        {
            Min = num3;
        }
        else
       {
        if (num4<=num1&&num4<=num2&&num4<=num3&&num4<=num5)
        {
            Min = num4;
        }
        else
       {
        if (num5<=num1&&num5<=num3&&num5<=num4&&num5<=num2)
        {
            Min = num5;
        }
       }
       }
       }
       }
       cout<<"Maximum Number is: "<<Max<<endl;
       cout<<"Minimum Number is: "<<Min<<endl;


    return 0;
}
