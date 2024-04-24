//pass by value

#include <iostream>
using namespace std;

void doSomething(string s){
	
	s[0]='b';
	cout<<s<<endl;
//	cout << num <<endl;
//	num+=5;
//	cout<<num<<endl;
//	num+=5;
//	cout<<num<<endl;
}
int main(){
//	int num = 10;
//	doSomething(num);
//	cout<<num<<endl;
	string s = "name";
	doSomething(s);
	cout<<s<<endl;
	
	return 0; 
}
