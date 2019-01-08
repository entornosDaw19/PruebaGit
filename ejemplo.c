#include <stdio.h>
/* Este programa visualiza el primer argumento ....*/
int main(int argc, char *argv[])
{
printf("Hola, esto es un ejemplo ....");
if (argc>1)
{
printf("\nEl argumento es %s\n",argv[1]);
}

  /* modificamos y  se guarda !!!*/
return 0;
}


