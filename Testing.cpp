#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int item){
	int START=0,END=size,key=item;
	
	while(START<=END){
		int mid=(START+END)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			START=mid+1;
		}
		else{
			END=mid-1;
		}
	}
	return 0;
}

int main(){
	int n,arr[n],item;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter Number to be Searched: ";
	cin>>item;
	cout<<binarySearch(arr,n,item);
	
	return 0;
}
