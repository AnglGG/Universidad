#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4+5)];//q0 qfoo q1 q2ñq3 q4 q5 (5+5) q6 char qbar[
(9*(1*1+0)+0)];//q0 qbar q1 q2ñq3 q4 q5 (2*(4*1+1)+0) q6 int qbaz=0;char 
qfobar;//q7 q8 qfoobar q5 qfobaz qfoobaz qquux qfred//memset(qfoo,0,sizeof(
qfoo));//memset(qbar,0,sizeof(qbar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qdog q6 q9 q10 q11 qcat q12 q3 q11 q13 qfish (4+5) q6 while((qfobar=getchar())
!='\n'){qfoo[qbaz++]=qfobar;//qgasp qbad q14áq15 qquux qfoo}qfoo[qbaz]='\0';/
/qfooñqbug qsilly q14áq15 qbuggy qmum q16 q1 q17 q18//qdad qfish q19 q1 qfoo
 qdisk qbar qempty q20 qfullóq21 qfast q22(strcpy)strcpy(qbar,qfoo);//qsmall 
q11 q23 q24 qfoo qbig q25 qquux qbar,qok q1 qhello//q26 qsilly qbye q1 qbar 
printf("El DNI introducido es: %s\n",qbar);return 0;}
