#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(5*1+4)];//q0 qfoo q1 q2ñq3 q4 qbar (5+5) q5 char q6[
(4*(1*2+0)+1)];//q0 q6 q1 q2ñq3 q4 qbar (5+5) q5 int qbaz=0;char q7;//qfobar 
q8 qfoobar qbar qfobaz qfoobaz qquux q9//memset(qfoo,0,sizeof(qfoo));//memset(
q6,0,sizeof(q6));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q10 q5 q11 qfred q12 qdog q13 q3 q12 q14 qcat (8*(1*1+0)+1) q5 while((q7=
getchar())!='\n'){qfoo[qbaz++]=q7;//q15 q16 q17áq18 qquux qfoo}qfoo[qbaz]=
'\0';//qfooñq19 qfish q17áq18 qgasp q20 qbad q1 q21 q22//qbug qcat q23 q1 
qfoo qsilly q6 qbuggy qmum q24óq25 q26 qdad(strcpy)strcpy(q6,qfoo);//qdisk 
q12 q27 q28 qfoo qempty qfull qquux q6,q29 q1 qfast//q30 qfish q31 q1 q6 
printf("El DNI introducido es: %s\n",q6);return 0;}
