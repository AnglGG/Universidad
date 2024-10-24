#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(3*3+0)];//q1 q0 qfoo q2ñq3 q4 qbar (5+5) qbaz char q5[
(5+4)];//q1 q5 qfoo q2ñq3 q4 qbar (3*(3*1+0)+1) qbaz int q6=0;char qfobar;//
qfoobar qfobaz q7 qbar qfoobaz q8 qquux qfred//memset(q0,0,sizeof(q0));//
memset(q5,0,sizeof(q5));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qdog qbaz q9 q10 qcat qfish q11 q3 qcat q12 qgasp (5+4) qbaz while((qfobar=
getchar())!='\n'){q0[q6++]=qfobar;//qbad q13 q14áqbug qquux q0}q0[q6]='\0';//
q0ñq15 qsilly q14áqbug qbuggy q16 q17 qfoo qmum q18//qdad qgasp q19 qfoo q0 
qdisk q5 q20 qempty q21óqfull qfast qsmall(strcpy)strcpy(q5,q0);//q22 qcat 
qbig q23 q0 q24 q25 qquux q5,qok qfoo qhello//qbye qsilly q26 qfoo q5 printf(
"El DNI introducido es: %s\n",q5);return 0;}
