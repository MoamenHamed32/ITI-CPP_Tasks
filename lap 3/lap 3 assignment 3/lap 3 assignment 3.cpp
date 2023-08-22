#include<iostream>
using namespace std;

int NumPow(int Base, int Pow);

int main()
{
    int a;
    int b;
    cout << "Please Enter Base Number: " << endl;
    cin >> a;
    cout << "Please Enter Power Number: " << endl;
    cin >> b;
    cout << "_____________________________" << endl;
    int Result;
    Result = NumPow(a, b);
    cout << "Result is: " << Result << endl;

    return 0;
}

int NumPow(int Base, int Pow)
{
  if(Pow != 0)
    return (Base*NumPow(Base, Pow-1));;

  return 1;
}

