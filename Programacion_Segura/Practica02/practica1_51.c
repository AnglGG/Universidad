#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(7*(1*1+0)+2)];//q0 qfoo q1 qbarñq2 q3 q4 (4*2+2) qbaz 
char qfobar[(8*(1*1+0)+1)];//q0 qfobar q1 qbarñq2 q3 q4 (4*2+2) qbaz int q5=0
;char qfoobar;//q6 q7 q8 q4 q9 qfobaz q10 q11//memset(qfoo,0,sizeof(qfoo));//
memset(qfobar,0,sizeof(qfobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q12 qbaz q13 qfoobaz q14 qquux q15 q2 q14 qfred qdog (4+5) qbaz while((qfoobar
=getchar())!='\n'){qfoo[q5++]=qfoobar;//q16 qcat q17áqfish q10 qfoo}qfoo[q5]=
'\0';//qfooñqgasp qbad q17áqfish q18 qbug q19 q1 qsilly q20//qbuggy qdog q21
 q1 qfoo qmum qfobar qdad q22 qdiskóqempty qfull qfast(strcpy)strcpy(qfobar,
qfoo);//q23 q14 qsmall q24 qfoo qbig qok q10 qfobar,qhello q1 q25//q26 qbad 
q27 q1 qfobar printf("El DNI introducido es: %s\n",qfobar);return 0;}
