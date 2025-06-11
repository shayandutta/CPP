#include<bits/stdc++.h>
using namespace std;

int main(){

	int arr[] = {2,4,3,5,10, 6,3,2,1};
	int n = 9;


	for(int i=0; i<n; i++){
		int flag=true;
		for(int j=i+1; j<n; j++){
			if(arr[i]<arr[j]){
				flag=false;
				break;
			}
			
		}
		if(flag==true){
			cout<<arr[i]<<" ";
		}
	}

	return 0;
}