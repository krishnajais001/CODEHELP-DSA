

#include <iostream>
#include <cstring>
using  namespace std;
int calLength(char arr[], int size) {
	int count = 0;
	while(arr[count]!='\0') {
		count++;
	}
	return count;
}
void replaceByX(char arr[],int size) {
	// " " -> x
	int len = strlen(arr);
	for(int i = 0; i < len ; i++) {
		if(arr[i]==' ') {
			arr[i] = 'X';
		}
	}
}
void lowerCaseToUpper(char arr[],int size ){
    int len = strlen(arr);
    for(int i = 0 ; i < len ; i++){
        if(arr[i]>='a' && arr[i]<='z'){
            arr[i] = arr[i] -'a' + 'A';
        }
    }
}
void UpperTolowerCase(char arr[],int size ){
    int len = strlen(arr);
    for(int i = 0 ; i < len ; i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            arr[i] = arr[i] -'A' + 'a';
        }
    }
}
void reverseCharArray(char arr[],int size){
    int i = 0 ;
    int j = strlen(arr)-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main()
{
	// char ch = 'A';
	// char ch2 = 'B';
	// cout<<ch;
	// cout<<ch2;

	// create a char array
	// char arr[5]={'A','B','C','A','B'};
	// cout<<arr;

	// char arr[10];
	// cin>>arr; // input thorugh cin
	// cout<<arr; // output thorugh cin

	// char arr[10];

	// // Input 10 characters
	// for(int i = 0; i < 5; i++) {
	//     cin >> arr[i];
	// }

	// // Print 10 characters
	// for(int i = 0; i < 5; i++) {
	//     cout << arr[i] << " ";
	// }

	// char ch = '\0';
	// int val = (int)ch;
	// cout<<ch;

	// char arr[50];
	// cin.getline(arr,50,'x');
	// cout<<arr;

// 	char arr[10];
// 	cin.getline(arr,50);
//     replaceByX(arr,10);
//     cout<<arr;
// 	cout<<"Lenght : "<<calLength(arr,10);
    // char arr[10];
    // cin>>arr;
    // cout<<strlen(arr);
    char arr[10];
    cin>>arr;
    // lowerCaseToUpper(arr,10);
    // UpperTolowerCase(arr,10);
    reverseCharArray(arr,10);
    cout<<arr;
	return 0;
}