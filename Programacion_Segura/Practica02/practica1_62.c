#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4+5)];//q1 q0 qfoo qbarñqbaz q2 qfobar (5+5) qfoobar char
 qfobaz[(5*1+4)];//q1 qfobaz qfoo qbarñqbaz q2 qfobar (7*1+3) qfoobar int q3=
0;char q4;//q5 q6 qfoobaz qfobar q7 q8 q9 q10//memset(q0,0,sizeof(q0));//
memset(qfobaz,0,sizeof(qfobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q11 qfoobar qquux qfred q12 q13 qdog qbaz q12 q14 q15 (8*1+1) qfoobar while((
q4=getchar())!='\n'){q0[q3++]=q4;//q16 qcat q17áqfish q9 q0}q0[q3]='\0';//q0�
�q18 qgasp q17áqfish q19 qbad qbug qfoo qsilly qbuggy//q20 q15 qmum qfoo q0 
qdad qfobaz q21 qdisk qemptyóqfull qfast qsmall(strcpy)strcpy(qfobaz,q0);//
qbig q12 q22 q23 q0 q24 q25 q9 qfobaz,qok qfoo q26//q27 qgasp qhello qfoo 
qfobaz printf("El DNI introducido es: %s\n",qfobaz);return 0;}
