#include <stdio.h>

int main(){

int a = 5;
int b = 6;
///////////////////////////// If
if (a > b) {
    printf("a es mayor que b\n");
}



///////////////////////////// Else If
if (a > b) {
    printf("a es mayor que b\n");
} else if (a < b) {
    printf("a es menor que b\n");
} else {
    printf("a es igual a b\n");
}


///////////////////////////// Else 
if (a > b) {
    printf("a es mayor que b\n");
} else {
    printf("a no es mayor que b\n");
}

int opcion = 0 ;

switch (opcion)
{
case 0:
    printf("Esta apagado\n");
    break;
case 1:
    printf("Esta encendido\n");
    break;    

default:
    break;
}



}