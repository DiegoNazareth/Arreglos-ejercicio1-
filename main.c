#include<stdio.h>

int main(){
	int vector[10],i, suma=0, resta1=0,resta, multiplicacion=1, part,division;
	//float division;
	printf ("dame 10 numeros\n");
	
	for (i=0;i<=9;i++){
		scanf ("%d", &vector[i]);
		//suma
		suma=suma+vector[i];
	    multiplicacion=vector[i]*multiplicacion;
		
	}
	//resta
	for (i=1;i<=9;i++){
		resta1=resta1-vector[i];	
	}
	resta=vector[0];
	resta=resta+resta1;
	//division
	division=vector[0];
	for (i=1;i<=9;i++){
		division=division/vector[i];
	}	
	printf("la suma es %d\n", suma);
	printf("la resta es %d\n", resta);
	printf("la multiplicacion %d\n", multiplicacion);
	printf("la division es %d\n", division);
	return(0);
}
