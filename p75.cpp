#include <iostream>
using namespace std ;


 main() {
	int a , r , flag , j , s ;
	cout << " please enter an integer value greater than 2 :" ;
	cin >> a ;
	s= 0 ;
	flag = 1 ;
	for ( r = 2 ; r<=a; r ++) {
		for ( j = 2 ;  j <= r/2 ; j ++ ) { 
		if ( r % j == 0) {
			flag = 0 ;
			 j = r;
			 break ;
			 
		}
		}
		if ( j!= r) { 
		flag = 1 ; 
	s = r + s;
	
		}
	}
	s = s + 2 ;
	cout << s ;
	}