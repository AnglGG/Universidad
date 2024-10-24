#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(5+4)];//q1 q0 qfoo q2ñq3 q4 qbar (5+5) qbaz char q5[
(4*2+1)];//q1 q5 qfoo q2ñq3 q4 qbar (2*5+0) qbaz int qfobar=0;char q6;//
qfoobar q7 q8 qbar qfobaz qfoobaz q9 q10//memset(q0,0,sizeof(q0));//memset(q5,
0,sizeof(q5));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q11 qbaz qquux qfred q12 qdog qcat q3 q12 qfish q13 (4+5) qbaz while((q6=
getchar())!='\n'){q0[qfobar++]=q6;//q14 q15 q16áqgasp q9 q0}q0[qfobar]='\0';/
/q0ñqbad qbug q16áqgasp q17 qsilly qbuggy qfoo q18 q19//q20 q13 q21 qfoo q0 
q22 q5 qmum q23 q24óq25 qdad qdisk(strcpy)strcpy(q5,q0);//qempty q12 qfull 
q26 q0 q27 q28 q9 q5,qfast qfoo qsmall//qbig qbug qok qfoo q5 printf(
"El DNI introducido es: %s\n",q5);return 0;}
