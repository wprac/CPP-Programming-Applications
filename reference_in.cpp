#include <iostream>
using namespace std;

/*  =================  Reference is a derived data type in c++ ===================

   1) Referecnce is considered as an another name to an existing variable
   2) when we create referece there is no seprate physical memory gets allocated to referance
   3) to create reference we have to use the & operator on left side of = operator
   4) if we use & operator on right side of = operator then it consider as an address of operator


*/

int main()
{

    int iNo =18;
    int &x = iNo;  // x is the another name to iNo variable

    cout<<"iNo : "<<iNo <<endl;  // 18
    cout<<"x : "<<x <<endl;     // 18

    cout<<"Address of iNo : "<<&(iNo)<<endl; 
    cout<<"Address of x : "<<&(x)<<endl;

    cout<<"size of iNo : "<<sizeof(iNo)<<endl;  //4
    cout<<"size of x : "<<sizeof(x)<<endl;     // 4

    x++;
    cout<<"iNo :"<<iNo<<endl; //19
    cout<<"x :"<<x<<endl;    // 19

    // we can also create multiple references to single variable

    int &y = iNo;
    int &z = iNo;

    cout<<"y :"<<y<<endl;  
    cout<<"z :"<<z<<endl;  


//  reference to reference 

    int &r = y;
    cout<<"r :"<<r<<endl;  
    cout<<"Address of r : "<<&(r)<<endl;

 // pointer to reference
     int *p = &r; // p is a inter pointer which hods the address of reference r
     cout<<" *p : "<<*p<<endl;
     cout<<" Address stored in pointer p :  "<<p<<endl;

// reference to the pointer
    int *q = &iNo;

    int *(&n) = q;  // n is the another name of the pointer q
                    // n is reference to the pointer q
    cout<<" *n : "<<*n<<endl;
    cout<<" Address stored in pointer n :  "<<n<<endl;

// reference to arry
    int arr[] ={10,20,30,40,50};

    int (&brr)[5] = arr;        // brr is the another name  of array arr[]
                                // brr [5] square bracket with no of elements in array is complusory
    return 0;
}