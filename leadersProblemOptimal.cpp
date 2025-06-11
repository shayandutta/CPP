#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {7,10,4,10,6,5,2};
	int n = 7;

	int crntLdr = arr[n-1];
	cout<<crntLdr<<" ";

	for(int i=n-2; i>0; i--){
		if(crntLdr<arr[i]){
			crntLdr = arr[i];
			cout<<crntLdr<<" ";
		}
	}
}