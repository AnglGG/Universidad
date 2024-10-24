#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(9*1+0)];//q1 q0 q2 qfooñq3 q4 q5 (10*(1*1+0)+0) q6 char 
qbar[(2*4+1)];//q1 qbar q2 qfooñq3 q4 q5 (9*(1*1+0)+1) q6 int q7=0;char qbaz;
//q8 qfobar q9 q5 q10 q11 qfoobar qfobaz//memset(q0,0,sizeof(q0));//memset(
qbar,0,sizeof(qbar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfoobaz q6 qquux q12 qfred q13 q14 q3 qfred qdog q15 (5+4) q6 while((qbaz=
getchar())!='\n'){q0[q7++]=qbaz;//q16 qcat qfisháqgasp qfoobar q0}q0[q7]='\0'
;//q0ñqbad q17 qfisháqgasp q18 qbug qsilly q2 qbuggy qmum//qdad q15 qdisk q2
 q0 qempty qbar q19 qfull qfastóq20 qsmall qbig(strcpy)strcpy(qbar,q0);//q21 
qfred q22 q23 q0 q24 q25 qfoobar qbar,q26 q2 q27//qok q17 q28 q2 qbar printf(
"El DNI introducido es: %s\n",qbar);return 0;}
