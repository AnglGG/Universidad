#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(5+4)];//qbar qfoo q0 qbazñq1 q2 q3 (5+5) qfobar char q4
[(2*(4*1+0)+1)];//qbar q4 q0 qbazñq1 q2 q3 (5+5) qfobar int q5=0;char qfoobar
;//qfobaz q6 qfoobaz q3 qquux qfred q7 q8//memset(qfoo,0,sizeof(qfoo));//
memset(q4,0,sizeof(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qdog qfobar qcat qfish q9 q10 qgasp q1 q9 qbad qbug (9*(1*1+0)+0) qfobar while
((qfoobar=getchar())!='\n'){qfoo[q5++]=qfoobar;//q11 q12 qsillyáqbuggy q7 
qfoo}qfoo[q5]='\0';//qfooñqmum qdad qsillyáqbuggy q13 qdisk q14 q0 qempty 
qfull//qfast qbug qsmall q0 qfoo q15 q4 qbig q16 qokóq17 qhello q18(strcpy)
strcpy(q4,qfoo);//qbye q9 q19 qmagic qfoo qobscure q20 q7 q4,q21 q0 q22//
qspeed qdad q23 q0 q4 printf("El DNI introducido es: %s\n",q4);return 0;}
