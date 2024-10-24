#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4+5)];//qfoo q0 q1 q2ñq3 q4 qbar (5*2+0) qbaz char qfobar
[(8*1+1)];//qfoo qfobar q1 q2ñq3 q4 qbar (5+5) qbaz int qfoobar=0;char qfobaz
;//q5 qfoobaz qquux qbar q6 q7 qfred q8//memset(q0,0,sizeof(q0));//memset(
qfobar,0,sizeof(qfobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qdog qbaz q9 qcat q10 qfish q11 q3 q10 qgasp q12 (7*1+2) qbaz while((qfobaz=
getchar())!='\n'){q0[qfoobar++]=qfobaz;//q13 qbad q14áqbug qfred q0}q0[
qfoobar]='\0';//q0ñq15 q16 q14áqbug q17 qsilly qbuggy q1 q18 qmum//q19 q12 
qdad q1 q0 q20 qfobar q21 q22 q23óq24 qdisk qempty(strcpy)strcpy(qfobar,q0);/
/q25 q10 q26 qfull q0 q27 q28 qfred qfobar,qfast q1 q29//qsmall q16 qbig q1 
qfobar printf("El DNI introducido es: %s\n",qfobar);return 0;}
