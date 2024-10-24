#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char q0[(4*2+1)];//qfoo q0 qbar qbazñqfobar qfoobar qfobaz (4*2+2)
 qfoobaz char qquux[(1*9+0)];//qfoo qquux qbar qbazñqfobar qfoobar qfobaz 
(5+5) qfoobaz int qfred=0;char qdog;//qcat q1 q2 qfobaz qfish qgasp qbad q3//
memset(q0,0,sizeof(q0));//memset(qquux,0,sizeof(qquux));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q4 qfoobaz qbug q5 q6 qsilly q7 qfobar q6 q8 qbuggy (2*(1*4+0)+1) qfoobaz 
while((qdog=getchar())!='\n'){q0[qfred++]=qdog;//q9 q10 qmumáq11 qbad q0}q0[
qfred]='\0';//q0ñqdad qdisk qmumáq11 qempty qfull qfast qbar qsmall q12//
qbig qbuggy q13 qbar q0 q14 qquux qok q15 qhelloóq16 qbye qmagic(strcpy)
strcpy(qquux,q0);//q17 q6 q18 qobscure q0 q19 qspeed qbad qquux,qindex qbar 
q20//q21 qdisk q22 qbar qquux printf("El DNI introducido es: %s\n",qquux);
return 0;}
