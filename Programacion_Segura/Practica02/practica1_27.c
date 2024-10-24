#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4+5)];//q0 qfoo q1 qbarñqbaz q2 q3 (6*1+4) q4 char 
qfobar[(2*(1*4+0)+1)];//q0 qfobar q1 qbarñqbaz q2 q3 (9*(1*1+0)+1) q4 int 
qfoobar=0;char qfobaz;//qfoobaz q5 qquux q3 qfred q6 q7 qdog//memset(qfoo,0,
sizeof(qfoo));//memset(qfobar,0,sizeof(qfobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qcat q4 qfish qgasp q8 q9 qbad qbaz q8 q10 q11 (9*1+0) q4 while((qfobaz=
getchar())!='\n'){qfoo[qfoobar++]=qfobaz;//q12 qbug qsillyáqbuggy q7 qfoo}
qfoo[qfoobar]='\0';//qfooñq13 q14 qsillyáqbuggy qmum q15 q16 q1 q17 q18//
qdad q11 qdisk q1 qfoo q19 qfobar q20 qempty qfullóqfast qsmall qbig(strcpy)
strcpy(qfobar,qfoo);//qok q8 qhello q21 qfoo q22 qbye q7 qfobar,q23 q1 qmagic/
/q24 q14 qobscure q1 qfobar printf("El DNI introducido es: %s\n",qfobar);
return 0;}
