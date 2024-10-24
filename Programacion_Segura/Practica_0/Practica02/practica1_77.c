#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(5+4)];//q1 q0 qfoo q2ñq3 q4 qbar (9*1+1) qbaz char qfobar
[(4+5)];//q1 qfobar qfoo q2ñq3 q4 qbar (5*(2*1+0)+0) qbaz int qfoobar=0;char 
qfobaz;//q5 qfoobaz qquux qbar q6 q7 q8 q9//memset(q0,0,sizeof(q0));//memset(
qfobar,0,sizeof(qfobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q10 qbaz q11 qfred q12 q13 qdog q3 q12 qcat qfish (1*(6*1+3)+0) qbaz while((
qfobaz=getchar())!='\n'){q0[qfoobar++]=qfobaz;//q14 qgasp q15áqbad q8 q0}q0[
qfoobar]='\0';//q0ñq16 qbug q15áqbad q17 q18 q19 qfoo q20 qsilly//qbuggy 
qfish qmum qfoo q0 qdad qfobar q21 q22 qdiskóq23 qempty q24(strcpy)strcpy(
qfobar,q0);//q25 q12 qfull qfast q0 q26 qsmall q8 qfobar,q27 qfoo qbig//q28 
qbug q29 qfoo qfobar printf("El DNI introducido es: %s\n",qfobar);return 0;}
