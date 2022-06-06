#include <iostream>
using namespace std;

struct Demo
{
    int iNo;
    int iNo2;
};

typedef struct Demo DEMO;
typedef struct Demo *PDEMO;
typedef struct Demo ** PPDEMO;


/*
    shorthand 

typedef struct Demo
{
    int iNo;
    int iNo2;
}; DEMO,*PDEMO, **PPDEMO


DEMO is not a considerd as a object of structure Demo b'cause we have use typedef 

so DEMO is cosiderd as data type like struct Demo

*/
typedef int NUMBER;
typedef double DATA;

 void fun(NUMBER a, DATA d)
{
    cout<<a<<" "<<d<<endl;
}
int main()
{   

    // struct Demo obj;
    DEMO obj ;
    obj.iNo2 =11;
    obj.iNo2 =21;

   // struct Demo *p =&obj;
    PDEMO p = &obj;

// struct Demo **q =&p;
    PPDEMO q = &p;
    cout<<q<<endl;

    fun(11,21);

    // typedef in derived data type Array

   typedef const int iCArray[10] ;

   iCArray i ={11,21,51};

    cout<<sizeof(i)<<endl;  //40
   cout<<i[2]<<endl;    //51

    return 0;
}