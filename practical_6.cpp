#include <iostream>
#include <stack>
using namespace std;

int main(){

    string infix;
    cout<<"Enter Infix ";
    cin>>infix;
    infix = "(" + infix + ")";
    string postfix;

    stack<char> st;
    
    for(int i = 0; i<infix.length();i++){
        if(infix[i] != ')'){
            st.push(infix[i]);
        }
        else{
            while(infix[i] != '('){
                postfix += infix[i];
            } 
        }
    }

    for(int i = 0; i<postfix.length(); i++){
        cout<<postfix[i];
    }

    return 0;
}