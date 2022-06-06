#include <iostream>
using namespace std;


class Demo
{
 public:

    int x;
    int y;

    Demo(int no1 =15,int no2= 25)
    {
        x = no1;
        y = no2;
    }

    void fun(int no){
        cout<<"Inside fun \n";
       cout<< this->x <<endl;
       cout<< this->y<<endl ;
    }
};

int main()
{
    Demo obj1;  // default value of no1 and no2 gets applied   (no1=15  no2=15)
    
    cout<<"x: "<<obj1.x<<endl;
    cout<<"y: "<<obj1.y<<endl;

    Demo obj2(18); // default value of only single parameter is applied ie for no2 (no1=18  no2=15)
    
    cout<<"x: "<<obj2.x<<endl;
    cout<<"y: "<<obj2.y<<endl;

    Demo obj3(18,28); // no default value get applied b'coze we pass both parameters (no1=18  no2=28)

    cout<<"x: "<<obj3.x<<endl;
    cout<<"y: "<<obj3.y<<endl;


    Demo obj4;
    obj4.fun(55);
    cout<<obj4.x;  //15
    return 0;
}