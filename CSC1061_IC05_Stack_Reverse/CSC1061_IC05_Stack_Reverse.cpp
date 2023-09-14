// CSC1061_IC05_Stack_Reverse.cpp : Reverse the contents of an array using a stack
//

#include <iostream>
#include <iomanip>
#include <stack>

using namespace std;

void Reverse(int arr[], int size);
void PrintArray(int arr[], int size);

int main()
{
    //int arr[]{ 1,2,3,4,5,6 }; // Test array
    // Fixed array
    // int arr [10];
    // int size = 10;
    int size;

    // Dynamic array
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int(size);

    // Load the array
    for (int i = 0; i < size; i++) {
        arr[i] = i+1;
    }
    
    PrintArray(arr, size);
    Reverse(arr, size);
    PrintArray(arr, size);

}

void Reverse(int arr[], int size) {

    stack<int> st;

    // Create a stack of elements from the input array
    for (int i = 0; i < size; i++) {
        st.push(arr[i]);
    }

    // Go through the stack and add the elements to the output array
    // Note output and input array are the same
    for (int i = 0; i < size; i++) {
        arr[i] = st.top();
        st.pop();
    }
}
void PrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


