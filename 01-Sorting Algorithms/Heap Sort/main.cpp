#include <iostream>
#include <algorithm>
using namespace std;

void Heapify(int arr[], int size, int i){
    int left = 2*i+1;
    int right = 2*i+2;
    int larger = i;
    if(left<size && arr[left]>arr[i]){
        larger = left;
    }
    if(right<size && arr[right]>arr[larger]){
        larger = right;
    }
    if(larger != i){
        swap(arr[i], arr[larger]);
        Heapify(arr, size, larger);
    }
}

void Build_Heap(int arr[], int size){
    for(int i=(size/2)-1; i>=0; i--){
        Heapify(arr, size, i);
    }
}

void Heap_Sort(int arr[], int size){
    Build_Heap(arr, size);
    for(int i=size-1; i>=0; i--){
        swap(arr[0], arr[i]);
        Heapify(arr, i, 0);
    }
}

int main()
{
    cout<<"Enter size of array"<<endl;
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter element of index "<<i<<endl;
        cin>>arr[i];
    }

    Heap_Sort(arr, size);
    cout<<"Array after sorting by Heap-Sort Algorithm: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
