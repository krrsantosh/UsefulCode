//Check if an array is sorted or not

#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
	
	if(n==1){
		return true;
	}
	bool restArr = sorted(arr+1,n-1);
	return (arr[0]<arr[1] && restArr);
}

int main(){
	int arr[]={1,2,7,4,5};
	cout<<sorted(arr,5);
	
	return 0;
}
