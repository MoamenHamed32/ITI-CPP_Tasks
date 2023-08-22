#include<iostream>
using namespace std;

int main()

{
    int Size;
    cout<< "How Many Numbers Do You Want ??"<<endl;
    cin>>Size;
    int *ar;
    ar = new int [Size];
    if(ar)
    {
    for(int i = 0;i < Size; i++) {
        cout<<"Please Enter Number "<<i+1<<endl;
        cin>>*(ar+i);
    }
    int Sum = 0;
    for(int i =0;i<Size;i++)
    {
    Sum += *(ar+i);

    }
    cout<<endl;
    cout<<"The Total is : "<<Sum<<endl;

    delete(ar);
    }


    return 0;
}
