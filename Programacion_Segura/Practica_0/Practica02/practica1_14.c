#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(5+4)];//q0 qfoo qbar q1ñqbaz q2 qfobar (9*(1*1+0)+1) q3
 char q4[(5+4)];//q0 q4 qbar q1ñqbaz q2 qfobar (5+5) q3 int qfoobar=0;char 
qfobaz;//q5 qfoobaz qquux qfobar q6 q7 q8 q9//memset(qfoo,0,sizeof(qfoo));//
memset(q4,0,sizeof(q4));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q10 q3 qfred qdog q11 q12 q13 qbaz q11 qcat q14 (5+4) q3 while((qfobaz=getchar
())!='\n'){qfoo[qfoobar++]=qfobaz;//qfish qgasp qbadáq15 q8 qfoo}qfoo[qfoobar
]='\0';//qfooñqbug qsilly qbadáq15 q16 q17 qbuggy qbar qmum q18//qdad q14 
q19 qbar qfoo qdisk q4 qempty q20 q21óqfull q22 q23(strcpy)strcpy(q4,qfoo);//
qfast q11 q24 q25 qfoo qsmall q26 q8 q4,q27 qbar qbig//qok qsilly qhello qbar 
q4 printf("El DNI introducido es: %s\n",q4);return 0;}
