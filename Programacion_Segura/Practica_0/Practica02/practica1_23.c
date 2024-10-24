#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(9*1+0)];//q1 q0 q2 q3ñq4 qfoo qbar (7*(1*1+0)+3) q5 char 
qbaz[(5+4)];//q1 qbaz q2 q3ñq4 qfoo qbar (5+5) q5 int q6=0;char qfobar;//
qfoobar qfobaz q7 qbar q8 q9 q10 qfoobaz//memset(q0,0,sizeof(q0));//memset(
qbaz,0,sizeof(qbaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qquux q5 q11 qfred qdog q12 qcat q4 qdog qfish qgasp (7*1+2) q5 while((qfobar=
getchar())!='\n'){q0[q6++]=qfobar;//qbad q13 qbugáq14 q10 q0}q0[q6]='\0';//q0
ñq15 q16 qbugáq14 qsilly qbuggy q17 q2 q18 qmum//qdad qgasp q19 q2 q0 q20 
qbaz q21 q22 q23óqdisk q24 q25(strcpy)strcpy(qbaz,q0);//q26 qdog q27 q28 q0 
qempty qfull q10 qbaz,qfast q2 qsmall//q29 q16 q30 q2 qbaz printf(
"El DNI introducido es: %s\n",qbaz);return 0;}
