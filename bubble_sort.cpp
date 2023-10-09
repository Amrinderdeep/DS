#include <iostream>
using namespace std;

void bubble_sort(int arr[] , int n){
    bool swapped = false;
    for (int i =0 ; i < n-1 ; i++){
        swapped = false;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }
}

int main(){
    
    int arr[5] = {0,-1,7,8,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"............."<<endl;

    bubble_sort(arr,size);
    
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}