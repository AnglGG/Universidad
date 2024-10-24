#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(1*(8*1+1)+0)];//qbar qfoo qbaz q0ñq1 qfobar qfoobar 
(5+5) q2 char qfobaz[(4+5)];//qbar qfobaz qbaz q0ñq1 qfobar qfoobar (7*1+3) 
q2 int q3=0;char q4;//qfoobaz q5 qquux qfoobar qfred q6 q7 q8//memset(qfoo,0,
sizeof(qfoo));//memset(qfobaz,0,sizeof(qfobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qdog q2 qcat qfish qgasp q9 q10 q1 qgasp q11 qbad (2*4+1) q2 while((q4=getchar
())!='\n'){qfoo[q3++]=q4;//q12 qbug q13áqsilly q7 qfoo}qfoo[q3]='\0';//qfooñ
qbuggy qmum q13áqsilly qdad q14 qdisk qbaz q15 q16//qempty qbad q17 qbaz qfoo
 qfull qfobaz q18 qfast q19óq20 qsmall q21(strcpy)strcpy(qfobaz,qfoo);//q22 
qgasp q23 qbig qfoo qok qhello q7 qfobaz,q24 qbaz qbye//q25 qmum qmagic qbaz 
qfobaz printf("El DNI introducido es: %s\n",qfobaz);return 0;}
