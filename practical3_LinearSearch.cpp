#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,6,8,9,4,1,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    
    for(int i = 0; i<n;i++){
        if(arr[i] == target){
            cout<<"Target Found at index "<<i;
        }
    }
    
    return 0;
}