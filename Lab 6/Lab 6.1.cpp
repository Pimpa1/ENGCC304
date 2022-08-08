#include <stdio.h>

int main() {
	int a = 0 ;
	int b = 0 ;
	int c = 0 ;
	printf ( " enter lines =  " ) ;
	scanf ( "%d" , &c ) ;
	
	for ( a = 1 ; a <= c ; a++ ) {
		for ( b = 1 ; b <= a ; b++ ) {
			printf ( " * " ) ;
		}//end for
		printf ( " \n " ) ;
	} // end for
	
    return 0 ;
}//end fution
