#include <iostream>
using namespace std;

//Funcitons are set of codse which performs something for you
//functions are used to increase reability
//functions are used to modularise code
//functions are used to use same code multiple times
//void ->> which does not returns anything
//return
//parameterised non parameterised

void printname(string name){
	cout<<"Hello"<<name<<endl;
}
int main(){
	string name;
	cin >> name;
	printname(name);
	string name1;
	cin>>name1;
	printname(name1);
	return 0;
}
