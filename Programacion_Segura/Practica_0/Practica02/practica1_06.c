#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(8*(1*1+0)+1)];//q0 qfoo qbar q1ñqbaz q2 q3 (5+5) qfobar
 char qfoobar[(3*(1*3+0)+0)];//q0 qfoobar qbar q1ñqbaz q2 q3 (4*2+2) qfobar 
int q4=0;char qfobaz;//q5 q6 q7 q3 qfoobaz qquux q8 q9//memset(qfoo,0,sizeof(
qfoo));//memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfred qfobar qdog qcat q10 q11 qfish qbaz q10 q12 qgasp (9*1+0) qfobar while((
qfobaz=getchar())!='\n'){qfoo[q4++]=qfobaz;//q13 qbad qbugáq14 q8 qfoo}qfoo[
q4]='\0';//qfooñq15 q16 qbugáq14 qsilly q17 qbuggy qbar q18 qmum//q19 qgasp 
q20 qbar qfoo q21 qfoobar q22 qdad q23óqdisk q24 q25(strcpy)strcpy(qfoobar,
qfoo);//qempty q10 q26 qfull qfoo q27 q28 q8 qfoobar,q29 qbar qfast//q30 q16 
qsmall qbar qfoobar printf("El DNI introducido es: %s\n",qfoobar);return 0;}
