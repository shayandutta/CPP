#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {30,10,8,2};
	int n = 4;

	int res=arr[1]-arr[0];
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			res=max(res, arr[j]-arr[i]);
		}
	}
	cout<<res;
}