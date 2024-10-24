#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4+5)];//q0 qfoo qbar qbazñqfobar qfoobar q1 (5+5) q2 
char q3[(5+4)];//q0 q3 qbar qbazñqfobar qfoobar q1 (3*3+1) q2 int qfobaz=0;
char qfoobaz;//qquux qfred q4 q1 q5 qdog qcat q6//memset(qfoo,0,sizeof(qfoo));
//memset(q3,0,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q7 q2 q8 q9 q10 q11 qfish qfobar q10 q12 q13 (4*(1*2+0)+1) q2 while((qfoobaz=
getchar())!='\n'){qfoo[qfobaz++]=qfoobaz;//q14 qgasp q15áqbad qcat qfoo}qfoo[
qfobaz]='\0';//qfooñqbug q16 q15áqbad qsilly q17 qbuggy qbar q18 q19//q20 
q13 qmum qbar qfoo qdad q3 qdisk qempty qfullóqfast q21 q22(strcpy)strcpy(q3,
qfoo);//qsmall q10 q23 q24 qfoo q25 qbig qcat q3,qok qbar q26//qhello q16 qbye
 qbar q3 printf("El DNI introducido es: %s\n",q3);return 0;}
