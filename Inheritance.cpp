#include <iostream>
# pragma pack(1)  // 1 -1 chya patit memory allocate kr... as preprocessor compiler la sangtoy
using namespace std;


class Base
{   

 private :
    double d;   // External kunich access karu shakt nahi not even derived class
    int i;                  

 public:
    int x,y;
    Base()                                                       
    {
        x =0;
        y =0;
        cout<<"Inside the base class constructor ..\n";

        // fun(); valid
    }

    ~Base()
    {
        cout<<"Inside the base class Destructor ..\n";
    }
    
 protected:     // Derived class can access
    void fun()
    {
        cout<<"Inside the Procted fuunction fun of Base class  ... \n";

        // Gun();  can't access any member of derived class in Base class 
    }

   
};


class Derived :public Base  // Class Derived is derived from the Bae class
{   
     private:
         float f; 

    public:
        int i,j;

                                                    /*   constructor of derived class call after the base class constructor

                                                                                constructor of base class
                                                                                   |
                                                                                   |
                                                                                   |
                                                                                   |
                                                                                   v   
                                                                                constructor of Derived class                        */
    Derived()        
    {
        cout<<" Inside the Derived class constructor ..\n";
    }

     ~Derived()
    {
        cout<<" Inside the Derived class Destructor ..\n";
    }

    void Gun()
    {                           // we can access all the public and proted members of a base class in derived class
        cout<<"x :"<<x <<endl;
        cout<<"y :"<<y <<endl;
         cout<<"Inside the Gun ... \n";

         fun();           // we can access the procted access specifire members in imediate derived class

         //cout<<" d :"<<d<<endl; // we can't acccess the private members of Base class in Derived class
    }

    




/*
                                      Destructor of base class
                                                ^
                                                |
                                                |
                                                |
                                                |   
                                        Destructor of Derived class call first*/

};

// Multilevel_Inheritaance 

class Derived1 :public Derived
{
    public :
        int no1 ,no2;
        
    private :
        float fvalue;

    
};


int main()
{
  // Base obj;
   Derived obj1;

//    obj1.fun();   // protected function is not accessible outside the class
   obj1.Gun();
   
  // cout<<"Size of obj :"<<sizeof(obj)<<endl;  // 24 byte due to padding 
                                            // 20 byte due to pragma pack()

    
    return 0;
}