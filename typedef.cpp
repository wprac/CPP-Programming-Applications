
//typedef concept is allowed in both C and C++

#include <iostream>
using namespace std;

/*
    - By using typedef concept we can assign the new name to an existing data type like primitive , Derived and User defined datatypes.

    - Typedef is used to simplifly the complecated syntax of data type.
*/
int main()
{

    typedef int NUMBER; // Number is another name to the int data type
    typedef char  LETTER ; // Letter is another name to the char data type

    NUMBER No =11;
    LETTER ch ='I';

    cout<<"Size of NUMBER : "<<sizeof(NUMBER)<<endl;
    cout<<No<<endl;

    
    cout<<"Size of LETTER ch : "<<sizeof(ch)<<endl;
    cout<<ch<<endl;

   typedef  int * const CPTR ;
   // const int * p = &No ;
   CPTR p = &No;
   (*p)++;
//    p=p+1; not change b'cause pointer is constant
   cout<<*p;

    return 0;
}
