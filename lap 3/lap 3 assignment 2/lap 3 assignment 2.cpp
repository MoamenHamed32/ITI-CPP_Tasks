#include<iostream>
using namespace std;


int main()
{
    int NumsArr[5];

        int Min = 1;
        int Max= -1;
        float avg;



    for (int i=0;i < 5; i++)
    {
        cout<<"Please Enter Number "<<i+1<<endl;
        cin>>NumsArr[i];
        Min = NumsArr[0];
        Max = NumsArr[0];

        if (Min > NumsArr[i])
        {
            Min = NumsArr[i];
        }

       if(NumsArr[i] > Max)
        {
            Max = NumsArr[i];
        }

        avg = (Min + Max) / 2;


    }
    cout<<"Maximum Number is "<<Max<<endl;
    cout<<"Minimum Number is "<<Min<<endl;
    cout<<"Average is "<<avg<<endl;

    return 0;
}
