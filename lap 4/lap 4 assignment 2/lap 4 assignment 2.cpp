#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char FirstName[10];
    char LastName[10];
    char FullName[20];

    cout<<"Please Enter Your First Name"<<endl;
    cin>>FirstName;
    cout<<"Please Enter Your Last Name"<<endl;
    cin>>LastName;

   strcpy(FullName, FirstName);
   strcat(FullName, " ");
   strcat(FullName, LastName);


    cout<<"Your Full Name Is: "<<FullName<<endl;
    return 0;
}
