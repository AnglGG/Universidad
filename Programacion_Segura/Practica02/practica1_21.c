#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4+5)];//q1 q0 q2 qfooñqbar q3 qbaz (5+5) qfobar char 
qfoobar[(4+5)];//q1 qfoobar q2 qfooñqbar q3 qbaz (5+5) qfobar int q4=0;char 
q5;//qfobaz qfoobaz qquux qbaz qfred q6 qdog q7//memset(q0,0,sizeof(q0));//
memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q8 qfobar q9 qcat qfish qgasp qbad qbar qfish q10 q11 (9*(1*1+0)+0) qfobar 
while((q5=getchar())!='\n'){q0[q4++]=q5;//q12 q13 q14áq15 qdog q0}q0[q4]='\0'
;//q0ñqbug q16 q14áq15 qsilly q17 q18 q2 q19 q20//q21 q11 qbuggy q2 q0 qmum 
qfoobar q22 q23 q24óq25 qdad q26(strcpy)strcpy(qfoobar,q0);//q27 qfish qdisk 
qempty q0 qfull qfast qdog qfoobar,q28 q2 qsmall//qbig q16 qok q2 qfoobar 
printf("El DNI introducido es: %s\n",qfoobar);return 0;}
