#include <iostream>
using namespace std;
void doSomething(int &num){	
}

int main(){

	int arr[5];
	for(int i =0; i<=4; i=i+1){
		cin>>arr[i];
	}
	
	for(int i =0; i<=4; i+=1){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	 
}
