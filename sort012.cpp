#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {0,1,2,0,1,2};
	int n = 6;

	int first = 0;
	int second = 0;
	int third = 0;

	for(int i = 0; i<n; i++){
		if(arr[i]==0){
			first+=1;
		}
		else if(arr[i]==1){
			second+=1;
		}
		else{
			third+=1;
		}
	}

	for(int i=0; i<first; i++){
		arr[i]=0;
	}
	for(int i=first; i<first+second; i++){
		arr[i]=1;
	}
	for(int i=first+second; i<n; i++){
		arr[i]=2;
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	

}