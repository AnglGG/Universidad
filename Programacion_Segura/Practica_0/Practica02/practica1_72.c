#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(5+4)];//qfoo q0 q1 qbarñqbaz q2 qfobar (5+5) q3 char 
qfoobar[(4+5)];//qfoo qfoobar q1 qbarñqbaz q2 qfobar (5*2+0) q3 int q4=0;char
 q5;//qfobaz q6 qfoobaz qfobar qquux qfred qdog qcat//memset(q0,0,sizeof(q0));
//memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q7 q3 qfish qgasp qbad q8 q9 qbaz qbad qbug qsilly (2*4+1) q3 while((q5=
getchar())!='\n'){q0[q4++]=q5;//q10 q11 qbuggyáq12 qdog q0}q0[q4]='\0';//q0ñ
qmum q13 qbuggyáq12 q14 q15 q16 q1 q17 qdad//q18 qsilly q19 q1 q0 qdisk 
qfoobar qempty qfull q20óq21 q22 q23(strcpy)strcpy(qfoobar,q0);//q24 qbad 
qfast qsmall q0 qbig q25 qdog qfoobar,qok q1 qhello//qbye q13 q26 q1 qfoobar 
printf("El DNI introducido es: %s\n",qfoobar);return 0;}
