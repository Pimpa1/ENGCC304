#include<stdio.h>
#include<string.h>

struct Employee{
    char name[100] ;
    float salary ;
    int duration ;
}typedef Employee ;

void Input_employee (Employee a[] , int c) ;
void show_output (Employee a[], int c) ;

int main(){
    char choice = 'y' ; 
    int c =0;
    Employee a[100] ;
    while(choice == 'y') {
        printf ("Do you want to Enter Employee Information? (y/n) : ");
        scanf (" %c", &choice);
        switch(choice) {
            case 'y': { Input_employee (a,c) ; c++ ; break;
			}
			default : break;
        }
    }
    show_output (a, c) ;
}//end main

void Input_employee (Employee a[] , int c) {
	printf ( "Employee name: " ) ;
	getchar() ;
	gets (a[c].name) ;
	printf ( "Salary (Bath/Month): " ) ;
	scanf ("%f",&a[c].salary) ;
	printf ( "Duration (year): " ) ;
	scanf ("%d",&a[c].duration) ;
}//end Input_employee

void show_output (Employee a[], int c) {
	int i = 0 , j = 0 ;
	float sum = 0 ;
	int highpo ;
	float highsalary = -1 ;
	while ( i<c ) {
		sum = sum + a[i].salary ;
		i++  ;
	}//end while
	printf ( "Average of Salary: %.2f Bath\n ", sum/c ) ; 
	printf ( "Payment of every month: %.2f Bath\n ", sum ) ; 
	printf ( "**Most Salary in this business**\n" ) ; 
	while ( j<c ) {
		switch (a[j].salary>highsalary) {
			case 1 : highsalary = a[j].salary ; highpo = j ;
			break;
		}
		j++ ;
	}//end while
	printf ( " Name : %s (%d years)\n" , a[highpo].name, a[highpo].duration ) ; 
	printf ( " Salary : %.2f (Bath)\n" , a[highpo].salary ) ; 
}//end show_output



