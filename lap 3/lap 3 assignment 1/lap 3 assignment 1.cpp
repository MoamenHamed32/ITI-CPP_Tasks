#include<iostream>
using namespace std;


int Add(int x, int y);
int Subtract(int x, int y);
int Multiply(int x, int y);
float Divide(float x, float y);

int main()
{
   int User, Num1, Num2;
   float Result;
   do  {
     cout<<"1. Add"<<endl;

     cout<<"2. Subtract"<<endl;

     cout<<"3. Multiply"<<endl;

     cout<<"4. Divide"<<endl;

     cout<<"5. Exit"<<endl;
     cout<<"_________________________"<<endl;
     cin>>User;
     if (User < 5&& User > 0)
     {
        cout<<"Please Enter The First Number :"<<endl;
        cin>>Num1;
        cout<<"Please Enter The Second Number :"<<endl;
        cin>>Num2;
     }

     switch(User)
     {
     case 1:

        Result = Add(Num1, Num2);
        cout<<"Result is :"<<Result<<endl;
        cout<<"_____________________________"<<endl;
        break;

     case 2:
        Result = Subtract(Num1, Num2);
        cout<<"Result is :"<<Result<<endl;
        cout<<"_____________________________"<<endl;
        break;

     case 3:
        Result = Multiply(Num1, Num2);
        cout<<"Result is :"<<Result<<endl;
        cout<<"_____________________________"<<endl;
        break;

     case 4:
        Result = Divide(Num1, Num2);
        if (Result != 0)
        {
         cout<<"Result is :"<<Result<<endl;
        }
        cout<<"_____________________________"<<endl;

        break;

     case 5:
         cout<<"The Program Has Been Terminated!"<<endl;
         cout<<"_____________________________"<<endl;
        break;

     }

    }while (User != 5);

    return 0;
}

int Add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int Subtract(int x, int y)
{
    int z;
    z = x - y;
    return z;
}
int Multiply(int x, int y)
{
    int z;
    z = x * y;
    return z;
}
float Divide(float x, float y)
{
    float z;
    if (y)
    {
           z = x / y;
    }
    else
    {
        cout<<"Second Number Must Be Non-Zero!"<<endl;
    }

    return z;
}




