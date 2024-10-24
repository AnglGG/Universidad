#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(6*1+3)];//q1 q0 qfoo q2ñqbar q3 qbaz (5+5) qfobar char q4
[(4+5)];//q1 q4 qfoo q2ñqbar q3 qbaz (5+5) qfobar int q5=0;char qfoobar;//
qfobaz qfoobaz qquux qbaz q6 qfred q7 qdog//memset(q0,0,sizeof(q0));//memset(
q4,0,sizeof(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q8 qfobar qcat q9 q10 qfish qgasp qbar q10 q11 q12 (3*(2*1+1)+0) qfobar while(
(qfoobar=getchar())!='\n'){q0[q5++]=qfoobar;//q13 qbad q14áq15 q7 q0}q0[q5]=
'\0';//q0ñqbug qsilly q14áq15 qbuggy qmum q16 qfoo q17 q18//q19 q12 qdad 
qfoo q0 qdisk q4 qempty q20 q21óq22 qfull qfast(strcpy)strcpy(q4,q0);//q23 
q10 q24 qsmall q0 q25 q26 q7 q4,q27 qfoo q28//q29 qsilly q30 qfoo q4 printf(
"El DNI introducido es: %s\n",q4);return 0;}
