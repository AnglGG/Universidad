#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(1*9+0)];//qfoo q0 qbar q1ñq2 q3 qbaz (5+5) qfobar char 
qfoobar[(2*4+1)];//qfoo qfoobar qbar q1ñq2 q3 qbaz (5*2+0) qfobar int q4=0;
char qfobaz;//q5 q6 qfoobaz qbaz q7 qquux qfred qdog//memset(q0,0,sizeof(q0));
//memset(qfoobar,0,sizeof(qfoobar));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q8 qfobar q9 qcat qfish q10 qgasp q2 qfish q11 q12 (5+4) qfobar while((qfobaz=
getchar())!='\n'){q0[q4++]=qfobaz;//qbad qbug qsillyáq13 qfred q0}q0[q4]='\0'
;//q0ñqbuggy qmum qsillyáq13 qdad q14 qdisk qbar q15 qempty//qfull q12 q16 
qbar q0 q17 qfoobar qfast qsmall q18óqbig q19 qok(strcpy)strcpy(qfoobar,q0);/
/q20 qfish q21 qhello q0 qbye qmagic qfred qfoobar,qobscure qbar q22//qspeed 
qmum qindex qbar qfoobar printf("El DNI introducido es: %s\n",qfoobar);return 
0;}
