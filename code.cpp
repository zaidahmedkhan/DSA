#include <iostream>
using namespace std;

int main()
{

    int firstNumber;
    int secondNumber;
    cout << "Enter First Number:" << endl;
    cin >> firstNumber;

    cout << "Enter Second Number:" << endl;
    cin >> secondNumber;

    int addition = firstNumber + secondNumber;
    int subtraction = firstNumber - secondNumber;
    int multiplication = firstNumber * secondNumber;
    int division = firstNumber / secondNumber;
    int remainder = firstNumber % secondNumber;

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}