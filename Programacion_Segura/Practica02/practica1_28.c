#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4+5)];//q0 qfoo q1 qbarñq2 qbaz qfobar (5+5) qfoobar 
char qfobaz[(5+4)];//q0 qfobaz q1 qbarñq2 qbaz qfobar (1*(1*10+0)+0) qfoobar 
int qfoobaz=0;char q3;//qquux qfred qdog qfobar qcat q4 q5 q6//memset(qfoo,0,
sizeof(qfoo));//memset(qfobaz,0,sizeof(qfobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfish qfoobar qgasp q7 qbad qbug q8 q2 qbad qsilly qbuggy (2*(2*2+0)+1) 
qfoobar while((q3=getchar())!='\n'){qfoo[qfoobaz++]=q3;//qmum q9 qdadáqdisk 
q5 qfoo}qfoo[qfoobaz]='\0';//qfooñqempty qfull qdadáqdisk qfast q10 q11 q1 
qsmall q12//qbig qbuggy qok q1 qfoo qhello qfobaz qbye qmagic qobscureóqspeed
 qindex qbill(strcpy)strcpy(qfobaz,qfoo);//q13 qbad qjoe q14 qfoo q15 q16 q5 
qfobaz,q17 q1 qemacs//qvi qfull q18 q1 qfobaz printf(
"El DNI introducido es: %s\n",qfobaz);return 0;}
