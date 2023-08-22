#include<iostream>
using namespace std;

int main ()
{
  int Size;
  cout << "Enter The Size of MagicBox (Odd Number): "<<endl;
  cin>>Size;
  int Row = 1;
  int Num;
  int Col = (Size+1)/2;
  if((Size%2) == 1&& Size != 1)
    {
    for (Num = 1;Num <= (Size*Size);Num++) {
    if(Num > 1)
    {
     if(((Num - 1)%Size) != 0)
     {
         Row--;
         Col--;
         if(Row < 1)
         {
             Row = Size;
         }
         else
         {
             if(Col < 1)
             {
                 Col = Size;
             }
         }

         }

     else
     {
         if(Row > Size)
         {
             Row = 1;
         }
         else
         {
           Row++;
         }
     }

    }

    else
        {
    Row = 1;
    Col = (Size+1)/2;
    }
        cout<<"Num = "<<Num<<endl;
        cout<<"Row = "<<Row<<endl;
        cout<<"Col = "<<Col<<endl;
        cout<<"###################"<<endl;
    }


    }else
    {
        cout<<"The Size of MagicBox Must Be Odd Number"<<endl;
    }


  return 0;
}


