#include <stdio.h>

int main(void) {
  int unicid,visitante;

  printf("Digite a quantidade de gols que a UNICID marcou: \n");
  scanf("%i", &unicid);

  printf("Digite a quantidade de gols que a universidade visitante marcou: \n");
  scanf("%i",&visitante);

  if(visitante > unicid){
    printf("Derrota! o placar foi de %i x %i",visitante,unicid);
  }else if(unicid > visitante){
    printf("VITORIA! o placar foi de %i x %i",unicid,visitante);
  }else { 
    printf("Empate! o placar foi de %i x %i",unicid,visitante);
  }
  return 0;
}