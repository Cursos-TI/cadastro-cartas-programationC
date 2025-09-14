
#inclued <stdio.h>

int main (){
 
  //Desafio super trunfo 2

  // carta 01
   int populacao1;
   int area1;
   float pib1;
   float turisticos1;
   int densidade1 = (populacao1 / area1);
   int pibpc1 = (pib1 / populacao1);
 
   // carta 02
   int populacao2;
   int area2;
   float pib2;
   float turisticos2;
   int densidade2 =( populacao2 / area2);
   int pibpc2 = (pib2 / populacao2);

   //Cadastro da primeira carta
   printf("*** Cadastro da primeira carata\n***");

   printf(" Digite populacao: \n")
   scanf("%d", &populacao1);

   printf(" Digite area: \n ");
   scanf("%d", &area1);

   printf("Digite pib1");
   scanf("%f", &pib1);

   printf("Digite turisticos: \n");
   scanf("%f", &turisticos1);

   printf("densidade1: %d", densidade1);
   printf("pibpc1: %d", pibpc1);

}