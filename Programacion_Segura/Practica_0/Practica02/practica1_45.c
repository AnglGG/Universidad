#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(5+4)];//qfoo q0 qbar qbazñqfobar qfoobar q1 (1*10+0) q2 
char q3[(5*1+4)];//qfoo q3 qbar qbazñqfobar qfoobar q1 (5*2+0) q2 int q4=0;
char q5;//q6 q7 q8 q1 q9 q10 q11 qfobaz//memset(q0,0,sizeof(q0));//memset(q3,0
,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q12 q2 qfoobaz qquux qfred q13 q14 qfobar qfred q15 q16 (2*(2*2+0)+1) q2 while
((q5=getchar())!='\n'){q0[q4++]=q5;//q17 q18 qdogáqcat q11 q0}q0[q4]='\0';//
q0ñqfish q19 qdogáqcat q20 q21 q22 qbar q23 q24//q25 q16 q26 qbar q0 q27 q3 
q28 q29 q30óq31 q32 q33(strcpy)strcpy(q3,q0);//qgasp qfred qbad qbug q0 q34 
qsilly q11 q3,qbuggy qbar qmum//qdad q19 q35 qbar q3 printf(
"El DNI introducido es: %s\n",q3);return 0;}
