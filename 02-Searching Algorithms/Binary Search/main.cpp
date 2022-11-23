#include <iostream>
using namespace std;

// Function to take array elements
void Read_Data(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter element of index "<<i<<endl;
        cin>>arr[i];
    }
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

// Function to search using Binary_Search
void Binary_Search(int arr[], int size){
    Selection_Sort(arr, size);
    int key;
    int found = -1;
    cout<<"Enter number to search ";
    cin>>key;
    int start = 0;
    int end = size - 1;
    int middle = (start + end) / 2;

    while(start <= end){
        if(key == arr[middle]){
            found = middle;
            break;
        }
        else if(key >= arr[middle]){
            start = middle + 1;
        }
        else{
            end = middle - 1;
        }
        middle = (start + end) / 2;
    }

    if(found != -1){
        cout<<"Found at index "<<found;
    }
    else{
        cout<<"Not found";
    }
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    Read_Data(arr, size);
    Binary_Search(arr, size);

return 0;
}
