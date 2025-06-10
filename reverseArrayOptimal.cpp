#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,3,4};
	int n = 4;

	int low = 0;
	int high = n-1;
	while(low<high){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;

		low++;
		high--;
	}

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}