#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,0,0,0,0,3,4};
	int n = 8;

	int count = 0;

	for(int i=0; i<n; i++){
		if(arr[i] != 0){
			swap(arr[i], arr[count]);
			count++;
		}
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}