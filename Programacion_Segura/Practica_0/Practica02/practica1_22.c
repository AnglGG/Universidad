#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4+5)];//qfoo q0 q1 qbarñqbaz q2 qfobar (5+5) qfoobar char
 q3[(4*2+1)];//qfoo q3 q1 qbarñqbaz q2 qfobar (5*(2*1+0)+0) qfoobar int 
qfobaz=0;char q4;//qfoobaz qquux q5 qfobar q6 qfred qdog qcat//memset(q0,0,
sizeof(q0));//memset(q3,0,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfish qfoobar qgasp qbad qbug qsilly qbuggy qbaz qbug qmum q7 (2*(4*1+0)+1) 
qfoobar while((q4=getchar())!='\n'){q0[qfobaz++]=q4;//qdad q8 qdiskáqempty 
qdog q0}q0[qfobaz]='\0';//q0ñqfull qfast qdiskáqempty q9 q10 qsmall q1 q11 
qbig//q12 q7 q13 q1 q0 qok q3 qhello qbye qmagicóq14 q15 q16(strcpy)strcpy(q3
,q0);//q17 qbug qobscure qspeed q0 qindex q18 qdog q3,q19 q1 qbill//q20 qfast 
q21 q1 q3 printf("El DNI introducido es: %s\n",q3);return 0;}
