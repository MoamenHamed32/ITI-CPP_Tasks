#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char FirstWord[10];
    char SecondWord[10];

    cout<<"Please Enter The First Word"<<endl;
    cin>>FirstWord;
    cout<<"Please Enter The Second Word"<<endl;
    cin>>SecondWord;

    if (strcmp(FirstWord, SecondWord) == 0)
    {
        cout<<"The Words Are Identical!"<<endl;
    }
    else
    {
        cout<<"The Words Are Different!"<<endl;
    }
    return 0;
}
