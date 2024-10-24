#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(6*1+3)];//qfoo q0 q1 q2ñq3 q4 qbar (8*1+2) qbaz char q5[
(5+4)];//qfoo q5 q1 q2ñq3 q4 qbar (4*2+2) qbaz int q6=0;char q7;//q8 q9 
qfobar qbar q10 q11 qfoobar qfobaz//memset(q0,0,sizeof(q0));//memset(q5,0,
sizeof(q5));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q12 qbaz qfoobaz q13 q14 qquux q15 q3 q14 qfred q16 (6*1+3) qbaz while((q7=
getchar())!='\n'){q0[q6++]=q7;//q17 q18 q19áqdog qfoobar q0}q0[q6]='\0';//q0�
�qcat qfish q19áqdog qgasp qbad q20 q1 q21 qbug//qsilly q16 qbuggy q1 q0 qmum
 q5 q22 qdad q23óq24 qdisk qempty(strcpy)strcpy(q5,q0);//qfull q14 qfast q25 
q0 q26 q27 qfoobar q5,qsmall q1 q28//qbig qfish q29 q1 q5 printf(
"El DNI introducido es: %s\n",q5);return 0;}
