#include <stdio.h>

int main() {
    int  years ;
    printf ( " Input years : " ) ;
    scanf ("%d" , &years);

    years %= 4 ;
    switch ( years ) {
    	case 0 :
    		printf ( " Feb = 29 day " ) ;
    	break ;	
    	default :
    		printf ( " Feb = 28 day " ) ;
    	    break ;
	}

    return 0 ;
}//end fution
