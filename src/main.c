#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define NUM_TASK 5
#define ZERO 0

int main() {
  int a[NUM_TASK];
  int n;
  short alguem_foi_printado = FALSE;
  
  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i = ZERO ; i<n; i++) {

  	alguem_foi_printado = FALSE;

    /* Imprime resultado da n-esima iteracao do scheduler */
  	for (int j = ZERO ; j< NUM_TASK ; j++){	/*Verifica Todas as Tarefas Possiveis */
  		if ((i+1)%a[j] == ZERO){					/*Imprime a Tarefa*/
  			printf("%d",j);
  			alguem_foi_printado = TRUE;			/*Informa que uma tarefa ocorreu*/
  		}
  	}

  	/*Printa termino de uma repeticao*/
  	if(alguem_foi_printado)
	  	printf ("\n");
	  else printf("-\n");
  }

  return 0;
}
