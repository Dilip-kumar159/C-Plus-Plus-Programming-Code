// Pattern printing
/*
    if n = 5
    12121
    21212
    12121
    21212
    12121
*/
#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {

                if (j % 2 != 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "2";
                }
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {

                if (j % 2 == 0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "2";
                }
            }
        }
        cout << endl;
    }
    return 0;
}