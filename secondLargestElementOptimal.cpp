#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {20,60,24,55,119,77,34};
	int n = 7;

	int largest = 0;
	int secondLargest = -1; //secondLargest may not be present {10,10,10} -> return -1

	for(int i=0; i<n; i++){
		if(arr[i]>arr[largest]){
			secondLargest = largest;
			largest = i;
		}
		else if(arr[i] != arr[largest]) //arr[i]<arr[largest]
		{
			if(secondLargest == -1 || arr[i]>arr[secondLargest]){
				secondLargest = i;
			}
		}
	}
	cout<<largest<<endl;
	cout<<secondLargest;
}