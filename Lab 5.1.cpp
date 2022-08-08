#include <stdio.h>

int main() {
    int  years ;
    printf ( " Input years : " ) ;
    scanf ("%d" , &years);

    years %= 4 ;
    if ( years%4 == 0 ) {
        printf ( " Feb = 29 day " ) ;
    } else {
        printf ( " Feb = 28 day " ) ;
    }

    return 0 ;
}//end fution
