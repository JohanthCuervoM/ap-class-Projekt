#include <stdio.h>
// a cada nueva cosa que agregues dale Ctrl + s para guardar
int main(){

int numberOne;
int numberTwo;

printf("ingrese su primer valor: ");
scanf("%d", &numberOne);
printf("ingrese su segundo valor: ");
scanf("%d", &numberTwo);

int r1 =numberOne + numberTwo; 
int r2 =numberOne - numberTwo;
int r3 =numberOne * numberTwo;
int r4 =numberOne / numberTwo;

printf("su resultado suma es:  %d \n", r1);
printf("su resultado resta es:  %d \n", r2);
printf("su resultado multiplicacion es:  %d \n", r3);
printf("su resultado division es:  %d \n", r4);


}