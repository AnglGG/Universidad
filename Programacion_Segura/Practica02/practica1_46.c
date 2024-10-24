#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(4+5)];//qbar qfoo q0 q1ñq2 qbaz q3 (2*5+0) qfobar char 
qfoobar[(1*(1*9+0)+0)];//qbar qfoobar q0 q1ñq2 qbaz q3 (5+5) qfobar int q4=0;
char qfobaz;//qfoobaz qquux q5 q3 q6 q7 qfred qdog//memset(qfoo,0,sizeof(qfoo)
);//memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
qcat qfobar qfish qgasp qbad q8 q9 q2 qbad q10 qbug (5*(1*1+0)+4) qfobar while
((qfobaz=getchar())!='\n'){qfoo[q4++]=qfobaz;//qsilly q11 qbuggyáqmum qfred 
qfoo}qfoo[q4]='\0';//qfooñqdad q12 qbuggyáqmum q13 qdisk qempty q0 qfull q14
//qfast qbug qsmall q0 qfoo qbig qfoobar q15 qok qhelloóqbye q16 q17(strcpy)
strcpy(qfoobar,qfoo);//q18 qbad qmagic qobscure qfoo q19 qspeed qfred qfoobar,
q20 q0 q21//q22 q12 q23 q0 qfoobar printf("El DNI introducido es: %s\n",
qfoobar);return 0;}
