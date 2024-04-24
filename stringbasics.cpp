#include <iostream>
using namespace std;
int main(){
	string s= "Bunny";
	int len =s.size();
	s[len-1]='z';
	cout<<s[len-1];
	cout<<s[0];
	return 0;
}
