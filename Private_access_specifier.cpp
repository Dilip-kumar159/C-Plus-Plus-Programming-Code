// Private access specifier creation.
#include<iostream>

using namespace std;
    class dilip
    {
        private : 
                int a,b;
        public :
                void show()
                {
                    cout<<" "<<a<<" "<<b<<endl;
                }
    };
int main()
{
    dilip d;
    // d.a=10; It gives an error because a is a private access specifier 
    // d.b=20; It gives an error because b is a private access specifier 
    d.show();
    return 0;
}