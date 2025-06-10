#include<bits/stdc++.h>
using namespace std;

int main(){
	 int arr[] = {5,20,12,20,7};
	 int n = 3;

	 int largest=0;
	 for(int i=1; i<n; i++){
	 	if(arr[i]>arr[largest]) largest=i;
	 }
	 cout<<largest<<endl;

	 int secondLargest = -1; //-1 because there can be an array with no second largest
	 //{10,10,10} -> no second largest

	 for(int i=1; i<n; i++){
	 	if(arr[i] != arr[largest]){
	 		if(arr[i]>arr[secondLargest]) secondLargest = i;
	 	}
	 }

	 cout<<secondLargest;
}