
#include <iostream>
using namespace std;

int printRowWiseTraversal(int arr[][2], int rowSize, int colSize) {
	int sum = 0 ;
	for( int i = 0 ; i < rowSize ; i++ ) {

		for( int j = 0 ; j < colSize ; j++ ) {
			sum = sum + arr[i][j];
		}
	}

	return sum;

}


int main()
{
	// Creation of 2D Array
	// int arr[3][2] = {
	//     {1,2},
	//     {3,4},
	//     {5,6}
	// };
	// Access of 2D Array
	// cout<<arr[0][0]<<endl;
	// cout<<arr[0][1]<<endl;
	// cout<<arr[1][0]<<endl;
	// cout<<arr[1][1]<<endl;
	// cout<<arr[2][0]<<endl;
	// cout<<arr[2][1]<<endl;

	// input in 2D Array

	// int arr[3][2];

	// for( int i = 0 ; i < 3 ; i++ ){
	//     for( int j = 0 ; j < 2 ; j++ ){
	//         cin>>arr[i][j];
	//     }
	// }

	// cout<<"input Done " <<endl;
	// // Prinitng 2D Arrays
	//  for( int i = 0 ; i < 3 ; i++ ){
	//     for( int j = 0 ; j < 2 ; j++ ){
	//         cout<<arr[i][j]<<",";
	//     }
	//     cout<<endl;
	// }
	int arr[3][2] = {
		{1,2},
		{3,4},
		{5,6}
	};
	int rowSum =	printRowWiseTraversal(arr,3,2);
	cout<<"Row Sum : "<<rowSum;
	return 0;
}