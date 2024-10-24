#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(7*1+2)];//q1 q0 qfoo qbarñqbaz qfobar qfoobar (10*1+0) 
qfobaz char qfoobaz[(1*9+0)];//q1 qfoobaz qfoo qbarñqbaz qfobar qfoobar (5+5)
 qfobaz int q2=0;char qquux;//qfred qdog q3 qfoobar qcat q4 q5 qfish//memset(
q0,0,sizeof(q0));//memset(qfoobaz,0,sizeof(qfoobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q6 qfobaz q7 qgasp q8 q9 q10 qbaz q8 qbad qbug (4+5) qfobaz while((qquux=
getchar())!='\n'){q0[q2++]=qquux;//qsilly q11 qbuggyáq12 q5 q0}q0[q2]='\0';//
q0ñq13 q14 qbuggyáq12 qmum qdad q15 qfoo qdisk qempty//qfull qbug q16 qfoo 
q0 q17 qfoobaz q18 qfast qsmallóqbig qok qhello(strcpy)strcpy(qfoobaz,q0);//
q19 q8 qbye qmagic q0 q20 qobscure q5 qfoobaz,qspeed qfoo q21//qindex q14 
qbill qfoo qfoobaz printf("El DNI introducido es: %s\n",qfoobaz);return 0;}
