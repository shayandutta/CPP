#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
	for(int i = 1; i<=n-1; i++){
		int j = i;
		int count = 0;
		while(j>0 && arr[j-1]>arr[j]){
			swap(arr[j-1], arr[j]);
			j--;
			count = count + 1;
		}
		if(count == 0) break; //best case time complexity => O(N)	
	}

}


int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++) cin>>arr[i];
	insertion_sort(arr, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}