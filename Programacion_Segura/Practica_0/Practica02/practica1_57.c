#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(6*1+3)];//q1 q0 qfoo q2ñq3 q4 qbar (5+5) q5 char qbaz[
(9*1+0)];//q1 qbaz qfoo q2ñq3 q4 qbar (7*(1*1+0)+3) q5 int qfobar=0;char 
qfoobar;//qfobaz qfoobaz qquux qbar qfred q6 qdog qcat//memset(q0,0,sizeof(q0)
);//memset(qbaz,0,sizeof(qbaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q7 q5 q8 qfish qgasp qbad q9 q3 qgasp qbug qsilly (6*(1*1+0)+3) q5 while((
qfoobar=getchar())!='\n'){q0[qfobar++]=qfoobar;//q10 q11 q12áq13 qdog q0}q0[
qfobar]='\0';//q0ñq14 qbuggy q12áq13 q15 qmum q16 qfoo q17 q18//qdad qsilly 
qdisk qfoo q0 qempty qbaz q19 q20 q21óq22 q23 qfull(strcpy)strcpy(qbaz,q0);//
qfast qgasp q24 q25 q0 q26 qsmall qdog qbaz,qbig qfoo qok//qhello qbuggy qbye 
qfoo qbaz printf("El DNI introducido es: %s\n",qbaz);return 0;}
