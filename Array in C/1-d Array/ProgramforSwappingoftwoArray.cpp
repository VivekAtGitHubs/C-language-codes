#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int a[size], b[size], temp;

    // Input elements for array a
    cout << "Enter 5 elements for array A:\n";
    for (int i = 0; i < size; i++) {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }

    // Input elements for array b
    cout << "Enter 5 elements for array B:\n";
    for (int i = 0; i < size; i++) {
        cout << "B[" << i << "] = ";
        cin >> b[i];
    }

    // Swapping elements
    for (int i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    // Displaying arrays after swap
    cout << "\nAfter swapping:\n";

    cout << "Array A: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << "\nArray B: ";
    for (int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }

    cout << endl;
    return 0;
}
