#include <iostream>
using namespace std;

int main()
{
    int begin, end;

    do
    {
        cout << "Enter your range [from, to] \n";
        cin >> begin >> end;
    } while (begin >= end || begin < 2 || end < 2);

    for (int n = begin; n <= end; n++)
    {
        bool isPrime = true;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << n << " ";
        }
    }

    cout << endl;

    return 0;
}
