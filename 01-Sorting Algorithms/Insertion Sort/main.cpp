#include <iostream>
using namespace std;
// Function to take data
void Read_Data(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter data of index "<<i<<endl;
        cin>>arr[i];
    }
}

// Function to print data
void Print_Data(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Function to sort data using insertion sort algorithm
void Insertion_Sort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    Insertion_Sort(arr, size);
    cout<<"Data after sorting: "<<endl;
    Print_Data(arr, size);

return 0;
}
