#include <iostream>
using namespace std;

void TOH(int N,char A,char B,char C){

    if(N==1){
        cout<<A<<"->"<<C<<endl;
    }else{
        TOH(N-1, A , C , B);
        TOH(1 , A , B , C);
        TOH(N-1, B, A, C);
    }
}

int main(){
    char A = 'A', B='B', C='C';
    TOH(4,A,B,C);
    return 0;
}