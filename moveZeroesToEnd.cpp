#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,0,0,0,3,4};
	int n = 6;

	for(int i=0; i<n; i++){
		if(arr[i] == 0){
			for(int j=i+1; j<n; j++){
				if(arr[j] != 0){
					swap(arr[i], arr[j]); 
				}
			}
		}
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}