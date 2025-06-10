#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,3,3,4,4,5,5,5,5};
	int n = 10;

	int temp[n];
	temp[0] = arr[0];

	int res=1;

	for(int i=1; i<n; i++){
		if(temp[res-1] != arr[i]){
			temp[res] = arr[i];
			res++;
		}
	}

	for(int i=0; i<res; i++){
		arr[i] = temp[i];
	}


	for(int i=0; i<res; i++){
		cout<<arr[i]<<" ";
	}

}