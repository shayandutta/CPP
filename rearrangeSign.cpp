#include<bits/stdc++.h>
using namespace std;

int main(){
	int nums[] = {3,1,-2,-5,2,-4};
	int n = 6;

	int pos[n/2];
	int k=0;
	int neg[n/2];
	int j=0;

	for(int i=0; i<n; i++){
		if(nums[i]>0){
			pos[k++] = nums[i];
		}
		else{
			neg[j++] = nums[i];
		}
	}

	int res[n];
	int idx = 0;
	for(int i=0; i<k; i++){
		res[idx++] = pos[i];
		res[idx++] = neg[i];
	}

	return res;
}