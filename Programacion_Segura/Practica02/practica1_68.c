#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4+5)];//q1 q0 qfoo q2ñq3 q4 qbar (10*1+0) qbaz char q5[
(4+5)];//q1 q5 qfoo q2ñq3 q4 qbar (5+5) qbaz int qfobar=0;char q6;//qfoobar 
q7 q8 qbar q9 q10 qfobaz q11//memset(q0,0,sizeof(q0));//memset(q5,0,sizeof(q5)
);printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfoobaz qbaz q12 qquux qfred qdog q13 q3 qfred qcat qfish (7*1+2) qbaz while((
q6=getchar())!='\n'){q0[qfobar++]=q6;//qgasp qbad qbugáq14 qfobaz q0}q0[
qfobar]='\0';//q0ñq15 qsilly qbugáq14 qbuggy q16 q17 qfoo q18 q19//q20 qfish
 qmum qfoo q0 q21 q5 qdad qdisk q22óqempty q23 q24(strcpy)strcpy(q5,q0);//
qfull qfred qfast q25 q0 qsmall qbig qfobaz q5,qok qfoo qhello//q26 qsilly q27
 qfoo q5 printf("El DNI introducido es: %s\n",q5);return 0;}
