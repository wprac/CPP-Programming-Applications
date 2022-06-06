#include<iostream>

// :: scope resolution 
namespace Marvellous
{
        void fun()
        {
            std :: cout<<"Inside fun Marvellous \n";
        }
} // there is no semicolumn at end of the namaspace
    // b'cause it is not data type

namespace Infosystems
{
        void fun()
        {
            std :: cout<<"Inside fun Infosystem \n";
        }
}
int main()
{   
    std :: cout<<"Jay Shree Ram \n";

    using namespace Marvellous;
    using namespace Infosystems;

    //  fun(); // ambigious errror
                // b'cause fun() is  present in both the namespaces 

    Infosystems ::fun();
    Marvellous :: fun();

    return 0;
}