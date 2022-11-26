#include <iostream>

using namespace std ;

 main() {
	 int n , m , s ;
	 cout << " please enter an integer value : " ;
	 cin >> n ;
	 s = 0 ;
	  for ( m = 2 ; m <= n/2 ; m++) {
	  	if ( n % m == 0) { 
	  	s = m + s ;
	  	
		  }
	  }
	  cout << s ;
}