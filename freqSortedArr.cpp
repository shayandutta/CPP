#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {40,50,50,50};
	int n = 4;
	
	int count = 1;

	for(int i=1; i<n; i++){
		if(arr[i]==arr[i-1]){
			count++;
		}
		else{
			cout<<count<<" ";
			count = 1;
		}
	}
	cout<<count;
	return 0;
}