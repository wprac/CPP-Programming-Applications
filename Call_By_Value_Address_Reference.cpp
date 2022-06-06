#include <iostream>
using namespace std;

/*
   1) value pass keli tr variable madhe ghya
   2) Address pass kela tr pointer madhe ghya
   3) variable ch name pathvl tr reference madhe ghya
*/

class Demo
{
    public:
        int a;
        int b;

    Demo()  // Default constructor
    {
        a = 0;
        b = 0;
    }

    void call_by_value(int no)  // call by value
    {                  //  increment in no is not affect to x 
        no++;
    }

    void call_by_address(int *p)  // int *p = &y [ p is pointer which holds address of integer currently it holds address of address pass to function]
    {                 
                         //  increment value *p is affect on x 
        (*p)++;
    }

    void call_by_Reference(int &ref)  // int &ref = z;  ref is another name of parameter pass to the function
    {                                  //  increment in ref is same as increment in z  
        ref++;
    }
};

int main()
{
    int x =10,y=10,z=10;

    Demo obj;
    obj.call_by_value(x);   // value in x i.e 10 is pass to the fun function
    cout<<"x : "<<x <<endl; //10

    obj.call_by_address(&y); // Address of y is pass to the function
    cout<<"y : "<<y <<endl; // 11

    obj.call_by_Reference(z); // name of variable is pass to the reference ref
    cout<<"z : "<<z <<endl; // 11


    return 0;
}