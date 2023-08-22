#include<iostream>
#include<string.h>
using namespace std;
class Person
{
protected:

    int Id;
    char Name[30];

public:

    Person()
    {
        Id = 0;
        strcpy(Name, "No Name");
    }
    Person(int i)
    {
        Id = i;
        strcpy(Name, "No Name");
    }
    Person(char n[30])
    {
        Id = 0;
        strcpy(Name, n);
    }
    Person(int i, char n[30])
    {
        Id = i;
        strcpy(Name, n);
    }
    void SetId(int i)
    {
        Id = i;
    }
    void SetName(char n[30])
    {
        strcpy(Name, n);
    }
    int GetId()
    {
        return Id;
    }
    char* GetName()
    {
        return Name;
    }
};
class Employee:public Person
{
    int Salary;

public:
    Employee()
    {
        Salary = 0;
    }
    Employee(int i,char n[30],int s ):Person(i, n)
    {
        Salary = s;
    }

    void SetSalary(int s)
    {
        Salary = s;
    }
    int GetSalary()
    {
        return Salary;
    }

};

class Customer:public Person
{
    char PhoneNum[30];

public:
    Customer()
    {
        strcpy(PhoneNum, "No Number");
    }
    Customer(int i, char n[30], char p[30]):Person(i,n)
    {
        strcpy(PhoneNum, p);
    }
    void SetPhoneNumber(char p[30])
    {
        strcpy(PhoneNum, p);
    }
    char* GetPhoneNum()
    {
        return PhoneNum;
    }
};
int main ()
{
int prsId, empId, cusId, empSal;
char prsName[30], empName[30], cusName[30], cusPhone[30];

cout<<"Please Enter The ID of Person One :"<<endl;
cin>>prsId;
cout<<"Please Enter The Name of Person One :"<<endl;
cin>>prsName;
cout<<"Please Enter The ID of Employee One :"<<endl;
cin>>empId;
cout<<"Please Enter The Name of Employee One :"<<endl;
cin>>empName;
cout<<"Please Enter The Salary of Employee One :"<<endl;
cin>>empSal;
cout<<"Please Enter The ID of Customer One :"<<endl;
cin>>cusId;
cout<<"Please Enter The Name of Customer One :"<<endl;
cin>>cusName;
cout<<"Please Enter The Phone Number of Customer One :"<<endl;
cin>>cusPhone;

Person prs1(prsId, prsName);
Employee emp1(empId, empName, empSal);
Customer cus1(cusId, cusName, cusPhone);



cout<<"Person 1 : "<<endl<<"ID : "<<prs1.GetId()<<endl<<"Name : "<<prs1.GetName()<<endl;
cout<<"###########################"<<endl;
cout<<"Employee 1 : "<<endl<<"ID : "<<emp1.GetId()<<endl<<"Name : "<<emp1.GetName()<<endl<<"Salary : "<<emp1.GetSalary()<<endl;
cout<<"###########################"<<endl;
cout<<"Customer 1 : "<<endl<<"ID : "<<cus1.GetId()<<endl<<"Name : "<<cus1.GetName()<<endl<<"Phone Number : "<<cus1.GetPhoneNum()<<endl;



    return 0;
}
