#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(5+4)];//qfoo q0 q1 q2ñq3 qbar qbaz (5+5) qfobar char q4[
(9*1+0)];//qfoo q4 q1 q2ñq3 qbar qbaz (8*(1*1+0)+2) qfobar int q5=0;char q6;/
/qfoobar qfobaz qfoobaz qbaz q7 qquux q8 qfred//memset(q0,0,sizeof(q0));//
memset(q4,0,sizeof(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q9 qfobar qdog qcat qfish qgasp q10 q3 qfish qbad qbug (2*4+1) qfobar while((
q6=getchar())!='\n'){q0[q5++]=q6;//qsilly q11 q12áq13 q8 q0}q0[q5]='\0';//q0�
�qbuggy q14 q12áq13 q15 qmum qdad q1 qdisk q16//q17 qbug q18 q1 q0 q19 q4 
qempty qfull q20óqfast qsmall q21(strcpy)strcpy(q4,q0);//q22 qfish qbig q23 
q0 qok q24 q8 q4,qhello q1 q25//qbye q14 q26 q1 q4 printf(
"El DNI introducido es: %s\n",q4);return 0;}
