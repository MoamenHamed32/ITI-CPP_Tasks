#include<iostream>
using namespace std;

int main()
{
int Grades[4][3];
int StudentGrades = 0;
float Avg = 0;

for(int Students = 0; Students < 4; Students++)
{
    for (int Subj = 0; Subj < 3; Subj++)
    {
        cout<<"Please Enter Grade "<<(Subj + 1)<<" of Student "<<(Students + 1)<<endl;
        cin>>Grades[Students][Subj];
        cout<<endl;
    }
}

for(int Students = 0; Students < 4; Students++)
{
    for (int Subj = 0; Subj < 3; Subj++)
    {

        StudentGrades += Grades[Students][Subj];


    }
    cout<<"Grades of Student "<<(Students + 1)<<" : "<<StudentGrades<<endl;
    StudentGrades = 0;
    cout<<endl;
}

for(int Subj = 0; Subj < 3; Subj++)
{
    for (int Students = 0; Students < 4; Students++)
    {

        Avg += Grades[Students][Subj];


    }

    cout<<"Average of Subject "<<(Subj + 1)<< " Grades is "<<" : "<<Avg / 4<<endl;
    Avg = 0;
    cout<<endl;
}
    return 0;
}
