#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(2*(4*1+0)+1)];//qbar qfoo q0 qbazñq1 qfobar q2 (6*1+4) 
qfoobar char q3[(3*3+0)];//qbar q3 q0 qbazñq1 qfobar q2 (7*(1*1+0)+3) qfoobar
 int qfobaz=0;char q4;//qfoobaz q5 q6 q2 qquux qfred q7 qdog//memset(qfoo,0,
sizeof(qfoo));//memset(q3,0,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qcat qfoobar qfish q8 q9 q10 q11 q1 q9 qgasp q12 (1*(2*4+1)+0) qfoobar while((
q4=getchar())!='\n'){qfoo[qfobaz++]=q4;//qbad q13 q14áq15 q7 qfoo}qfoo[qfobaz
]='\0';//qfooñqbug q16 q14áq15 q17 q18 qsilly q0 qbuggy q19//qmum q12 qdad 
q0 qfoo q20 q3 qdisk q21 qemptyóqfull q22 q23(strcpy)strcpy(q3,qfoo);//q24 q9
 qfast qsmall qfoo q25 q26 q7 q3,qbig q0 qok//q27 q16 qhello q0 q3 printf(
"El DNI introducido es: %s\n",q3);return 0;}
