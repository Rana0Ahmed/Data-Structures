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

// Function to sort array elements using Bubble sort algorithm
void Bubble_Sort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
Bubble_Sort(arr, size);
cout<<"Data after sorting: "<<endl;
Print_Data(arr, size);
return 0;
}
