#include <iostream>
using namespace std;

// Function to take array elements
void Read_Data(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"Enter element of index "<<i<<endl;
        cin>>arr[i];
    }
}

// Function to search for an element in the array
void Linear_Search(int arr[], int size){
    int key;
    int found = 0;
    cout<<"Enter number to search"<<endl;
    cin>>key;

    for(int i=0; i<size; i++){
        if(key == arr[i]){
            found = i;
            break;
        }
    }
    if(found != 0){
        cout<<"Found at index "<<found<<endl;
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
    Linear_Search(arr, size);

return 0;
}
