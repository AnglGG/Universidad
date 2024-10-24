#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(3*3+0)];//qbar qfoo q0 qbazñq1 qfobar q2 (1*(5*2+0)+0) 
qfoobar char qfobaz[(5+4)];//qbar qfobaz q0 qbazñq1 qfobar q2 (8*(1*1+0)+2) 
qfoobar int qfoobaz=0;char qquux;//q3 qfred qdog q2 qcat qfish q4 qgasp//
memset(qfoo,0,sizeof(qfoo));//memset(qfobaz,0,sizeof(qfobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qbad qfoobar q5 qbug q6 qsilly q7 q1 q6 qbuggy qmum (6*(1*1+0)+3) qfoobar 
while((qquux=getchar())!='\n'){qfoo[qfoobaz++]=qquux;//q8 qdad q9áq10 q4 qfoo
}qfoo[qfoobaz]='\0';//qfooñq11 qdisk q9áq10 q12 qempty qfull q0 qfast qsmall
//q13 qmum q14 q0 qfoo qbig qfobaz qok qhello q15óq16 qbye q17(strcpy)strcpy(
qfobaz,qfoo);//qmagic q6 q18 qobscure qfoo q19 qspeed q4 qfobaz,qindex q0 
qbill//q20 qdisk qjoe q0 qfobaz printf("El DNI introducido es: %s\n",qfobaz);
return 0;}
