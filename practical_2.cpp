#include <iostream>
using namespace std;

//To delete an element from an array 

int deleteArray(int arr[], int capacity, int val){
    int pos;
    for (int i = 0; i<= capacity ; i++){
        if (arr[i] == val){
            pos = i;
            break;
        }
    }
    cout<<pos<<endl;
    
    for (int i = pos; i < capacity; i++){
        arr[i] = arr[i+1];
        
    }
    return capacity-1;
}

int main (){
    
    int a[7] = {0,1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<size<<endl;
    int value = 5;
    
    for (int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    size = deleteArray(a, size, value);
    
    for (int i=0; i<size; i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    return 0;
}