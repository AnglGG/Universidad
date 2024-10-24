#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(2*4+1)];//q1 q0 qfoo q2ñq3 q4 q5 (3*(2*1+1)+1) qbar char 
qbaz[(5*(1*1+0)+4)];//q1 qbaz qfoo q2ñq3 q4 q5 (9*1+1) qbar int q6=0;char 
qfobar;//qfoobar qfobaz qfoobaz q5 q7 qquux q8 q9//memset(q0,0,sizeof(q0));//
memset(qbaz,0,sizeof(qbaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q10 qbar q11 q12 qfred qdog qcat q3 qfred qfish q13 (9*1+0) qbar while((qfobar
=getchar())!='\n'){q0[q6++]=qfobar;//q14 q15 qgaspáq16 q8 q0}q0[q6]='\0';//q0
ñq17 q18 qgaspáq16 q19 q20 qbad qfoo q21 qbug//q22 q13 qsilly qfoo q0 q23 
qbaz qbuggy q24 q25óqmum qdad q26(strcpy)strcpy(qbaz,q0);//qdisk qfred q27 
q28 q0 qempty qfull q8 qbaz,qfast qfoo qsmall//q29 q18 q30 qfoo qbaz printf(
"El DNI introducido es: %s\n",qbaz);return 0;}
