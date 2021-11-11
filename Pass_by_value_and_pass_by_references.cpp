// pass by value which doesn't effect even though if any changes are made in the function.
// Becuase the values which are passed are stored in different memory location.
// #include <iostream>

// using namespace std;
// int func(int x)
// {
//     x = 10;
//     cout << "Calling func function " << x << endl;
//     return x;
// }
// int main()
// {
//     int x = 40;
//     cout << "Calling main function " << x << endl;
//     func(x);
//     return 0;
// }
// Pass by reference which effects when ever we made any changes in functions.
// Because the values which are passed are stored in  same memory location.

#include <iostream>

using namespace std;
void func(int &x)    // ampesend symbol for reference.
{
    x = 10;
    cout << "Calling func function " << x << endl;

}
int main()
{
    int x = 40;
    func(x); // Whatever we made changes in func function it affects in main function
    // also in this case the output will be same as mentioned in func function that is 10.
    cout << "Calling main function " << x << endl;
    return 0;
}