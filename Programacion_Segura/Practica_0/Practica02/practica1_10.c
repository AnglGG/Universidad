#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(3*(3*1+0)+0)];//q0 qfoo qbar qbazñqfobar qfoobar qfobaz
 (5+5) q1 char qfoobaz[(5+4)];//q0 qfoobaz qbar qbazñqfobar qfoobar qfobaz 
(9*1+1) q1 int qquux=0;char q2;//q3 q4 qfred qfobaz qdog q5 q6 q7//memset(qfoo
,0,sizeof(qfoo));//memset(qfoobaz,0,sizeof(qfoobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qcat q1 q8 q9 qfish qgasp qbad qfobar qfish q10 q11 (1*9+0) q1 while((q2=
getchar())!='\n'){qfoo[qquux++]=q2;//qbug qsilly q12áqbuggy q6 qfoo}qfoo[
qquux]='\0';//qfooñq13 qmum q12áqbuggy qdad qdisk qempty qbar q14 q15//q16 
q11 qfull qbar qfoo q17 qfoobaz q18 qfast qsmallóqbig qok qhello(strcpy)
strcpy(qfoobaz,qfoo);//qbye qfish q19 q20 qfoo q21 q22 q6 qfoobaz,qmagic qbar 
qobscure//q23 qmum q24 qbar qfoobaz printf("El DNI introducido es: %s\n",
qfoobaz);return 0;}
