#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4*(1*2+0)+1)];//q0 qfoo qbar qbazñq1 q2 q3 (5+5) qfobar
 char q4[(1*(2*4+1)+0)];//q0 q4 qbar qbazñq1 q2 q3 (4*(1*2+0)+2) qfobar int 
qfoobar=0;char q5;//qfobaz q6 q7 q3 qfoobaz q8 qquux qfred//memset(qfoo,0,
sizeof(qfoo));//memset(q4,0,sizeof(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q9 qfobar q10 q11 q12 q13 qdog q1 q12 q14 qcat (4+5) qfobar while((q5=getchar(
))!='\n'){qfoo[qfoobar++]=q5;//q15 q16 q17áqfish qquux qfoo}qfoo[qfoobar]=
'\0';//qfooñqgasp q18 q17áqfish q19 q20 qbad qbar qbug qsilly//qbuggy qcat 
q21 qbar qfoo q22 q4 q23 q24 q25óq26 qmum qdad(strcpy)strcpy(q4,qfoo);//qdisk
 q12 qempty q27 qfoo q28 qfull qquux q4,q29 qbar qfast//qsmall q18 q30 qbar q4
 printf("El DNI introducido es: %s\n",q4);return 0;}
