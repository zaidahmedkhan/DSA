// #include <iostream>
// using namespace std;

// void sumAndProduct(int arr[], int size)
// {

//     int sum = 0;
//     int product = 1;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//         product *= arr[i];
//     }

//     cout << "sum:" << sum << "product:" << product << endl;
// }

// int main()
// {

//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;

//     sumAndProduct(arr, size);
//     return 0;
// }

#include <iostream>
#include <utility> // for std::swap
using namespace std;

void swapMinAndMax(int arr[], int size)
{
    int minIndex = 0;
    int maxIndex = 0;

    // Find indices of min and max elements
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;

        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // Swap the min and max elements
    std::swap(arr[minIndex], arr[maxIndex]);

    // Print the updated array
    cout << "Array after swapping min and max: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    swapMinAndMax(arr, size);

    return 0;
}
