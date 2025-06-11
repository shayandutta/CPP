#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n){
	int temp = arr[0];

	for(int i=0; i<n; i++){
		arr[i]=arr[i+1];
	}
	arr[n] = temp;

}


void leftRotate(int arr[], int n, int d){
	for(int i=0; i<d; i++){
		leftRotateByOne(arr, n);
	}
	
	for(int i=0;i<n; i++){
		cout<<arr[i]<<" ";
	}
}




int main(){

	int arr[] = {1,2,3,4,5};

	leftRotate(arr, 5, 3);
}