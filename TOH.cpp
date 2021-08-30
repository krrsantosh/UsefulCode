// Tower of Honoi

#include<iostream>
using namespace std;

void towerOfHonoi(int n,char src,char dest,char helper){
	int static count=1;
	if(n==0){
		return;
	}
	towerOfHonoi(n-1,src,helper,dest);
	cout<<"Move from "<<src<<" to "<<dest<<" "<<(count++)<<endl;
	towerOfHonoi(n-1,helper,dest,src);
}

int main(){
	towerOfHonoi(6,'A','C','B');
	
	return 0;
}
