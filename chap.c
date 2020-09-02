#include <stdio.h>

int main()
{
  int nbr = 0;
  printf("Inscrivez votre âge :");
  scanf("%d", &nbr);
  if(nbr >= 18)
  { 
   printf("Ok, vous avez %d ans ! Vous êtes majeur et pouvez donc accéder au contenu !\n", nbr);
  }
  else
  {
   printf("Désolé vous avez %d ans, vous êtes mineur ! Vous ne pouvez pas accéder au contenu !\n", nbr);
  }
}
