#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(7*(1*1+0)+2)];//qfoo q0 qbar q1ñq2 q3 q4 (4*2+2) qbaz 
char qfobar[(3*3+0)];//qfoo qfobar qbar q1ñq2 q3 q4 (9*(1*1+0)+1) qbaz int q5
=0;char qfoobar;//q6 qfobaz q7 q4 q8 qfoobaz qquux qfred//memset(q0,0,sizeof(
q0));//memset(qfobar,0,sizeof(qfobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q9 qbaz q10 qdog q11 q12 q13 q2 q11 q14 qcat (4*(2*1+0)+1) qbaz while((qfoobar
=getchar())!='\n'){q0[q5++]=qfoobar;//qfish q15 q16áq17 qquux q0}q0[q5]='\0';
//q0ñq18 q19 q16áq17 q20 q21 q22 qbar q23 qgasp//q24 qcat q25 qbar q0 qbad 
qfobar qbug q26 qsillyóq27 qbuggy q28(strcpy)strcpy(qfobar,q0);//q29 q11 qmum
 q30 q0 qdad qdisk qquux qfobar,q31 qbar qempty//qfull q19 qfast qbar qfobar 
printf("El DNI introducido es: %s\n",qfobar);return 0;}
