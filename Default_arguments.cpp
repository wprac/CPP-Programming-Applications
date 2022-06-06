#include <iostream>
using namespace std;

class fun
{
 public :
    int no1;
    int no2;

   float Area(float radius , float pi =3.14)
    {
        float ans =0.0;
        ans= pi*radius*radius;
        return ans;

    }
/*
    float Carea(float pi =3.14,float radius )  Default argumets should be at the end of arguments list
                                                else compiler will generate error
    {
        float ans =0.0;
        ans= pi*radius*radius;
        return ans;

    }
 */
};


int main()
{
    float fRet ,rd;
    fun obj;
    cout<<"Enter radius of the circle : ";
    scanf("%f",&rd);
   //cin>>rd;
    fRet =obj.Area(rd);     // we are passing only single parameter i.e radius to Area function 
                            // in function defination we have make 2nd parameter defaule so 
                            // when we pass only single parameter then 2nd parameter  default value gets applied

    cout<<"Area of a circle : "<<fRet<<" sq.cm "<<endl;

    fRet =obj.Area(rd,4.1);  // when we pass both the parameter value to function then default value is not applied

    cout<<"Area of a circle : "<<fRet<<" sq.cm "<<endl;

    return 0;
}