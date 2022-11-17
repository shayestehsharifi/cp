#include <iostream>
using namespace std;

 main()
  {
  	
  	int NUM1 , NUM2 , i, GCD;
  	
  	cout << " please enter two integer values :";
  	cin >> NUM1 >> NUM2 ;
  	
  	for ( i = 1; i<= NUM1 && i <= NUM2 ; i++)
  {
  if( NUM1 % i == 0 && NUM2 % i == 0)
  GCD = i ;
}

cout << " GCD of " << NUM1<< " and " << NUM2<< " is " << GCD;
}