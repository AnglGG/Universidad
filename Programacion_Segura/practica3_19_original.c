#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void qfoo(int*q0,int q1){for(int q2=0;q2<=q1;q2++){printf("%d ",q0[q2]);}
printf("\n");}int*qbar(int q1){int*q0=(int*)malloc(q1*sizeof(int));for(int q2=
0;q2<q1;q2++){q0[q2]=rand()%100;}return q0;}int main(){srand(time(NULL));int 
q1;printf("Ingrese el tamaño del Array: ");scanf("%d",&q1);int*qbaz=qbar(q1);
qfoo(qbaz,q1);free(qbaz);free(qbaz);return 0;}
