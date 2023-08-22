#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private :
   int id;
   char Name[20];

    public :
      void  SetId(int NewId)
        {
            id = NewId;
        }
      void  SetName(char NewName[30])
        {
      strcpy(Name, NewName);
        }

        int GetId()
        {
            return id;
        }

        char* GetName()
        {
           return Name;
        }


};

int main()
{
    int StudentOneId;
    char StudentOneName[30];
    int StudentTwoId;
    char StudentTwoName[30];
     Student ST;
     Student ST1;
     cout<<"Please Enter ID of The First Student"<<endl;
     cin>>StudentOneId;
     cout<<"Please Enter ID of The Second Student"<<endl;
     cin>>StudentTwoId;

     cout<<"Please Enter Name of The First Student"<<endl;
     cin>>StudentOneName;
     cout<<"Please Enter Name of The Second Student"<<endl;
     cin>>StudentTwoName;

     ST.SetId(StudentOneId);
     ST1.SetId(StudentTwoId);
     ST.SetName(StudentOneName);
     ST1.SetName(StudentTwoName);

     StudentOneId = ST.GetId();
     StudentTwoId = ST1.GetId();
     strcpy(StudentOneName, ST.GetName());
     strcpy(StudentTwoName, ST1.GetName());

     cout<<"Student One ID is : "<<StudentOneId<<endl;
     cout<<"Student One Name is : "<<StudentOneName<<endl;
     cout<<"_________________________________"<<endl;
     cout<<"Student Two ID is : "<<StudentTwoId<<endl;
     cout<<"Student One Name is : "<<StudentTwoName<<endl;

    return 0;
}
