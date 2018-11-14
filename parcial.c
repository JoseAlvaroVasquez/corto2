#include<stdio.h>
#include<stdlib.h>
 int main (){
	 int tamanio,*p_vector,R;
	 printf("Digite su el tamaño del vector:\n");
	 scanf("%d",&tamanio);
	 int vector [tamanio]; 
	 p_vector= vector;
	 for(int i=1;i<=tamanio;i++){
		 
		 printf("Digite el dato ");
		 printf("%d",i);
		 printf("\n");
		 scanf("%d",&R);
		 *p_vector=R;
		 printf("\n");
		 p_vector++;
		 }
	 
	 printf("\n");
	 

	 	 for(int i=1;i<=tamanio;i++){
			 p_vector--;
			 
			 }
			 
		for(int i=1;i<=tamanio;i++){
			 
			  printf("%d",*p_vector);
			  printf("\n");
			  printf("%p",p_vector);
			  printf("\n");
			 p_vector++;
			 
			 }	 
	 return 0;
	 
	 }
