#include <iostream>
using namespace std;

void insertion_sort(int arr[] , int size){
    int key;
    for (int i=1; i<size; i++){
        key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
        
    }
}

int main(){
    int arr[] = {12,11,13,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for (int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertion_sort(arr,n);

    for (int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}