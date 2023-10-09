#include <iostream>
using namespace std;

// Adding element in a array at the first availabile position 

int addArray(int arr[],int n , int key , int x){
    if (key < n){
        arr[key] = x;
        return key+1;
    }
    else {
        return key;
    }
}

int main(){
    int a[20] = {0,1,2,3,4,5,6,7};
    int x = sizeof(a)/sizeof(a[0]);
    int available_pos = 8;
    int value = 8;
    
    for (int i=0; i<available_pos; i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    available_pos = addArray(a,x, available_pos, value);
    
    for (int i=0; i<available_pos; i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    return 0;

}