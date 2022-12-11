#include <iostream>
using namespace std;
const int n=10;

 main() {
 	int a[n]= { 20,21,22,23,24,25,26,28,30};
 	int b,c, d, e;
 	cout<< " please enter an enteger value :";
 	cin>>b;
 	a[9]=b;for( c=0 ; c<n; c++){
 		for ( d=0; d<( n-c); d++){
 			if ( a[d]> a[d+1]){
 				e+ a[d];
 				a[d]= a[d+1];
 				a[d+1]=e;
			 }
		 }
	 }
	 cout << " resault of this array: ";
	 for ( c=0; c<n; c++){
	 	cout << " "<< a[c];
	 }
	 }

