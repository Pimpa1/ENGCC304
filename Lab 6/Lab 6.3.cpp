#include <stdio.h>

int main() {
    int a = 0 ;
    int b = 0 ;
    int c = 0 ;
    printf ( " Input your lines =  " ) ;
    scanf ( "%d" , &c ) ;
    
    if ( c % 2 == 0 ) {
    	for ( a = 1 ; a <= c ; a++ ) {
    		for ( b = c ; b >= a ; b-- ) {
    			printf ( " " ) ;
			}//end for
			for ( b = 1 ; b <= a ; b++ ) {
				printf ( "*" ) ;
			}//end for
			printf ("\n") ;
		}//end for
	} else {
		for ( a = 1 ; a <= c ; a++ ) {
			for ( b = 2 ; b <= a ; b++ ) {
				printf (" ") ;
			}//end for
			for ( b = c ; b >= a ; b-- ) {
				printf ("*") ;
			}//end for
			printf ("\n") ;
		}//end for
	}//end if
    
    return 0 ;
}//end fution
