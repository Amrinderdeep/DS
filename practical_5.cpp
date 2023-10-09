#include <iostream>
using namespace std;

void push(int arr[],int x,int top, int size){
   
        arr[top] = x;
    
}

int main(){
    int size;
    int top = -1;
    cout<<"Size ";
    cin>>size;

    int arr[size];
    string check = "y";
    
    while(check != "n"){
        string op;
        cout<<"Operation (push/pull) ";
        cin>>op;
    
        if(op == "push"){
            int x;
            cout<<"Enter Element ";
            cin>>x;
            if(top == size -1){
                cout<<"Overflow"<<endl;
                check = "n";
                break;
            }else{
                top++;
                push(arr,x,top,size);
            }
        }
        else if(op == "pop"){
            if(top >= 0) top--;
            else{ 
                cout<<"Underflow";
                break;
            }
        }
        cout<<"Do you want to continue (y/n) ";
        cin>>check;
    }

    for(int i =0; i<=top; i++){
        cout<<"Stack "<<arr[i]<<" ";
    }
    return 0;
}