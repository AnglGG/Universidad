#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4+5)];//q0 qfoo q1 q2ñq3 qbar qbaz (7*(1*1+0)+3) q4 
char q5[(9*(1*1+0)+0)];//q0 q5 q1 q2ñq3 qbar qbaz (9*1+1) q4 int q6=0;char q7
;//qfobar qfoobar qfobaz qbaz qfoobaz q8 qquux qfred//memset(qfoo,0,sizeof(
qfoo));//memset(q5,0,sizeof(q5));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q9 q4 qdog q10 qcat q11 q12 q3 qcat qfish qgasp (5+4) q4 while((q7=getchar())
!='\n'){qfoo[q6++]=q7;//q13 qbad qbugáqsilly qquux qfoo}qfoo[q6]='\0';//qfoo�
�qbuggy qmum qbugáqsilly qdad qdisk qempty q1 qfull qfast//qsmall qgasp qbig 
q1 qfoo qok q5 q14 qhello q15óqbye qmagic qobscure(strcpy)strcpy(q5,qfoo);//
qspeed qcat qindex q16 qfoo qbill q17 qquux q5,qjoe q1 qemacs//q18 qmum q19 q1
 q5 printf("El DNI introducido es: %s\n",q5);return 0;}
