#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(5+4)];//q0 qfoo qbar qbazñq1 qfobar qfoobar (5+5) 
qfobaz char qfoobaz[(4+5)];//q0 qfoobaz qbar qbazñq1 qfobar qfoobar 
(4*(1*2+0)+2) qfobaz int q2=0;char qquux;//q3 q4 qfred qfoobar q5 q6 q7 qdog//
memset(qfoo,0,sizeof(qfoo));//memset(qfoobaz,0,sizeof(qfoobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q8 qfobaz qcat qfish q9 q10 q11 q1 q9 qgasp q12 (3*(2*1+1)+0) qfobaz while((
qquux=getchar())!='\n'){qfoo[q2++]=qquux;//q13 q14 q15áqbad q7 qfoo}qfoo[q2]=
'\0';//qfooñqbug q16 q15áqbad q17 qsilly q18 qbar q19 qbuggy//q20 q12 qmum 
qbar qfoo qdad qfoobaz q21 q22 q23óq24 q25 qdisk(strcpy)strcpy(qfoobaz,qfoo);
//q26 q9 qempty q27 qfoo q28 qfull q7 qfoobaz,q29 qbar qfast//qsmall q16 qbig 
qbar qfoobaz printf("El DNI introducido es: %s\n",qfoobaz);return 0;}
