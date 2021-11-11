// Creation of classes and objects.
#include<iostream>

using namespace std;
    class dilip
    {
        private : 
                    int a,b,c;
        public : 
                    int d,e;
                    void setnumber(int n1, int n2, int n3)
                    {
                        a=n1;
                        b=n2;
                        c=n3;
                    }
                    void getdata()
                    {
                        cout<<"The value of a : "<<a<<endl;
                        cout<<"The value of b : "<<b<<endl;
                        cout<<"The value of c : "<<c<<endl;
                        cout<<"The value of d : "<<d<<endl;
                        cout<<"The value of e : "<<e<<endl;
                    }

    };
int main()
{
    dilip dil; // Object is created for class dilip and the name is dil. 
    dil.e = 10;
    dil.d = 20;
    // dil.a = 100; Here it throws an error because 'a' is a private member of a class dilip. 
    dil.setnumber(40,30,60);
    dil.getdata();
    return 0;
}