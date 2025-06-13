#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int k){
	bool flag = true;
	for(int i=0; i<=n-1; i++){
		if(arr[i]==k){
			return i;
			// flag = false;
		}
	}
	return -1;
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	int k;
	cin>>k;
	for(int i=0; i<=n-1; i++) cin>>arr[i];

	int result = linear_search(arr, n, k);
	cout<<result;

	return 0;
}