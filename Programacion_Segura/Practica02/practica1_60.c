#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(5+4)];//qbar qfoo q0 qbazñq1 q2 qfobar (5+5) q3 char 
qfoobar[(2*4+1)];//qbar qfoobar q0 qbazñq1 q2 qfobar (5+5) q3 int qfobaz=0;
char q4;//q5 q6 q7 qfobar q8 qfoobaz q9 q10//memset(qfoo,0,sizeof(qfoo));//
memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q11 q3 qquux q12 qfred q13 q14 q1 qfred q15 qdog (4+5) q3 while((q4=getchar())
!='\n'){qfoo[qfobaz++]=q4;//q16 qcat q17áqfish q9 qfoo}qfoo[qfobaz]='\0';//
qfooñq18 q19 q17áqfish qgasp qbad q20 q0 q21 q22//q23 qdog qbug q0 qfoo q24 
qfoobar q25 qsilly q26óq27 q28 q29(strcpy)strcpy(qfoobar,qfoo);//qbuggy qfred
 q30 qmum qfoo qdad q31 q9 qfoobar,qdisk q0 qempty//q32 q19 q33 q0 qfoobar 
printf("El DNI introducido es: %s\n",qfoobar);return 0;}
