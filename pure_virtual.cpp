#include <iostream>
using namespace std;

/*
    If the class contains  at lest single Pure virtual function then that class is considred as ABSTRACT class  

    When any class  inherits the abstract class then 
    it responsibility of that derived class to provide the defination of that pure virtual function 

    if not provide then it will gave the error
*/

class Base   // Abstract class
{   
    public:
        int x,y;

  virtual void fun()
    {
        cout<<"Base fun \n";
    }

    void gun()
    {
        cout<<"Base gun \n";
    }

    virtual void sun() = 0;   // this is pure virtual function 
                                // These function are decalared by the class without function body
    
};

class Derived : public Base
{
    public :
        int i,j;

        void run()
        {
            cout<<" Derived run \n";
        }
        void sun()              // Defination of pure virtual function sun ()
        {                       
            cout<<" Derived sun \n";
        }
        
};
int main()
{   
    // Base obj;  we can't create the object of the abstract class beacuse  VTABLE of that cladd is not complet so object is not completed

    Derived dobj;

    dobj.sun();
    return 0; 
}