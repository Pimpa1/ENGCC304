#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Birthday {
	int number ;
	char name[100] ;
	int  years ;
	int  month ;
	int  day ;
	int  daylife ;
}typedef bi ;

int input_data ( bi[] ) ;
void output_data ( bi[], int ) ;
void maxmin_age  (  bi[], int ) ;

int main() {
	int  number ;
	bi personer[100] ;
	number = input_data ( personer ) ;
	output_data ( personer, number ) ;
	maxmin_age (  personer, number ) ;
		
	return 0 ;
}//end funtion main

int input_data ( bi personer[] ) {
	FILE *fp ;
	char header[100] ;
	int number ;
	fp = fopen("a.txt" , "r") ;
	if ( fp == NULL ) {
		printf ( " File Not Found " ) ;
		exit ( 0 ) ;
	}//end if
	
	fscanf ( fp, "%s\t%s\t\t%s\n", header, header, header ) ; 
	
	for ( int i = 0 ; i < 100 ; i++ ) {
		if ( fscanf(fp, "%d\t%s\t\t%d-%d-%d\n" , &personer[i].number, personer[i].name, &personer[i].years, &personer[i].month, &personer[i].day ) != EOF ) {
			number++ ;	
		}
		else{
			break ;
		}
	}//end for
	
	fclose (fp) ;
	return number ;
}//end funtion input_data

void output_data ( bi personer[], int number ) {
	int sum = 0 ;
	for ( int i = 0 ; i < number ; i++ ) {
		personer[i].daylife = ( 2018 - personer[i].years ) * 365 + ( 6 - personer[i].month ) * 30 + ( 21 - personer[i].day ) ;
		printf ( "%s %d Years, %d Months\n" , personer[i].name, personer[i].daylife / 365 , (personer[i].daylife %365)/30 ) ;
    }//end for
}//end funtion output_data

void maxmin_age  ( bi personer[], int number) {
	int max = -99999 ;
	char *maxname ;
	int *maxdaylife ;
	int min = 99999 ;
	char *minname ;
	int *mindaylife ;
	for ( int i = 0 ; i < number ; i++ ) {
		if ( personer[i].daylife > max ) {
			max = personer[i].daylife ;
			maxname = personer[i].name ;
		}
		if ( personer[i].daylife < min ) {
			min = personer[i].daylife ;
			minname = personer[i].name ;
		}
	}//end for
	printf ( "\n--------------------------------\n" ) ;
	printf ( "Max : %s[%d Years, %d Months]\n" , maxname, max / 365 , (max %365)/30 ) ;
	printf ( "Min : %s[%d Years, %d Months]" , minname, min / 365 , (min %365)/30 ) ;
}//end funtion maxmin_age


