#include <iostream>
using namespace std;


class Demo
{
    public:
        int x,y;
    
    Demo(int no1=0,int no2=0)
    {
        x=no1;
        y=no2;
    }

    
};

Demo operator +(Demo op1, Demo op2 )
    {
        return Demo(op1.x+op2.x, op1.y+op2.y);
    }

   Demo operator ++(Demo &op1)  // pre increment 
                                // op1 is the referece to the obj1 ; when we increament value in the op1 it affect on the obj1
    {
         // only Increment
         op1.x++;
         op1.y++;

         return op1;
    }


    // Post increment
    /*
        it require one extra DUMMY arguments i.e (int) to identify which function should call 
        and also remove the Ambuguity between two overloaded incremented functions

        when we use the post increment then value get initilize first to the robj and then incremented in obj2
        when we are making the reference op2 to the obj2 and when we  will incremet value in op2 it affect obj2
        but due to post increament we have to retain previous value of robj as it is so we return  Demo(op2.x-1 ,op2.y-1);
    */
  Demo operator ++( Demo &op2,int)
    {
        // only Increment
        op2.x++;
        ++op2.y;

        return Demo(op2.x-1 ,op2.y-1);
    }


int main()
{   
    Demo obj1(10,20);
    Demo obj2(30,40);
    Demo robj(0,0);

    // robj = obj1 + obj2; it will give the error b'cause we can use the opertor with the primitive data type only
                            /*
                               1) obj1 , obj2 are the user defined data type objects
                                    so  compiler don't know what type of data in it so it can't perform addition
                                    to achieve this additon we have to use operator overloading concept
                                2) we have to write our own function to perform the task 
                                        what to do ?
                                        why to do ?
                            */

    robj = obj1 + obj2; // +(obj1,obj2) internal function call
 cout<<robj.x<<" "<<robj.y<<endl;


 /* we Have to overload the opertator to preincrement the values inside the obj1 
    
    Pre Increament -> first increment the value and then initialize
 */

    robj = ++obj1; //++(obj1);

    printf("\n Pre Increment \n");
    cout<<robj.x<<" "<<robj.y<<endl;  // due to pre increment values are incremented in both rob and obj1 // 11 , 21
    cout<<obj1.x<<" "<<obj1.y <<endl; // 11 , 21


/* we Have to overload the opertator to Post increment the values inside the obj2

    post increament -> first Initilize and then increment

 */

    robj = obj2++;
    
     printf("\n Post Increment \n");
    cout<<robj.x<<" "<<robj.y<<endl; // original values of the obj2 are display 30 , 40
    cout<<obj2.x<<" "<<obj2.y<<endl;   // after post increment values are canged in obj2 // 31 , 41
    
    return 0;
}