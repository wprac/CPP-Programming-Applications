#include <iostream>
using namespace std;

int main()
{   
              //we can use only integers 
              
    //           0   1   2   3    4   5  6
    enum Days { Sun,Mon,Tue,Wed,Thus,Fri,Sat};

    enum Days obj;

    obj =Tue;

    cout<<obj<<"\n";
    cout<<sizeof(Days)<< "\n";

                //  1        2
    enum Gender {Female =1,Male}; // we can use only integers
    
    // enum Gender obj2;
    // obj2 =Male;

    // cout<<obj2<<"\n";

    cout<<"1. Female \n";
    cout<<"2. Male \n";
    cout<<"Selct Gender : \n";

    int choice =0;
    cin>>choice;

    switch(choice)
    {
        case Female:
            cout<<"Tax free limit is 300000 rs \n";
            break;
        case Male:
            cout<<"Tax free limit is 250000 rs \n";
            break;

        default:
            cout<<"Invalid Gender \n";
    }

    return 0;

}