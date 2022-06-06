#include <iostream>
using namespace std;

/*
    To use object oriented concept Abstraction we have to use concept of Access specifier
*/
class Demo
{
    int z;   // By default it is private in c++
            // private memmber is accessible inside the class only

 public:    // Public access specifiers can be accessed by any one outside or inside class 

    int x;
    int y;

    Demo(int no1 ,int no2)   // Constructor and destructor should be always Public b'coze they are call by compiler when we create object
    {
        x = no1;
        y = no2;
        z=  no1+no2;
    }

    void Gun()              // Gun() is public so its accessible for anyone
    {   

        cout<<"Inside the Gun ... \n";
        z++;
        cout<<"z :"<<z<<endl;     

        Fun();            //We can call function inside function
                            // it is call as helper function
    }
  
private:  //(Zakun thevaly)
    int i;                              // Privates member of a class is accesible within the class only

    void Fun()                          
    {   
        i=0;
        cout<<"Inside the fun ... \n"; 
     
        cout<<"i :"<<i<<endl;            // Gharatil lokch te access karu shktat        

    }

};

int main()
{
   Demo obj(18,21); 

   cout<<"x :"<<obj.x<<endl;
   //cout<<"z :"<<obj.z;  z is a private member of class so it can't accessible outside the class

    obj.Gun();
    //obj.Fun(); // Fun() is private so Not accesible outside the class
    return 0;
}