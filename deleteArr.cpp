#include<bits/stdc++.h>
using namespace std;

int delete(int arr[], int n, int x){
	for(int i=0; i<n; i++){
		if(arr[i]==x) break;
	}

	if(i==n) return n;

	for(int j=i; j<n-1; j++){
		arr[j] = arr[j+1];
	}
	return n-1;
}