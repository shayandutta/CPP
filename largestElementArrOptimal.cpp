#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,3,1,4,5,2,3,9};
	int n = 8;

	int res = 0;
	for(int i=1; i<n; i++){
		if(arr[i]>arr[res]){
			res = i;
		}
	}
	cout<<res;
}