#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4+5)];//q1 q0 qfoo qbarñqbaz qfobar q2 (5+5) q3 char q4[
(5+4)];//q1 q4 qfoo qbarñqbaz qfobar q2 (3*3+1) q3 int q5=0;char q6;//q7 q8 
qfoobar q2 q9 qfobaz qfoobaz q10//memset(q0,0,sizeof(q0));//memset(q4,0,sizeof
(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q11 q3 q12 q13 q14 qquux q15 qbaz q14 qfred q16 (5+4) q3 while((q6=getchar())
!='\n'){q0[q5++]=q6;//qdog q17 q18áqcat qfoobaz q0}q0[q5]='\0';//q0ñq19 q20 
q18áqcat q21 q22 q23 qfoo qfish q24//q25 q16 q26 qfoo q0 q27 q4 q28 q29 qgasp
óq30 qbad q31(strcpy)strcpy(q4,q0);//q32 q14 qbug q33 q0 qsilly qbuggy 
qfoobaz q4,qmum qfoo qdad//qdisk q20 qempty qfoo q4 printf(
"El DNI introducido es: %s\n",q4);return 0;}
