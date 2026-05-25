#include <iostream>
using namespace std;

void solve(int arr[] , int size){
      
    for(int i = 0 ; i<5 ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i< 5; i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    // int arr[5] ;
    // int arr[5] = {1,2,3,4,5};
    // int arr[5] = {1,2,3};
    // int arr[5] = {1};
    // int arr[5] ;
    // fill(arr,arr+5,9);

    cout<<"Enter Your Number : ";
    int arr[5];
    solve(arr,5);

    return 0;
}