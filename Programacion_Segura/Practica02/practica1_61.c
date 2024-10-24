#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(3*3+0)];//qfoo q0 qbar qbazñq1 qfobar q2 (5*2+0) qfoobar 
char q3[(5+4)];//qfoo q3 qbar qbazñq1 qfobar q2 (2*(5*1+0)+0) qfoobar int 
qfobaz=0;char qfoobaz;//qquux q4 qfred q2 qdog qcat q5 qfish//memset(q0,0,
sizeof(q0));//memset(q3,0,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qgasp qfoobar q6 q7 qbad q8 qbug q1 qbad qsilly qbuggy (4+5) qfoobar while((
qfoobaz=getchar())!='\n'){q0[qfobaz++]=qfoobaz;//q9 qmum q10áq11 q5 q0}q0[
qfobaz]='\0';//q0ñq12 qdad q10áq11 qdisk qempty q13 qbar qfull q14//qfast 
qbuggy q15 qbar q0 q16 q3 qsmall q17 qbigóq18 qok q19(strcpy)strcpy(q3,q0);//
qhello qbad q20 q21 q0 q22 qbye q5 q3,q23 qbar qmagic//q24 qdad qobscure qbar 
q3 printf("El DNI introducido es: %s\n",q3);return 0;}
