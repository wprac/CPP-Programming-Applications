#include <iostream>
using namespace std;
// Type of Inheritance depends on the access specifiers 
class Base                        // Base class
{
    public:
        int a;
        int b;
    
    private:
        int c;

    protected :
        void fun()
        {
            cout<<"Inside the Base fun() \n";
        }
      
}; 

class Derived1 : public Base          // Derived1 class is inherite the  Base class as a Public
                                    // Aahe asach rahat
{                                       
    public :
        int d;

    private :
        int e;
    
    protected :
        int f;
       
};

// class Demo : public Derived1
// {
//     public:
//         void gun()
//         {
//             cout<<"Demo gun() \n";
            
//             fun();

//             cout<<f<<endl;

//             cout<<a<<endl;
            
//         }
// };

class Derived2 : private Base   // Derived2 class is inherite the  Base class as a private
                                // sagal private madhe jat
{
   public :
        int g;

    private :
        int h;
    
    protected :
        int i;
         void gun()
        {
            cout<<" gun() \n";
            
            fun();
        }
      
};

// class Demo : public Derived2
// {
//     public:
//         void gun()
//         {
//             cout<<"Demo gun() \n";


//             // it is not accessible in  this grand child class of Base b'coze derived2 inherits Base class privetely 
//             //fun();      

//            // cout<<c<<endl;

//            // cout<<a<<endl;
            
//         }
// };


class Derived3 : protected Base   // Derived3 class is inherite the  Base class as a protected
                                // sagal protected madhe jat except private (private madhech raht)
{   public :
        int j;

    private :
        int k;
    
    protected :
        int l;
};

class Demo : public Derived3
{
    public:
        void gun()
        {
            cout<<"Demo gun() \n";
            
            fun();

            cout<<b<<endl;

            cout<<a<<endl;
            
        }
};
/*
    if any other class inherits the derived class then member of base class are accessible to
     that grand child class is purely depends on which type of inheritence is used to inherit derived class
*/

int main()
{
    Demo obj;



    obj.gun();
    // obj.a; we can't access a from outside b'coze it is protectedly inherited 

    return 0;
}