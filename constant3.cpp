#include<iostream>
using namespace std;

// 1] constant chracteristics --> we can't modify value
// 2] constant member function --> such member function that can't be modify the characteristics of a class

class Demo
{
    public:
        int i;
        const int j;    // Constant characterist

        Demo(int a, int b) : j(b)
        {
            i = a;
        }
        void fun()
        {
            cout<<"Inside fun\n";
            i++;        // Allowed
            // j++;     //Not allowed
        }
        void gun(int a, const int b) const      // constant function / behaviour
        {
            // b is a constant input argument
                int x = 10;
                const int y = 20;       // Constant local variable

                cout<<"Inside gun\n";
                //  i++;        // Not allowed b'cause the constant member function can't modify the charcteristics of class
                /// j++;     // Not allowed

                x++;        // allowed this is not a charcteristics of class it is local variable of gun()
            //  y++;        // Not allowed

                a++;    // Allowed
            // b++;        // not allowed
        }
};

int main()
{
   Demo obj1(11,21);
   const Demo obj2(11,21);

    // Normal object can call both constant and non-constant methods
    obj1.fun();
    obj1.gun(10,20);

    // Constant object call only the constant methods
        //obj2.fun(); Error
    obj2.gun(10,20);

    return 0;
}