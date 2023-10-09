#include <iostream>
using namespace std; 

// Adding element in a array at a specefic position

int addArray(int arr[], int capacity, int pos, int val , int last){
    for(int i = pos;i<=last;i++){
        arr[pos+1] = arr[pos];
    }
    arr[pos] = val;
    return last+1;
}


int main (){
    
    int a[20] = {0,1,2};
    int x = sizeof(a)/sizeof(a[0]);
    int specific_pos = 2;
    int last_pos = 2;
    int value = 8;
    
    for (int i=0; i<=last_pos; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    last_pos = addArray(a ,x, specific_pos, value, last_pos);
    
    for (int i=0; i<=last_pos; i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    return 0;
}