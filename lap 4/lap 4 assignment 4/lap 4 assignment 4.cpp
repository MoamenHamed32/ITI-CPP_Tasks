#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char Word[20];
    char Reversed[20];

    cout<<"Please Enter A Word"<<endl;
    cin>>Word;

    int Index = 0;

    for (int Length = strlen(Word) - 1;Length >= 0; Length--)
    {
          Reversed[Index] = Word[Length];
          Index++;
    }
    Reversed[strlen(Word)] = '\0';
    cout<<Reversed<<endl;


    return 0;
}
