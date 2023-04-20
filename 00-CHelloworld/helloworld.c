#include <stdio.h>
int main() {

   FILE * archivo;
   archivo = fopen ("output.txt", "w+");

   printf("Hello, World!");
   fprintf(archivo, "Hello, World!");
   
   fclose(archivo);
   
   return 0;
}