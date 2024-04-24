#include <iostream>
using namespace std;
int main(){
	int day;
	cin>>day;
	switch(day){
		case 1:
			cout<<"Monday";
			break;
		case 2 :
			cout<<"Tuesaday";
             break;	    
		case 3 :
		cout <<"Wednesday";
		break;
		case 4 :
		cout<<"Thrusay";
		break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
	    default:
	    	cout<<"Sunday";
	}
	cout<<"Stop"<<endl;;
	return 0;
}
