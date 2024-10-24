#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4+5)];//q1 q0 qfoo qbarñqbaz qfobar qfoobar (9*1+1) 
qfobaz char qfoobaz[(4+5)];//q1 qfoobaz qfoo qbarñqbaz qfobar qfoobar 
(8*(1*1+0)+2) qfobaz int qquux=0;char q2;//q3 q4 q5 qfoobar q6 q7 q8 qfred//
memset(q0,0,sizeof(q0));//memset(qfoobaz,0,sizeof(qfoobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q9 qfobaz q10 qdog q11 q12 qcat qbaz q11 qfish q13 (2*(4*1+0)+1) qfobaz while(
(q2=getchar())!='\n'){q0[qquux++]=q2;//q14 qgasp q15áq16 q8 q0}q0[qquux]='\0'
;//q0ñqbad qbug q15áq16 q17 qsilly qbuggy qfoo q18 q19//qmum q13 q20 qfoo q0
 q21 qfoobaz qdad q22 qdiskóqempty q23 q24(strcpy)strcpy(qfoobaz,q0);//q25 
q11 q26 qfull q0 q27 qfast q8 qfoobaz,qsmall qfoo qbig//qok qbug q28 qfoo 
qfoobaz printf("El DNI introducido es: %s\n",qfoobaz);return 0;}
