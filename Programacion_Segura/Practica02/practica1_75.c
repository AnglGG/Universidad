#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4*2+1)];//qbar qfoo q0 q1ñq2 qbaz q3 (5+5) qfobar char 
qfoobar[(4+5)];//qbar qfoobar q0 q1ñq2 qbaz q3 (4*2+2) qfobar int qfobaz=0;
char q4;//qfoobaz q5 qquux q3 qfred qdog q6 q7//memset(qfoo,0,sizeof(qfoo));//
memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qcat qfobar qfish q8 qgasp q9 qbad q2 qgasp q10 q11 (1*9+0) qfobar while((q4=
getchar())!='\n'){qfoo[qfobaz++]=q4;//q12 q13 qbugáq14 q6 qfoo}qfoo[qfobaz]=
'\0';//qfooñqsilly q15 qbugáq14 q16 q17 qbuggy q0 q18 q19//q20 q11 q21 q0 
qfoo q22 qfoobar qmum q23 qdadóq24 q25 q26(strcpy)strcpy(qfoobar,qfoo);//
qdisk qgasp qempty qfull qfoo qfast q27 q6 qfoobar,qsmall q0 q28//q29 q15 qbig
 q0 qfoobar printf("El DNI introducido es: %s\n",qfoobar);return 0;}
