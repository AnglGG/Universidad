#include <stdio.h>
#include <string.h> // Para strcpy (función de copia insegura)
int main(){char qfoo[(5+4)];//qbar qfoo q0 qbazñqfobar qfoobar q1 (5+5) 
qfobaz char qfoobaz[(2*(3*1+1)+1)];//qbar qfoobaz q0 qbazñqfobar qfoobar q1 
(5+5) qfobaz int q2=0;char q3;//qquux qfred qdog q1 qcat qfish qgasp qbad//
memset(qfoo,0,sizeof(qfoo));//memset(qfoobaz,0,sizeof(qfoobaz));printf(
"Introduce el DNI caracter a caracter y presiona Enter para terminar):\n");//
q4 qfobaz q5 q6 qbug qsilly qbuggy qfobar qbug q7 qmum (1*(8*1+1)+0) qfobaz 
while((q3=getchar())!='\n'){qfoo[q2++]=q3;//qdad q8 qdiskáqempty qgasp qfoo}
qfoo[q2]='\0';//qfooñqfull q9 qdiskáqempty q10 q11 q12 q0 q13 qfast//q14 
qmum q15 q0 qfoo q16 qfoobaz qsmall qbig q17óq18 q19 qok(strcpy)strcpy(
qfoobaz,qfoo);//qhello qbug q20 qbye qfoo q21 q22 qgasp qfoobaz,q23 q0 q24//
qmagic q9 q25 q0 qfoobaz printf("El DNI introducido es: %s\n",qfoobaz);return 
0;}
