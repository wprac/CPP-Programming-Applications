#include <iostream>
using namespace std;

/*
    2] Member function of the class can be the friend of our class ..
*/

class  Hello 
{   
     // fun() is the member function of the class
  
    public:
        void fun(); // function declaration


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
    
    friend void Hello::fun();

}; 

void Hello:: fun()      // Function defination
    {
        Demo obj;
        cout<<obj.i<<endl;
        cout<<obj.j<<endl;
        cout<<obj.k<<endl;
        
    }

int main()
{   
    Hello hobj;
    hobj.fun();

    return 0;
}