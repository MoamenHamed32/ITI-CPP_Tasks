#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private :
   int id;
   char Name[20];
   static int Count;

    public :
        Student()
        {
            id = 0;
            strcpy(Name, "No Name");
            Count++;
        }

        Student(int i)
        {
            id = i;
            strcpy(Name, "No Name");
            Count++;
        }

        Student(char n[30])
        {
            id = 0;
            strcpy(Name, n);
            Count++;
        }
        Student(int i, char n[30])
        {
            id = i;
            strcpy(Name, n);
            Count++;
        }

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
        static int GetCount()
        {
            return Count;
        }

        ~Student()
        {
            Count--;
        }
};

int Student::Count = 0;

int main()
{
    int StudentOneId;
    char StudentOneName[30];
    int StudentTwoId;
    char StudentTwoName[30];
    int StudentThreeId;
    char StudentThreeName[30];
    int StudentFourId;
    char StudentFourName[30];
     cout<<"Please Enter ID of The First Student"<<endl;
     cin>>StudentOneId;
     cout<<"Please Enter Name of The First Student"<<endl;
     cin>>StudentOneName;

     cout<<"Please Enter ID of The Second Student"<<endl;
     cin>>StudentTwoId;
     cout<<"Please Enter Name of The Second Student"<<endl;
     cin>>StudentTwoName;

     cout<<"Please Enter ID of The Third Student"<<endl;
     cin>>StudentThreeId;
     cout<<"Please Enter Name of The Third Student"<<endl;
     cin>>StudentThreeName;

     cout<<"Please Enter ID of The Forth Student"<<endl;
     cin>>StudentFourId;
     cout<<"Please Enter Name of The Forth Student"<<endl;
     cin>>StudentFourName;


     Student ST;
     Student ST1(StudentTwoId);
     Student ST2(StudentThreeName);
     Student ST3(StudentFourId, StudentFourName);



     StudentOneId = ST.GetId();
     StudentTwoId = ST1.GetId();
     StudentThreeId= ST2.GetId();
     StudentFourId= ST3.GetId();
     strcpy(StudentOneName, ST.GetName());
     strcpy(StudentTwoName, ST1.GetName());
     strcpy(StudentThreeName, ST2.GetName());
     strcpy(StudentFourName, ST3.GetName());


     cout<<"Student One ID is : "<<StudentOneId<<endl;
     cout<<"Student One Name is : "<<StudentOneName<<endl;
     cout<<"_________________________________"<<endl;
     cout<<"Student Two ID is : "<<StudentTwoId<<endl;
     cout<<"Student Two Name is : "<<StudentTwoName<<endl;
     cout<<"_________________________________"<<endl;
     cout<<"Student Three ID is : "<<StudentThreeId<<endl;
     cout<<"Student Three Name is : "<<StudentThreeName<<endl;
     cout<<"_________________________________"<<endl;
     cout<<"Student Four ID is : "<<StudentFourId<<endl;
     cout<<"Student Four Name is : "<<StudentFourName<<endl;
     cout<<"_________________________________"<<endl;
     cout<<"Count of Students is : "<<Student::GetCount()<<endl;


    return 0;
}
