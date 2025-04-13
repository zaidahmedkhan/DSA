// sum of all numbers divisible by 3 

#include <iostream>
using namespace std;

int main()
{

    int n;
    int sum = 0;
    cout << "Enter number\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "sum is: " << sum << endl;
    return 0;
}