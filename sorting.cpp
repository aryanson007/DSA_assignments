#include <iostream>
using namespace std;
// Bubble Sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// Selection Sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                loc = j;
            }
        }
        swap(arr[i], arr[loc]);
    }
}
// Insertion Sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
// Display Array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5];
    int n = 5;
    int choice;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n----- SORTING MENU -----\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            bubbleSort(arr, n);
            cout << "\nSorted using Bubble Sort: ";
            break;

        case 2:
            selectionSort(arr, n);
            cout << "\nSorted using Selection Sort: ";
            break;

        case 3:
            insertionSort(arr, n);
            cout << "\nSorted using Insertion Sort: ";
            break;

        default:
            cout << "\nInvalid choice!";
            return 0;
    }
    display(arr, n);

    return 0;
}