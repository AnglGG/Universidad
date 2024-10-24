#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(3*3+0)];//qfoo q0 q1 q2ñqbar q3 q4 (4*2+2) q5 char qbaz[
(4+5)];//qfoo qbaz q1 q2ñqbar q3 q4 (4*2+2) q5 int qfobar=0;char q6;//q7 q8 
q9 q4 qfoobar qfobaz q10 qfoobaz//memset(q0,0,sizeof(q0));//memset(qbaz,0,
sizeof(qbaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q11 q5 q12 qquux qfred qdog qcat qbar qfred qfish q13 (4+5) q5 while((q6=
getchar())!='\n'){q0[qfobar++]=q6;//q14 q15 q16áq17 q10 q0}q0[qfobar]='\0';//
q0ñq18 q19 q16áq17 qgasp qbad qbug q1 qsilly qbuggy//q20 q13 q21 q1 q0 qmum 
qbaz qdad q22 qdiskóq23 qempty q24(strcpy)strcpy(qbaz,q0);//qfull qfred qfast
 q25 q0 q26 q27 q10 qbaz,qsmall q1 q28//q29 q19 q30 q1 qbaz printf(
"El DNI introducido es: %s\n",qbaz);return 0;}
