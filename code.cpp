// print factorial of number n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number\n";
    cin >> n;
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {

        factorial *= i;
    }

    cout << "Factorial is: " << factorial << endl;
}