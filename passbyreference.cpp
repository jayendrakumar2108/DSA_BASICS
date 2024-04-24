#include <iostream>
using namespace std;
	
//	void doSomething(string &s){
//		s[0]='t';
//		cout << s << endl;
//	}
//	
//int main(){
//	string s = "raj";
//	doSomething(s);
//	cout<<s<<endl;
//	return 0;	
//}

void number(int &sum){
	cout << sum <<endl;
	sum+= 5;
	cout<<sum<<endl;
	sum=5;
}
int main(){
	int sum =10;
	number(sum);
	cout<<sum<<endl;
	return 0;
}
