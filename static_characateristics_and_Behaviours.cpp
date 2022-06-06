#include <iostream>
using namespace std;

class A
{   
    private :

        static int value;
    public:

        int i ,j;          // i and j are the instance variable
        static int no;   // static variable is a class variable so when we crater object of class there is no memory for staitc variable

        A()             // Default constructor 
                        // don't initialize the staic variable inside the constructor
                        // beacuse when object is created then constructor is called but we can accees staic variable without creating object
        {
            i =10;
            j =20;
            
        }

        void gun()           /* in Non static method we can access Both satic and non static charcteristics of class */
        {   
            cout<<"Inside non staic method gun() \n"; 
            cout<<i<<endl;
            cout<<no<<endl;   // no is the staitc characteristics of A class
             
            cout<<A::value<<endl;  // vlaue is a static private characteristics of class A

            static int ino =100;  // here static is storage clss 
                                    //value of ino is preserved through out function call
            
            cout<<ino<<endl;
            ino++;
            // cout<<this;  this pointer is only used in the non static member function
        }

        static void fun()                             /* in static method we can access only satic charcteristics of class */
        {
            cout<<"Inside staic method fun() \n"; 
        //    cout<<i<<endl;   errror b'coze we can't access the non static member in the static method

            //cout<<this;   not allowed 
                            // because when we call the function using the object name the address of that function is pass as first parameter implicitly
                            //  and it store in one pointer called as this pointer but here we are calling the function by without crating the object
        }


};

int A :: no =30;     // we can initialize the staic variable after the end of class
                    // staic variable can be access without creating object of class
                    // static characteristic no is commoun for all class members
                    // When we change value of static variable then it effect on all the object
                
                /*
                    ex. 1) 2 dish aahet tyamdhe salt is commoun for 2 dish if any one has finish it then it is not available for another person
                        2)  3 VadPav ghetle 3 lokani ani  tyana chatni/sos saglynsathi commoun dila jr to ekanech sampvla tr baki lokana nahi milanar
                */

int A::value =100;

int main()
{
    cout<<A::no<<endl; //30  // we can access staic variable without creating object
    A::no++;  // 31 // it will affect on both the objects
   
    A obj ,obj2;
    cout<<"size of class A :"<<sizeof(obj)<<endl; //8
    obj.no++; //32
    cout<<obj.no<<endl; //32
    cout<<obj2.no<<endl; //32
    
    obj.gun();     // non staic method can call only by using object name 

    // obj.fun();     /* we can call staic method by using object as well as class name */ 
    A ::fun(); 

     obj.gun(); 
      obj.gun(); 

    return 0; 
}