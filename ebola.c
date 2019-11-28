#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "startInfection.h"



 int x = 20;
 int y = 20;
int generations = 50;
int g;
int i;
int j;
int results;
int infectedCount = 0;
int healthyCount = 0;
int removedCount = 0;
int recoveredCount = 0;
 int Cells [20][20];
 
void checkCellNeighbors();
int checkCellStates();


int main(){
  srand((unsigned int)time(NULL)); // creates the seed for the random number generator
  int newWorld [20][20];

  extern int numOfInfectedNeighbors;
 
  startInfection();

  for(g = 0; g < generations; g++){
    recoveredCount = 0;
    printf("GENERATION:%d\n ", g);
    for(i = 0; i < x; i++){
      for(j = 0; j < y; j++){
		printf("%d", Cells[i][j]);
		checkCellNeighbors();
		if(checkCellStates() == 3)
		  recoveredCount ++;
       
      }
    }
    printf("\n");
    Cells[20][20] = newWorld[20][20];
  }
}
