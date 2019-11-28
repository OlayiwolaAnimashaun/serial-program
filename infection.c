 
  #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
extern int i;
extern int j;
extern int x;
extern int y;
extern int Cells[20][20];
extern int numOfInfectedNeighbors;

int checkCellStates(){
  //srand((unsigned int)time(NULL));
    float randomNumber = ((float)rand())/RAND_MAX;
    //   printf("RANDOM NUM TEST: %f\n",randomNumber);
  if (Cells[i][j] == 3){
    return 3;
    }
  if(Cells[i][j] == 2){
    return 2;
  }
  if(Cells[i][j] ==1){
    
    if(randomNumber < 0.3){
      Cells[i][j] = 1;
    
    }
    if(randomNumber >0.3 && randomNumber < 0.9){
      Cells[i][j] = 2;
   
    }
    if(randomNumber > 0.9){
      Cells[i][j] = 3;
    }
  }
}



