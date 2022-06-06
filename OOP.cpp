# include <iostream>
using namespace std;

class Arithmetic
{
    public:

    //Characterstics
    float ivalue1;
    float ivalue2;

    // Behaviours/functions/methods

    Arithmetic() //default constructor
    {
        cout<<"inside default constructor \n";

        ivalue1 =0;
        ivalue2 =0;
    }

    Arithmetic(float p1,float p2) // parameterised constructor
    {
        //cout<<"inside parameterised constructor \n";

      ivalue1 = p1;
      ivalue2 = p2;
    }


    float Addition()
    {
        float Ans =0;
        Ans = ivalue1 + ivalue2;
        return Ans;
    }

    float Substraction()
    {
        float Ans =0;
        Ans = ivalue1 - ivalue2;
        return Ans;
    }
    float Multiplication()
    {
        float Ans =0;
        Ans = ivalue1 * ivalue2;
        return Ans;
    }
    float Division()
    {
        float  Ans =0;
        Ans = ivalue1 / ivalue2;
        return Ans;
    }

    // ~Arithmetic()
    // {
    //     cout<<"Inside the Destructor \n";
    // }

};

int main()
{
    int iChoice = 0;                            // auto int iChoice = 0;      can't use two storage class at a time 
                                               // by default all local variable has auto storage class
    char ch ;
    
    do{
      
        cout<<"1) Addition "<<endl;
        cout<<"2) Substraction "<<endl;
        cout<<"3) Multiplication "<<endl;
        cout<<"4) Division "<<endl;

        cout<<"\n Select your choice :";
        cin>>iChoice;

    

        float iNo1=0, iNo2=0,iRet=0;

        cout<<"Enter first number :\n";    // cout is used to disply statement on console
        cin>>iNo1;                         // cin is used to accept input from the user

        
        cout<<"Enter second number :\n";
        cin>>iNo2;


        // Arithmetic obj1;                   // obj1 is the object of class Arithmetic 
        //                                 // we haven't pass any paramerter to object so it automatically/implicitly called the Default constructor

        // iRet = obj1.Addition();

        // cout<<"Addition of "<<iNo1<<" + "<<iNo2<<" = "<<iRet <<endl;
        

        Arithmetic obj2(iNo1,iNo2);     //obj2 is the other object of the class Arithmetic
                                        // we pass two parameter to the object so it call the parameterised constructor

        
        switch(iChoice)
        {
        case 1:
            iRet = obj2.Addition();
            cout<<"Addition of "<<iNo1<<" + "<<iNo2<<" = "<<iRet <<endl;
            break;

        case 2:
            iRet = obj2.Substraction();
            cout<<"Substraction of "<<iNo1<<" - "<<iNo2<<" = "<<iRet <<endl;
            break;
        case 3:
            iRet = obj2.Multiplication();
            cout<<"Multiplication of "<<iNo1<<" * "<<iNo2<<" = "<<iRet <<endl;
            break;
        case 4:
            iRet = obj2.Division();
            cout<<"Division of "<<iNo1<<" / "<<iNo2<<" = "<<iRet <<endl;
            break;

        default:
            cout<<"Invalid \n";

        }
        cout<<"Do you want to continue ? y/n"<<endl;
        cin>>ch;
    }while(ch!='n');

    return 0;

}

