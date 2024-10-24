#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(7*1+2)];//qfoo q0 q1 qbarñqbaz q2 q3 (10*1+0) q4 char q5[
(5+4)];//qfoo q5 q1 qbarñqbaz q2 q3 (7*(1*1+0)+3) q4 int qfobar=0;char q6;//
qfoobar qfobaz q7 q3 qfoobaz q8 q9 qquux//memset(q0,0,sizeof(q0));//memset(q5,
0,sizeof(q5));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q10 q4 qfred qdog qcat qfish qgasp qbaz qcat q11 q12 (9*1+0) q4 while((q6=
getchar())!='\n'){q0[qfobar++]=q6;//q13 q14 qbadáq15 q9 q0}q0[qfobar]='\0';//
q0ñqbug qsilly qbadáq15 qbuggy q16 qmum q1 qdad q17//qdisk q12 q18 q1 q0 q19
 q5 qempty qfull q20óq21 qfast q22(strcpy)strcpy(q5,q0);//qsmall qcat qbig 
q23 q0 q24 q25 q9 q5,qok q1 qhello//q26 qsilly q27 q1 q5 printf(
"El DNI introducido es: %s\n",q5);return 0;}
