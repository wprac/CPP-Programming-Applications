#include <iostream>
using namespace std;

/*
    // Friend function 

    when we create any function as friend of our class then that friend function can access the all Non-public as well as
        public characteristics of our class

   1] Naked function can be friend of our class ..
*/
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
    
    friend void Nfun();  // we make Nfun() as friend of our class so it  can access the non public characteristics of the class
    friend int main();   // we can also make main() function as a friend of our class but do't do this
}; 


class Hello : public Demo
{
    public:
        int x;

    private:
        int y;

    protected:
        int z;
    
    public:
        Hello()
        {
            x=100;
            y =200;
            z=300;
        }
};

// Nfun() is the naked function (i.e) it is outside the class

void Nfun()
{
    Demo obj;

    Hello hobj;

     cout<<hobj.x<<endl;

        /*
            Base class friend function is not remaines friend in the derived class

        */

        // cout<<hobj.y<<endl;      // error
        // cout<<hobj.z<<endl;      // error

    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    cout<<obj.k<<endl;
    
}

int main()
{   
    Nfun();

    Demo dobj;

    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.k<<endl;
    return 0;
}