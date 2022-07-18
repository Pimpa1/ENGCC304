#include <stdio.h>
#include <string.h>

int main(){
	char employee_id[] = "" ;
	int hour   = 0 ;
	int ammout = 0 ;
	
	while(1){
		printf ("Input the Employees ID (MAx. 10 chars) : ") ;
		scanf ("%s",employee_id) ;
		if ( strlen (employee_id ) <= 10 ) break ;
	}//end while
	
	printf ("Inpit the working hrs : ") ;
	scanf ("%d", &hour);
	printf (" Salare ammount/hr (Bath) : ");
	scanf ("%d", &ammout ) ;
	
	//Output salary
	printf ("----\n") ;
	printf ("Eecepted Output : \n") ;
	printf ("Employees ID = %s\n", employee_id) ;
	printf ("Amount/dat = %.2f BAth(s)", (float)(ammout * hour)) ;
	
	return 0 ;
}//end function
