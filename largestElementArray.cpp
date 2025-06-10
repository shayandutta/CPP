#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
	for(int i=0; i<n; i++){
		bool flag = true;
		for(int j=0; j<n; j++){
			if(arr[j]>arr[i]){
				flag = false;
				break;
			}
			
		}
		if(flag==true) return i;
	}
	return -1;
}

int main(){
	int arr[] = {2,3,4,5,6,1,3};
	cout<<largest(arr, 7);
	return 0;
	
	
}