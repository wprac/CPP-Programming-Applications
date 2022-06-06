#include <iostream>
using namespace std;

int main()
{
    int arr[5]; //static Memory allocation

    int *p =NULL;

    p =arr;  // p is pointer which holds address of arr

    // p = (int *)malloc(sizeof(int)*5) ==>> Dynamic Memory allocattion in c 
    
    p = new int[5]; //Dynamic Memory allocattion in c++
                    // 5 is the number of elemnets that allcoate memory Dynamically

    if(p==NULL)
    {
        cout<<" memory allocation is failed \n";
    }
    
    else
    {
        cout<<"Dynamic memory allocation successfull at address "<<p<<"\n";
    }

    // free(p)  free is function in c to deallocate memory  
    delete []p; // delete is a oerator to deallocate memory  in c++

    // if we only use delete p then it deallocate memory of first elment only 
    // remaining un deallocated memory is considered as memory likage
    // to avoid memory likage use []p to deallocate whole memory of array

   

    return 0;
}