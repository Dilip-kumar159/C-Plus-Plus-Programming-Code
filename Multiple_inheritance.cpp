// Multiple inheritance.
#include<iostream>

using namespace std;
class a
{
    protected :
                int base1;
    public : void setdata1(int a)
    {
        base1 = a;
    }
};
class b
{
    protected : 
            int base2;
    public : void setdata2(int a)
    {
        base2=a;
    }
};
class c : public a , public b
{
    public : void show()
    {
        cout<<"Base1 : "<<base1<<endl;
        cout<<"Base2 : "<<base2<<endl;
        cout<<"Base1 + Base2 : "<<base1+base2<<endl;
    }
};
int main()
{
  c obj;
  obj.setdata1(10);
  obj.setdata2(20);
  obj.show();  
    return 0;
}