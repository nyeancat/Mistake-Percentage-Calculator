#include <stdio.h>
#include <math.h>

int main(){

/* f= fehler %
*  ex= experiment wert
*  the= theoretical wert
*  x= operational wert
*  f= (ex-the)/ex;
*/
float f=0,ex=0,the=0,ans=0;
int x=0;
printf("----------------------------------------------------\n");
printf("Welcome to the Error Percentage Calculator v1.0-----\n");
printf("----------Press 9 to exit from the program.---------\n");
printf("----------------------------------------------------\n");
while(x!=9){
    printf("theoretical value:\t");
    scanf("%f",&the);
    printf("\nexperimental value:\t");
    scanf("%f",&ex);
    f=(ex-the)/ex;
    printf("\nerror=\t %f\n\n",fabs(f));
    printf("----------------------------------------------------\n");
    printf("------------press 1 to continue, 9 to exit----------\n");
    scanf("%d",&x);
    the=0;
    ex=0;
}

return 0;
}
