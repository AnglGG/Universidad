#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(7*1+2)];//qbar qfoo qbaz q0ñqfobar qfoobar q1 (5+5) q2 
char q3[(6*1+3)];//qbar q3 qbaz q0ñqfobar qfoobar q1 (4*2+2) q2 int q4=0;char
 q5;//q6 qfobaz qfoobaz q1 qquux q7 q8 q9//memset(qfoo,0,sizeof(qfoo));//
memset(q3,0,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfred q2 qdog qcat q10 q11 qfish qfobar q10 qgasp q12 (2*4+1) q2 while((q5=
getchar())!='\n'){qfoo[q4++]=q5;//q13 q14 q15áq16 q8 qfoo}qfoo[q4]='\0';//
qfooñq17 qbad q15áq16 q18 q19 q20 qbaz qbug qsilly//q21 q12 qbuggy qbaz qfoo
 q22 q3 q23 q24 qmumóqdad qdisk qempty(strcpy)strcpy(q3,qfoo);//qfull q10 q25
 qfast qfoo qsmall q26 q8 q3,qbig qbaz q27//q28 qbad qok qbaz q3 printf(
"El DNI introducido es: %s\n",q3);return 0;}
