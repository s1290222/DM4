#include <stdio.h>
#include <stdlib.h>

#define N 30
#define C 3

int main(){
  int i;
  int head=0;
  int tail=0;

  char name[N];
  printf("Who are you?\n> ");

  scanf("%s",name);
  printf("Hello, %s!/n",name);
  
  printf("Tossing a coin...\n");

  for( i=0; i<C; i++ ){
    printf("Round %d: ",i);
    if( rand()%2 == 0 ){
      printf("Heads\n");
      head++;
    }
    else{
      printf("Tails\n");
      tail++;
    }
  }
  printf("Heads: %d, Tails : %d\n",head,tail);
  if( head > tail ) printf("%s won!\n",name);
  else printf("%s lost\n",name);
  
}
