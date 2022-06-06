#include <iostream>
using namespace std;

/*
    Function overloading 

    1) it is considered as compile time polymorphism ; b'coze which function should called is decided at the time of compilation
    2) Polymorphism -> Single name multiple behaviours
    3) In function overloading we define more than 1 function in single class with same name but different prototype
    4) Function overloading is also called as Early Binding ; b'coze compilation is an early phase as comapared to executaion phase
                                 (Ghrunch thrvun jaycchy  konty dukanat jaychy te )

    5)function overloading is provide convinience to user of class b'coze of there is no need to remember Multiples name of function
    6) Function overloading is only applicable in the same class 

*/


class FunOver
{
 public :
    
    // Addition@2ii   (Name mangling ) 

    /* 
        After compilation of code name of each function get's automatically changed by compiler to avoid ambiguity problems

        The concept of name mangling is purely depends on the compier that we are using
    */
    int Addition( int no1, int no2)
    {
        int ans=0;
        ans =no1+no2;
        return ans;
    }

     // Addition@3iii
    int Addition( int no1, int no2 , int no3)
    {
        int ans=0;
        ans =no1+no2+no3;
        return ans;
    }
    // Addition@4iiii
    int Addition( int no1, int no2 , int no3,int no4)
    {
        int ans=0;
        ans =no1+no2+no3+no4;
        return ans;
    }

    // Area@2dd
    void Area ( double radius, double PI )
    {
        float ans =0.0;
        ans = PI*radius*radius;
        // return ans;
        cout<<"Area of circle is :"<<ans<<endl; 
    }

    // Area@2ii
    void Area ( int length, int width )
    {
        float ans =0.0;
        ans = length*width;
        // return ans;
        cout<<"Area of Reactangle is :"<<ans<<endl; 

    }
};

int main()
{
    int iRet= 0;
    float fRet =0.0;

    FunOver obj;   // creating object of Funover class


    /* Every c++ code converted to assembly language
    when we call any function then CALL instruction is get executed
    before CALL instruction parameters are pushed into satck frame

    */
    // PUSH 10
    // PUHS 20
    // CALL 1000 { address of Addition }

    iRet =obj.Addition(10,20);  //obj.Addition@2ii(10 ,20)
    cout<<"Addition is :"<<iRet<<endl;

   iRet =obj.Addition(10,20,30);
    cout<<"Addition is :"<<iRet<<endl;  

    iRet =obj.Addition(10,20,30,40);
    cout<<"Addition is :"<<iRet<<endl; 

    obj.Area(5.0,3.14);   
    obj.Area(10,5);
  

    return 0;
}

/*
    1) we can overload function by changing numbers of arguments
    
    void fun(int ,int);
    void fun(int ,int ,int);

    2) We can overload function by changing data type of arguments

    void fun(int ,int);
    void fun(double ,double );

    3) We can overload function by changing sequence of argumemts

    void fun(int ,char,double);
    void fun(char ,double ,int);

    ========== NOt Allowed=========
    we can't overload function by changing return value of function

    void fun(int ,int);
    int fun(double ,double );



*/

