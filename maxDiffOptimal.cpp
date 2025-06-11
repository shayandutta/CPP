#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {2,3,10,6,4,8,1};
	int n = 7;

	int res = arr[1] - arr[0];
	int minVal = arr[0];

	for(int i = 1; i<n; i++){
		res = max(res, arr[i]-minVal);
		minVal = min(minVal, arr[i]);
	}

	cout<<res;
}