#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5};
	int n = 5;

	int temp = arr[0];

	for(int i=0; i<n; i++){
		
		arr[i]=arr[i+1];
		
	}
	arr[n] = temp;


	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}