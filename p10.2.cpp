#include <iostream>

using namespace std;


 	int power( int s, int h){
 		int p=1;
 		for( int a=1; a<=h; a++){
 			p=p*s;
 			
		 }
		 return p;
		 
	 }
	 int main(){
	 	int b , c;
	 	cout<< "enter 1 value :";
	 	cin>>b;
	 	cout<<" enter 2 value:";
	 	cin>>c;
	 	cout <<" resault =" <<  power (b,c);
	 	
	 }
	
