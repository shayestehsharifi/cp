#include <iostream>

using namespace std ;


 main() {
	int a , r , n , gcd ;
	cout << " please enter two positive integer valuses : " ;
	cin >> a >> r ;
	for ( n = 1 ; n <= a && n <= r ; n++ ){
		if ( a % n == 0 && r % n == 0)
		gcd = n ;
		
	}
	cout << " gcd of " << a << " & " << r << " is " << gcd ;
}