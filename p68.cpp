#include <iostream>
using namespace std;

 main() 
 {
 	
 	int N, j , F;
 	
 	cout << " please enter an integer number :" ;
 	cin >> N;
 	
 	F=1;
 	for( j = 2; j <= N; j++){
 		F*=j;
 		
	 }
	 
	 cout << N << " ! is " << F ;
	 
	 }
