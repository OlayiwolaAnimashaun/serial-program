 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
#include "startInfection.h"
extern int i;
extern int j;
extern int x;
extern int y;
void startInfection(){
  extern int Cells[20][20];
  //srand((unsigned int)time(NULL));
   for(i = 0; i < x; i++){
      for(j = 0; j < y; j++){
        float randomNumber = ((float)rand())/RAND_MAX;
	//	printf("RANDOM NUMBER TEST:%f\n", randomNumber);
	if(randomNumber < 0.2){
	  Cells[i][j] = 1;
	}else{
	  Cells[i][j] = 0;
	}
      }
     
}
}
