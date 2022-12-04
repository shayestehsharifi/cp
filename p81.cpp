#include <iostream>

using namespace std;

 main() {
int a [5] = {20, 32, 50 , 42, 60};
int b[5] = { 12,14,16,18,20};
int i, j, temp;
 


	for ( j=0; j<5;++j){
			temp=a[j];
			a[j] = b [j];
			b [j] =temp;
		}
for ( i=0 ; i<5 ; i++)
cout << " "<< a[i]<<"    "<< b[j];

}