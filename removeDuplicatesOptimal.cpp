#include<bits/stdc++.h>
using namespace std;

int main(){
	 int arr[] = {1,2,3,3,3,4,5,5};
	 int n = 8;

	 int res=1;
	 for(int i=1; i<n; i++){
	 	if(arr[i] != arr[res-1]){
	 		arr[res] = arr[i];
	 		res++;
	 	}
	 }

	 for(int i=0; i<res; i++){
	 	cout<<arr[i]<<" ";
	 }
	 cout<<endl;
	 cout<<res;
}