#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {5,10,15,20};
	int n = 4;
	bool flag = true;
	for(int i=0; i<n; i++){
		if(arr[i]<arr[i-1]){
			flag = false;
			break;
		}
	}
	if(flag == true){
		cout<<"yes";
	}
	else cout<<"no";
}