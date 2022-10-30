#include <iostream>
using namespace std;

// Function to merge two sub arrays
void Merge(int arr[], int left, int mid, int right){
    //int i, j, k;
    int subarr1 = mid - left + 1; // First sub array1 = arr[l...m]
    int subarr2 = right - mid;     // First sub array2 = arr[m+1...r]
    int a[subarr1];   // temp array
    int b[subarr2];   // temp array

    for(int i=0; i<subarr1; i++){
        a[i] = arr[left+i];
    }
    for(int i=0; i<subarr2; i++){
        b[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = left;

    // Compare two sub arrays
    while(i<subarr1 && j<subarr2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while(i < subarr1){
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j < subarr2){
        arr[k] = b[j];
        k++;
        j++;
    }
}

// Function to sort data using merge sort
void Merge_Sort(int arr[], int left, int right){
    if(left < right){
        int mid = (left + right)/ 2;
        Merge_Sort(arr, left, mid);
        Merge_Sort(arr, mid+1, right);
        Merge(arr, left, mid, right);
    }
}

int main()
{
    int arr[] = {5, 9, 7, 2, 6};
    Merge_Sort(arr, 0, 4);
    cout<<"Data after sorting: "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
