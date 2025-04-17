// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isPrime(int num)
// {

//     if (num <= 1)
//     {
//         return false;
//     }
//     if (num == 2)
//     {
//         return true;
//     }
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     int input;
//     cout << "Enter a number:" << endl;
//     cin >> input;
//     if (isPrime(input))
//     {
//         cout << input << " is a prime number." << endl;
//     }
//     else
//     {
//         cout << input << " is not a prime number." << endl;
//     }
// }

// write a function to print all prime numbers from 2 to N

#include <iostream>
using namespace std;
#include <cmath>

void printPrimeNum(int num)
{
    for (int i = 2; i <= num; i++)
    {

        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    int input;
    cout << "Enter number:" << endl;
    cin >> input;
    printPrimeNum(input);

    return 0;
}