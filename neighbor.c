  #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
extern int i;
extern int j;
extern int x;
extern int y;
extern int Cells[20][20];

void checkCellNeighbors(){
int numOfInfectedNeighbors = 0;

//int leftSide = Cells[((20+i)-1)%20, y];
//printf("TEST LEFT%d\n: " ,leftSide);

//int rightSide = Cells[((20+i)+1)%20, y];

//int top = Cells[x, ((20+j)-1)%20];

//int bottom = Cells[x, ((20-j)-1)%20];

if(Cells[(((20+ i)-1) %20)][j]   == 1){
numOfInfectedNeighbors++;
}
if(Cells[(((20+ i)+1) %20)][j]   == 1){
numOfInfectedNeighbors++;
}
if(Cells[i][(((20+ j)-1) %20)]   == 1){
numOfInfectedNeighbors++;
}
if(Cells[i][(((20+ j)+1) %20)]   == 1){
numOfInfectedNeighbors++;
//printf("TEST INFECTED NEIGHBORS%d\n: ", numOfInfectedNeighbors);
}
}
