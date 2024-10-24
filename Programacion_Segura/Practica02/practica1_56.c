#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(2*4+1)];//qbar qfoo q0 q1ñq2 qbaz q3 (5+5) qfobar char 
q4[(2*(3*1+1)+1)];//qbar q4 q0 q1ñq2 qbaz q3 (3*3+1) qfobar int qfoobar=0;
char qfobaz;//q5 q6 q7 q3 q8 qfoobaz q9 qquux//memset(qfoo,0,sizeof(qfoo));//
memset(q4,0,sizeof(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q10 qfobar q11 q12 qfred qdog q13 q2 qfred q14 qcat (4+5) qfobar while((qfobaz
=getchar())!='\n'){qfoo[qfoobar++]=qfobaz;//qfish qgasp qbadáqbug q9 qfoo}
qfoo[qfoobar]='\0';//qfooñqsilly q15 qbadáqbug q16 q17 q18 q0 q19 q20//q21 
qcat qbuggy q0 qfoo qmum q4 qdad qdisk qemptyóqfull q22 q23(strcpy)strcpy(q4,
qfoo);//qfast qfred qsmall q24 qfoo qbig q25 q9 q4,q26 q0 qok//q27 q15 qhello 
q0 q4 printf("El DNI introducido es: %s\n",q4);return 0;}
