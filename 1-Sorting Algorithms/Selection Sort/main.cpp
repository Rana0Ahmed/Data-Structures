#include <iostream>
using namespace std;
// Function to take array elements
void Read_Data(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter data of index "<<i<<endl;
        cin>>arr[i];
    }
}

// Function to Print elements of an array
void Print_Data(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Function to sort array elements using Selection sort algorithm
void Selection_Sort(int arr[], int size){
    for(int i=0; i<size; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    Read_Data(arr, size);
    cout<<"Data before sorting: "<<endl;
    Print_Data(arr, size);
    Selection_Sort(arr, size);
    cout<<"Data after sorting: "<<endl;
    Print_Data(arr, size);
    
return 0;
}
