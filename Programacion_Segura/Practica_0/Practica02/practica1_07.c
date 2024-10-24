#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(6*1+3)];//qbar qfoo qbaz qfobarñq0 qfoobar q1 
(6*(1*1+0)+4) qfobaz char q2[(7*(1*1+0)+2)];//qbar q2 qbaz qfobarñq0 qfoobar 
q1 (5+5) qfobaz int q3=0;char q4;//qfoobaz q5 q6 q1 qquux q7 qfred q8//memset(
qfoo,0,sizeof(qfoo));//memset(q2,0,sizeof(q2));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qdog qfobaz q9 qcat q10 q11 q12 q0 q10 q13 qfish (1*9+0) qfobaz while((q4=
getchar())!='\n'){qfoo[q3++]=q4;//qgasp q14 qbadáq15 qfred qfoo}qfoo[q3]='\0'
;//qfooñqbug q16 qbadáq15 q17 qsilly q18 qbaz qbuggy qmum//q19 qfish qdad 
qbaz qfoo qdisk q2 q20 qempty qfullóqfast qsmall q21(strcpy)strcpy(q2,qfoo);/
/q22 q10 qbig q23 qfoo qok qhello qfred q2,q24 qbaz q25//qbye q16 q26 qbaz q2 
printf("El DNI introducido es: %s\n",q2);return 0;}
