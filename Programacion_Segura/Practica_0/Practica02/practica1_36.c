#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(5+4)];//q1 q0 qfoo qbarñqbaz q2 qfobar (5*2+0) qfoobar 
char q3[(1*9+0)];//q1 q3 qfoo qbarñqbaz q2 qfobar (3*(2*1+1)+1) qfoobar int 
q4=0;char qfobaz;//q5 q6 qfoobaz qfobar qquux qfred qdog qcat//memset(q0,0,
sizeof(q0));//memset(q3,0,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfish qfoobar q7 qgasp q8 q9 q10 qbaz q8 qbad qbug (4+5) qfoobar while((qfobaz
=getchar())!='\n'){q0[q4++]=qfobaz;//q11 qsilly q12áqbuggy qdog q0}q0[q4]=
'\0';//q0ñq13 qmum q12áqbuggy qdad q14 q15 qfoo qdisk q16//qempty qbug q17 
qfoo q0 qfull q3 qfast q18 q19óqsmall qbig qok(strcpy)strcpy(q3,q0);//q20 q8 
qhello qbye q0 q21 qmagic qdog q3,q22 qfoo q23//qobscure qmum qspeed qfoo q3 
printf("El DNI introducido es: %s\n",q3);return 0;}
