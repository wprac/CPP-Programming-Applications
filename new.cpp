#include <iostream>
#include <stdlib.h>
using namespace std;

class Dynamic
{   
public:
    int i,j;

    Dynamic() 
    {
        i =0;
        j =0;
    }

    void fun()
    {
        cout<<"Inside fun \n";
    }

    ~Dynamic()
    {
        cout<<"Inside Destructour ... \n";
    }
};

int main()
{
    Dynamic obj; // static object creation

    
    Dynamic *ptr = NULL;

    //ptr = (Dynamic *)malloc(sizeof(Dynamic)); //Dynamic object creation in c
    ptr = new Dynamic;  // Dynamic object creation in c++

    ptr->fun();         // when we have pointer to class we can use indirect accessing operator (->)
    obj.fun();        // direct accessing

    //free(ptr);       // Deallocation in c 
    delete ptr;     // When we don't deallocate dynamically alloacted memory then destructor is not call

    return 0;
}