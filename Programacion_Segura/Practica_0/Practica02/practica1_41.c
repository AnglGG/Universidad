#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(7*(1*1+0)+2)];//q0 qfoo qbar qbazñq1 q2 q3 
(6*(1*1+0)+4) qfobar char qfoobar[(5+4)];//q0 qfoobar qbar qbazñq1 q2 q3 
(1*(9*1+1)+0) qfobar int q4=0;char qfobaz;//q5 q6 q7 q3 q8 q9 qfoobaz qquux//
memset(qfoo,0,sizeof(qfoo));//memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q10 qfobar qfred q11 qdog q12 qcat q1 qdog qfish qgasp (5+4) qfobar while((
qfobaz=getchar())!='\n'){qfoo[q4++]=qfobaz;//qbad qbug qsillyáq13 qfoobaz 
qfoo}qfoo[q4]='\0';//qfooñq14 q15 qsillyáq13 q16 qbuggy q17 qbar qmum qdad//
q18 qgasp q19 qbar qfoo q20 qfoobar qdisk q21 q22óqempty q23 q24(strcpy)
strcpy(qfoobar,qfoo);//q25 qdog qfull qfast qfoo qsmall q26 qfoobaz qfoobar,
qbig qbar q27//qok q15 q28 qbar qfoobar printf("El DNI introducido es: %s\n",
qfoobar);return 0;}
