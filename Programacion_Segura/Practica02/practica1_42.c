#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(9*1+0)];//qfoo q0 q1 q2ñqbar q3 qbaz (5+5) qfobar char 
qfoobar[(7*1+2)];//qfoo qfoobar q1 q2ñqbar q3 qbaz (5+5) qfobar int q4=0;char
 q5;//qfobaz qfoobaz q6 qbaz qquux qfred qdog qcat//memset(q0,0,sizeof(q0));//
memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfish qfobar q7 qgasp q8 qbad qbug qbar q8 q9 q10 (2*4+1) qfobar while((q5=
getchar())!='\n'){q0[q4++]=q5;//q11 qsilly qbuggyáq12 qdog q0}q0[q4]='\0';//
q0ñqmum qdad qbuggyáq12 qdisk q13 qempty q1 qfull qfast//qsmall q10 q14 q1 
q0 qbig qfoobar q15 qok q16óqhello q17 qbye(strcpy)strcpy(qfoobar,q0);//
qmagic q8 qobscure qspeed q0 q18 qindex qdog qfoobar,qbill q1 qjoe//q19 qdad 
qemacs q1 qfoobar printf("El DNI introducido es: %s\n",qfoobar);return 0;}
