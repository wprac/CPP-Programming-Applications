# include <iostream>
using namespace std;


    /*
        Function overriding is the runtime polymorphism

         1) To achieve the concept overriding we must have to use the concept virtual
         2) virtual means [Abhasi , khot khot] 
         3) if the base class contains at least single the virtual function or 
            class is derived from such class which contain at least single the virtual function  then 
            size of object is incresed by the size of pointer for VPTR {first 8 Bytes }
    */
class Base 
{
    public:
        int x, y;
    
      virtual void fun()   // function defination      when we define any method first time in the class is called as function defination
        {
            cout<<" base fun .. \n";
        }
     void gun()
     {
         cout<<" base gun \n";
     }

    virtual  void run()
     {
         cout<<" base run \n";
     }


};  


class Derived : public Base
{
    public:

        int i,j;

        void fun()     // no need to write virtaul here 
                       // if you write virtual here  there is no use to this function
                       // when class is derived to this class then it has use 
        {
            cout<<" Derived fun .. \n";
        }

        void gun()
        {
            cout<<"Derived gun \n";
        }

         void sun()
        {
            cout<<"Derived sun \n";
        }
};
int main()
{   
    Derived dobj;

   cout<<sizeof(Base) <<endl;
   cout<<sizeof(Derived) <<endl;
     
    // staic object creation

    Base *bp = NULL;   // Jyacha pointer aahe tyach function call hot
    bp = &dobj; 


 /*
    // Dynamic object creation

    Base *bp = new Derived();
 */



    bp->gun();  // jr function base madhe asel & virtual nasel tr base chch function call hot    

   // bp->sun();  // jr function base maahe nasel tr ERROR

    bp->fun();  // function base madhe aahe te pan virtual aahe tr  control khali yeun jr function derived class madhe assel tr  Derived ch call hot

    bp->run();   // function base madhe aahe te pan virtual aahe tr  control khali yeun jr function derived class madhe NASEL tr Base class chch function call hot
    
    return 0; 
}