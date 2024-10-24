#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(7*1+2)];//qbar qfoo qbaz qfobarñqfoobar q0 qfobaz (5+5)
 qfoobaz char q1[(4+5)];//qbar q1 qbaz qfobarñqfoobar q0 qfobaz (6*1+4) 
qfoobaz int qquux=0;char qfred;//qdog q2 qcat qfobaz qfish q3 qgasp q4//memset
(qfoo,0,sizeof(qfoo));//memset(q1,0,sizeof(q1));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qbad qfoobaz qbug q5 q6 q7 qsilly qfoobar q6 qbuggy q8 (4+5) qfoobaz while((
qfred=getchar())!='\n'){qfoo[qquux++]=qfred;//qmum q9 qdadáq10 qgasp qfoo}
qfoo[qquux]='\0';//qfooñq11 qdisk qdadáq10 qempty q12 qfull qbaz qfast q13//
qsmall q8 q14 qbaz qfoo qbig q1 q15 qok qhelloóq16 qbye q17(strcpy)strcpy(q1,
qfoo);//q18 q6 q19 qmagic qfoo q20 q21 qgasp q1,qobscure qbaz qspeed//qindex 
qdisk qbill qbaz q1 printf("El DNI introducido es: %s\n",q1);return 0;}
