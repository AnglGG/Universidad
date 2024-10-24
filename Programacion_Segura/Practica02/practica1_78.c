#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(8*(1*1+0)+1)];//qfoo q0 q1 q2ñqbar q3 qbaz (5+5) qfobar 
char q4[(3*(3*1+0)+0)];//qfoo q4 q1 q2ñqbar q3 qbaz (8*1+2) qfobar int 
qfoobar=0;char qfobaz;//qfoobaz qquux qfred qbaz q5 q6 qdog qcat//memset(q0,0,
sizeof(q0));//memset(q4,0,sizeof(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfish qfobar q7 q8 q9 qgasp qbad qbar q9 qbug q10 (9*1+0) qfobar while((qfobaz
=getchar())!='\n'){q0[qfoobar++]=qfobaz;//qsilly qbuggy q11áq12 qdog q0}q0[
qfoobar]='\0';//q0ñq13 qmum q11áq12 q14 q15 qdad q1 q16 qdisk//q17 q10 
qempty q1 q0 q18 q4 q19 qfull qfastóq20 qsmall qbig(strcpy)strcpy(q4,q0);//
q21 q9 qok qhello q0 q22 qbye qdog q4,q23 q1 qmagic//q24 qmum q25 q1 q4 printf
("El DNI introducido es: %s\n",q4);return 0;}
