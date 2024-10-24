#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4+5)];//qbar qfoo q0 q1ñq2 q3 q4 (5+5) qbaz char q5[
(6*(1*1+0)+3)];//qbar q5 q0 q1ñq2 q3 q4 (5+5) qbaz int qfobar=0;char qfoobar;
//qfobaz qfoobaz qquux q4 qfred qdog qcat qfish//memset(qfoo,0,sizeof(qfoo));/
/memset(q5,0,sizeof(q5));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qgasp qbaz qbad q6 q7 q8 qbug q2 q7 qsilly qbuggy (6*1+3) qbaz while((qfoobar=
getchar())!='\n'){qfoo[qfobar++]=qfoobar;//qmum qdad qdiskáq9 qcat qfoo}qfoo[
qfobar]='\0';//qfooñq10 q11 qdiskáq9 q12 q13 q14 q0 q15 qempty//qfull qbuggy
 qfast q0 qfoo q16 q5 qsmall qbig qokóq17 q18 q19(strcpy)strcpy(q5,qfoo);//
qhello q7 q20 qbye qfoo qmagic q21 qcat q5,q22 q0 q23//qobscure q11 qspeed q0 
q5 printf("El DNI introducido es: %s\n",q5);return 0;}
