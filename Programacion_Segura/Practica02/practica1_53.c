#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4+5)];//qfoo q0 q1 qbarñqbaz qfobar qfoobar (5+5) q2 char
 q3[(4*2+1)];//qfoo q3 q1 qbarñqbaz qfobar qfoobar (5+5) q2 int q4=0;char 
qfobaz;//q5 q6 qfoobaz qfoobar q7 qquux q8 qfred//memset(q0,0,sizeof(q0));//
memset(q3,0,sizeof(q3));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qdog q2 qcat q9 qfish q10 q11 qbaz qfish qgasp q12 (4*2+1) q2 while((qfobaz=
getchar())!='\n'){q0[q4++]=qfobaz;//q13 q14 qbadáqbug q8 q0}q0[q4]='\0';//q0�
�q15 qsilly qbadáqbug qbuggy q16 qmum q1 qdad q17//q18 q12 qdisk q1 q0 qempty
 q3 q19 qfull q20óq21 q22 q23(strcpy)strcpy(q3,q0);//q24 qfish qfast qsmall 
q0 q25 q26 q8 q3,q27 q1 qbig//q28 qsilly q29 q1 q3 printf(
"El DNI introducido es: %s\n",q3);return 0;}
