#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int start=0;
	int end=n;
	int key,flag=0;
	cin>>key;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
			cout<<mid;
			flag=1;
			break;
		}
		else if(arr[mid]>key){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	if(flag==0){
		cout<<"Item not Found";
	}
}
