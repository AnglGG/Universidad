#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(5+4)];//qfoo q0 q1 q2ñqbar q3 q4 (7*1+3) qbaz char q5[
(4+5)];//qfoo q5 q1 q2ñqbar q3 q4 (5+5) qbaz int q6=0;char qfobar;//qfoobar 
q7 qfobaz q4 qfoobaz qquux q8 qfred//memset(q0,0,sizeof(q0));//memset(q5,0,
sizeof(q5));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qdog qbaz qcat q9 q10 q11 qfish qbar q10 qgasp q12 (7*(1*1+0)+2) qbaz while((
qfobar=getchar())!='\n'){q0[q6++]=qfobar;//q13 qbad q14áqbug q8 q0}q0[q6]=
'\0';//q0ñqsilly qbuggy q14áqbug qmum qdad qdisk q1 q15 qempty//q16 q12 q17 
q1 q0 q18 q5 q19 qfull qfastóq20 qsmall qbig(strcpy)strcpy(q5,q0);//qok q10 
qhello qbye q0 q21 qmagic q8 q5,q22 q1 qobscure//qspeed qbuggy qindex q1 q5 
printf("El DNI introducido es: %s\n",q5);return 0;}
