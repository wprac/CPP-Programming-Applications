#include <iostream>
using namespace std;

/*
    3] whole class can be the friend of our class ..

        when whole class is friend then all the function of that friend class can access the non public members of our class
*/

class  Hello 
{   
     // fun() is the member function of the class
     // gun() is the member function of the class
  
    public:
    
    // function declaration
        void fun(); 
        void gun();

};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected :
        int k;

    public:
        Demo()
        {
            i =10;
            j=20;
            k=30;
        }
    
    // friend void Hello::fun();
    // friend void Hello::gun();

    friend class Hello;

}; 

void Hello:: fun()      // Function defination
    {
        Demo obj;
            cout<<obj.i<<endl;
            cout<<obj.j<<endl;
            cout<<obj.k<<endl;
        
    }

void Hello::gun()    // Function defination
{

    Demo obj;
            obj.i =100;
            obj.j=200;
            obj.k=300;

        cout<<obj.i<<endl;
        cout<<obj.j<<endl;
        cout<<obj.k<<endl;
}

int main()
{   
    Hello hobj;
    hobj.fun();
    hobj.gun();

    return 0;
}