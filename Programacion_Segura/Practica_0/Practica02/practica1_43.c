#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(5+4)];//q1 q0 q2 qfooñqbar qbaz q3 (8*1+2) qfobar char 
qfoobar[(9*(1*1+0)+0)];//q1 qfoobar q2 qfooñqbar qbaz q3 (3*(3*1+0)+1) qfobar
 int q4=0;char qfobaz;//qfoobaz qquux qfred q3 qdog q5 qcat qfish//memset(q0,0
,sizeof(q0));//memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q6 qfobar q7 qgasp q8 qbad q9 qbar q8 q10 qbug (1*(1*9+0)+0) qfobar while((
qfobaz=getchar())!='\n'){q0[q4++]=qfobaz;//q11 qsilly qbuggyáqmum qcat q0}q0[
q4]='\0';//q0ñq12 qdad qbuggyáqmum q13 qdisk q14 q2 q15 q16//q17 qbug qempty
 q2 q0 qfull qfoobar q18 q19 q20óq21 q22 q23(strcpy)strcpy(qfoobar,q0);//q24 
q8 q25 qfast q0 q26 qsmall qcat qfoobar,qbig q2 q27//q28 qdad q29 q2 qfoobar 
printf("El DNI introducido es: %s\n",qfoobar);return 0;}
