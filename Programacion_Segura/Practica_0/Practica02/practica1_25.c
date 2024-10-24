#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(2*4+1)];//q0 qfoo q1 qbarñqbaz q2 q3 (5+5) q4 char 
qfobar[(2*(3*1+1)+1)];//q0 qfobar q1 qbarñqbaz q2 q3 (5+5) q4 int q5=0;char 
qfoobar;//q6 qfobaz q7 q3 q8 q9 q10 qfoobaz//memset(qfoo,0,sizeof(qfoo));//
memset(qfobar,0,sizeof(qfobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qquux q4 qfred qdog qcat q11 qfish qbaz qcat qgasp qbad (5+4) q4 while((
qfoobar=getchar())!='\n'){qfoo[q5++]=qfoobar;//q12 qbug qsillyáqbuggy q10 
qfoo}qfoo[q5]='\0';//qfooñq13 qmum qsillyáqbuggy q14 qdad q15 q1 q16 q17//
q18 qbad qdisk q1 qfoo q19 qfobar q20 q21 q22óq23 q24 q25(strcpy)strcpy(
qfobar,qfoo);//q26 qcat qempty q27 qfoo qfull qfast q10 qfobar,q28 q1 q29//q30
 qmum qsmall q1 qfobar printf("El DNI introducido es: %s\n",qfobar);return 0;}
