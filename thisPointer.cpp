#include <iostream>
using namespace std;


class Demo
{
 public:

    int x;
    int y;

    Demo(int no1 ,int no2)
    {
        x = no1;
        y = no2;
    }


    void Fun(int data)    //void Fun(Demo *this  ,41)   Demo *this =100
    {
        cout<<"Inside the Fun ... \n";
        cout<<this->x<<endl;
        cout<<this->y<<endl;

        cout<<"Data :"<<data;
    }
};

int main()
{
   Demo obj(18,21); 

    obj.Fun(41);     // -->  Fun(&obj ,41) --> Fun(100,41)   100 obj address

    /*
        In every object oriented funtion to call the function we required caller object

        when we call function by using name of object then address of that object is get implicitly passed as a first parameter of that function
            the address is accepted in pointer is called as this  pointer

          */
    return 0;
}