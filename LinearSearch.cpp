#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key,flag=0;
	cin>>key;
	for(int j=0;j<n;j++){
		if(arr[j]==key){
			cout<<j;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"Item not found";
	}
}
