# include <iostream>
using namespace std;

class Base 
{
    public:
        int x, y;
    
      void fun()   // function defination      when we define any method first time in the class is called as function defination
        {
            cout<<"Inside the base fun .. \n";
        }

        void fun( int no1 , int no2)  // Overloaded defination  
                                     //when in the same class more than one  function of same name is defined with different prototype called overloaded defenation

        {
            cout<<"Inside overloaded fun \n";
        }
};  


class Derived : public Base
{
    public:

        int i,j;

        void fun()     // redefination
                     // When base class contains one method and that same name method also contains in the derived class with different/same prototype then it called redefination
        {
            cout<<"Inside the Derived fun .. \n";
        }
};
int main()
{
    Base bobj;
    bobj.fun();

    Derived dobj;
    dobj.fun();
    return 0; 
}