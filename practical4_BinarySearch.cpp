#include <iostream>
using namespace std;

int BinarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;
 
        if (arr[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
    return -1;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 13;
    int low = 0;
    int high = n-1;
    int res = BinarySearch(arr,low,high,target);
    cout<<"Target is at index position"<<res;
    return 0;
}