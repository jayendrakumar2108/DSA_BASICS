#include <iostream>
using namespace std;
int main(){
	int age;
	cin >> age;
	if(age>=18){
		cout<<"you are eligible";
	}else if(age<=18){
		cout<<"not vote";
	}
	return 0;
}
