#include <iostream>
using namespace std;

/*
   if one class is inherited from more than one classes then it is called Multiple inheritance
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


class Base2
{
    public:
        int d;

      Base2()
        {
            cout<<" Base2 class construtor \n";
        }

        ~Base2()
        {
            cout<<" Base2 class Destructor \n";
        }
};

class Derived1 : public Base,Base2        // Derived1 class is inherited from Base and Base2 class
                                            // so it called as Multiple inheritance

// we inheirited first Base class and then Base2 due to this construcotr of Base call first then Base2 constructor call after that Derrived1 class constructor call 
/*
        constructor is call in sequence of --> Base , Base2, Derived1

        Destructor is call in sequence of -->  Derived1 , Base2 , Base 
    */


// class Derived1 : public Base2,Base
    /*
        constructor is call in sequence of --> Base2 , Base, Derived1

        Destructor is call in sequence of -->  Derived1 , Base , Base2 
    */

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

int main()
{
    Derived1 obj;

    
    return 0;
}