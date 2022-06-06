#include <iostream>
using namespace std;

/*
    =========== Constructor ============
    1) constructor is considered as an userdefined function which gets implicitly called when we create object of a class
    2) Types -->
                i] Default   ( pavbhaji)
                ii] Parameterised (pavbhaji (spicy,butter))
                iii] Copy constructor ( dusrysarkhi dish )

    3) constructors are such special function with same name as per class name and not any return value
    4) it used to initialize the characteristics and allocate the resources
    5) writing constructor is a optional

*/

class Demo  
{
  public:
    int i;
    int j;

    Demo()   // Default constructor [it is not accepting any parameter]
    {
        cout<<"Inside default constructor \n";
    }

    Demo( int p ,int q) // Parameterised constructor [it is accepting any parameter]
    {
        i = p;
        j = q;
        cout<<"Inside Parameterised constructor \n";
    }

    Demo(Demo &ref)  // Demo &ref = obj2
                    // ref is another name of obj2
    {
        cout<<"Inside Copy constructor \n";

        i= ref.i; 
        j= ref.j; 

        cout<<ref.i<<endl;
        cout<<ref.j<<endl;
    }

    ~Demo()    // Destructor 
    {
        cout<<"Inside Destructor \n";
    }
};

int main()
{
    int x = 11,y = 51;

  Demo obj1;  // it will call the default constructor b'coze we not pass any  parameter             { object creation Angthi ghatli }

  Demo obj2(x,y); // it will call the Parameterised constructor b'coze we have pass parameters
    cout<<"obj2.i : "<< obj2.i <<endl;
   cout<<"obj2.j : "<< obj2.j <<endl;

     Demo obj3(obj2);  // it will call the Copy constructor b'coze we have pass the object as a parameter
    //Demo obj3 = obj2; 

    cout<<"obj3.i : "<< obj3.i <<endl;
   cout<<"obj3.j : "<< obj3.j <<endl;


    return 0;   // Destructor is call when memory gets deallocated                              { object Destroy angthi kadhali }
                // Jevdhe object create kele tevdhe veles destructor call hoto
}