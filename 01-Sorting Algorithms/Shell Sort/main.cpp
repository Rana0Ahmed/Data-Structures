#include <iostream>
using namespace std;

//Function to sort data using shell sort algorithm
void Shell_Sort(int arr[], int size){
    for(int gap=size/2; gap>0; gap/=2){
        for(int i=gap; i<size; i++){
            int temp = arr[i];
            int j = i;
            while(j>=gap && temp<arr[j-gap]){
                arr[j] = arr[j-gap];
                j -= gap;
            }
            arr[j] = temp;
        }
    }
}

//Function to print data
void Print_Data(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[7] = {1, 5, 6, 2, 7, 3, 9};
    Print_Data(arr, 7);
    Shell_Sort(arr, 7);
    cout<<"Array after sorting: "<<endl;
    Print_Data(arr, 7);

return 0;
}

