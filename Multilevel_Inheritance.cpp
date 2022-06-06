#include <iostream>
using namespace std;

/*
    If class is derived from another derived class then it is called as Multilevel Inheritance
*/

class Base                        // Base class
{
    public:
        int a;
        int b;
    
        Base()
        {
            cout<<"Base class constructor \n";
        }

        ~Base()
        {
            cout<<"Base class Destructor \n";
        }
}; 

class Derived1 : public Base          // Derived1 class is inherited from Base class
{
    public :
        int c;

        Derived1()
        {
            cout<<" Derived1 class construtor \n";
        }

        ~Derived1()
        {
            cout<<" Derived1 class Destructor \n";
        }
};

class Derived2 : public Derived1     // Derived2 class is inherited from Derived1 class

                                    // This is called as multilevel Inheritance
{
    public:
        int d;

      Derived2()
        {
            cout<<" Derived2 class construtor \n";
        }

        ~Derived2()
        {
            cout<<" Derived2 class Destructor \n";
        }
};
int main()
{
    Derived2 obj;

    /*
        constructor is call in sequence of --> Base , Derived1, Derived2

        Destructor is call in sequence of -->  Derived2 , Derived1 , Base 
    */
    return 0;
}