#include <iostream>
using namespace std;

// Function to print data
void Print_data(int arr[], int size){
    for (int i = 0; i<size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

// Function to swap elements
void Swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to get the pivot
int Position(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for(int j=low; j<high; j++){
        if(arr[j] < pivot){
            i++;
            Swap(&arr[i], &arr[j]);
        }
    }
    Swap(&arr[i+1], &arr[high]);
    return i+1;
}

// Recursion function
void Quick_Sort(int arr[], int low, int high){
    if(low < high){
        int po = Position(arr, low, high);
        Quick_Sort(arr, low, po-1);
        Quick_Sort(arr, po+1, high);
    }
}

int main()
{
    int arr[7] = {5, 2, 6, 7, 1, 3, 4};
    cout<<"Array before sorting: "<<endl;
    Print_data(arr, 7);
    Quick_Sort(arr, 0, 6);
    cout<<"Array after sorting using Quick_Sort algorithm: "<<endl;
    Print_data(arr, 7);

return 0;
}
