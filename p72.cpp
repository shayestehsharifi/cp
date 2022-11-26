#include <iostream>
using namespace std ;

 main() {
	int m , n , j , f ;
	cout << " please enter two postive integer values : " ;
	cin >> m >> n ;
	j = m * 1/n ;
	f = m - ( n * j) ;
	
	cout << " m/n " << " :" << j << " and " << " m % n " << " : " << f ;
}