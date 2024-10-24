#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(8*(1*1+0)+1)];//q0 qfoo q1 q2ñqbar q3 qbaz 
(10*(1*1+0)+0) q4 char qfobar[(6*1+3)];//q0 qfobar q1 q2ñqbar q3 qbaz 
(5*(1*2+0)+0) q4 int qfoobar=0;char q5;//q6 q7 qfobaz qbaz qfoobaz qquux q8 q9
//memset(qfoo,0,sizeof(qfoo));//memset(qfobar,0,sizeof(qfobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfred q4 q10 qdog q11 q12 qcat qbar q11 q13 q14 (3*(3*1+0)+0) q4 while((q5=
getchar())!='\n'){qfoo[qfoobar++]=q5;//q15 qfish qgaspáqbad q8 qfoo}qfoo[
qfoobar]='\0';//qfooñq16 qbug qgaspáqbad qsilly qbuggy qmum q1 qdad qdisk//
q17 q14 q18 q1 qfoo qempty qfobar q19 qfull qfastóqsmall qbig qok(strcpy)
strcpy(qfobar,qfoo);//q20 q11 qhello q21 qfoo qbye q22 q8 qfobar,q23 q1 qmagic
//q24 qbug qobscure q1 qfobar printf("El DNI introducido es: %s\n",qfobar);
return 0;}
