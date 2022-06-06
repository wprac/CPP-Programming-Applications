#include <iostream>
using namespace std;

// 1] constant chracteristics 
// 2] constant member function

class Demo
{
    public:
    //   const int x=10;
      const int x;

    public:
        Demo():x(10)
        {
            // x=10; can't change/modify or initialize the value of constant here
        }

        Demo (int a, int b):x(b)
        {
            // x++; can't modify constant
        }
};      



int main()
{   
    // we have to initialize the constant in c++ at the time of creating constant variable
    //  const int no;
    //  no=10;   // error

    const int no=11;

    Demo dobj;
    Demo dobj2(10,20);
    cout<<dobj.x<<endl;
    cout<<dobj2.x<<endl;
    return 0;
}