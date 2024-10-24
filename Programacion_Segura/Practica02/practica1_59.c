#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(5*1+4)];//q0 qfoo q1 qbarñq2 q3 q4 (5+5) q5 char q6[
(3*(1*3+0)+0)];//q0 q6 q1 qbarñq2 q3 q4 (1*10+0) q5 int qbaz=0;char qfobar;//
qfoobar qfobaz qfoobaz q4 qquux qfred qdog q7//memset(qfoo,0,sizeof(qfoo));//
memset(q6,0,sizeof(q6));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qcat q5 q8 qfish q9 qgasp q10 q2 q9 q11 qbad (1*9+0) q5 while((qfobar=getchar(
))!='\n'){qfoo[qbaz++]=qfobar;//qbug q12 q13áqsilly qdog qfoo}qfoo[qbaz]='\0'
;//qfooñqbuggy q14 q13áqsilly qmum qdad q15 q1 qdisk qempty//q16 qbad qfull 
q1 qfoo q17 q6 qfast q18 qsmallóq19 qbig qok(strcpy)strcpy(q6,qfoo);//q20 q9 
q21 qhello qfoo qbye qmagic qdog q6,q22 q1 qobscure//qspeed q14 qindex q1 q6 
printf("El DNI introducido es: %s\n",q6);return 0;}
