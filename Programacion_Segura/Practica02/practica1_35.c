#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(9*1+0)];//q1 q0 qfoo qbarñq2 qbaz qfobar (8*1+2) qfoobar 
char q3[(4+5)];//q1 q3 qfoo qbarñq2 qbaz qfobar (1*10+0) qfoobar int qfobaz=0
;char q4;//qfoobaz q5 qquux qfobar qfred q6 qdog qcat//memset(q0,0,sizeof(q0))
;//memset(q3,0,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qfish qfoobar q7 qgasp qbad q8 qbug q2 qbad q9 qsilly (6*1+3) qfoobar while((
q4=getchar())!='\n'){q0[qfobaz++]=q4;//q10 q11 qbuggyáqmum qdog q0}q0[qfobaz]
='\0';//q0ñq12 q13 qbuggyáqmum q14 q15 qdad qfoo q16 q17//qdisk qsilly 
qempty qfoo q0 qfull q3 q18 qfast q19óqsmall q20 q21(strcpy)strcpy(q3,q0);//
q22 qbad qbig q23 q0 q24 q25 qdog q3,q26 qfoo qok//qhello q13 qbye qfoo q3 
printf("El DNI introducido es: %s\n",q3);return 0;}
