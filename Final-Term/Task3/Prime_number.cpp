#include <iostream>

using namespace std;

int prime(int a);

int main()
{
    cout << "Enter a number to check if it is prime : " << endl;
    int x;
    cin >> x;

    prime(x);
    return 0;
}
int prime(int a)
{

    int count = 0;

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "The number is not prime." << endl;
    }
    else
    {
        cout << "The number is prime." << endl;
    }
}
