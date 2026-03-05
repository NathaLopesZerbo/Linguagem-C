#include <string.h>
#include <stdio.h>

int main()
{
   int horario;

   printf("Digite o horario: ");
   scanf("%d", &horario);

   if(horario <= 12)
   {
       printf("Bom dia!\n");
   }
   else if(horario <= 18)
   {
       printf("Boa tarde!\n");
   }
   else
   {
       printf("Boa noite!\n");
   }
    
    return 0;
}