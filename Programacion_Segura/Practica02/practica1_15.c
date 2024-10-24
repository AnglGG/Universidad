#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4*2+1)];//qbar qfoo q0 qbazñq1 q2 qfobar (4*(1*2+0)+2) 
q3 char q4[(7*(1*1+0)+2)];//qbar q4 q0 qbazñq1 q2 qfobar (5*(2*1+0)+0) q3 int
 qfoobar=0;char q5;//qfobaz qfoobaz q6 qfobar qquux q7 qfred q8//memset(qfoo,0
,sizeof(qfoo));//memset(q4,0,sizeof(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q9 q3 qdog qcat q10 q11 q12 q1 q10 q13 q14 (5+4) q3 while((q5=getchar())!='\n'
){qfoo[qfoobar++]=q5;//qfish qgasp q15áq16 qfred qfoo}qfoo[qfoobar]='\0';//
qfooñqbad q17 q15áq16 q18 q19 q20 q0 qbug qsilly//qbuggy q14 qmum q0 qfoo 
qdad q4 q21 q22 qdiskóq23 q24 q25(strcpy)strcpy(q4,qfoo);//q26 q10 qempty 
qfull qfoo q27 qfast qfred q4,q28 q0 q29//q30 q17 q31 q0 q4 printf(
"El DNI introducido es: %s\n",q4);return 0;}
