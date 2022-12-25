#include <iostream>
using namespace std;

int gcd( int a , int b){
	int c=0;
	for( int d=1;  d<=a && d<=b; d++){
		if ( a%d == 0 &&  b%d ==  0){
			c=d;
			
		}
	}
	return c;
	
}
int main(){
	int f, g;
	cout<< " please enter tow values"<< '\n';
	cout << " first value:";
	cin >> f;
	cout <<"second value:";
	cin >> g;
	cout << " GCD than" <<f<< "&&"<<g<<" is" <<gcd( f,g);
}
