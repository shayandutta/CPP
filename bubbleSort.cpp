#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
	for(int i=n-1; i>0; i--){
		int didswap = 0;
		for(int j=0; j<i; j++){
			if(arr[j]>arr[i]){
				swap(arr[i], arr[j]);
			}
			didswap = 1;
		}
		if(didswap == 0){
			break;
		}
	}
}


int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++) cin>>arr[i];
	bubble_sort(arr, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}