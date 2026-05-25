// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void prinpairs(vector<int> arr){
    int size = arr.size();
     
     
     for(int i = 0 ; i < size ; i++){
              for(int j = 0 ; j < size ; j++){
                 
                cout<< "( "<< arr[i] <<" , "<< arr[j]<<" ) ";
         }
         cout<<endl;
     }
}
void printTriplets(vector<int> arr){
    int size = arr.size();
     
     
     for(int i = 0 ; i < size ; i++){
              for(int j = i+1 ; j < size ; j++){
                 
                for(int k = j+1 ; k< size ; k++){
                    cout<< "( "<< arr[i] <<" , "<< arr[j]<< " , "<<arr[k]<<" ) ";
                }
         }
         cout<<endl;
     }
}
int main() {
     vector<int> arr = {10,20,30,40};
    //  prinpairs(arr);
    printTriplets(arr);
     

    return 0;
}