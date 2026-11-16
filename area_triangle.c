#include <stdio.h>
#include <math.h>
int main() {
int a,b,c;
double s,area;
printf("birinci kenari girin: ");
scanf("%d",&a);
printf("ikinci kenari girin: ");
scanf("%d",&b);
printf("ucuncu kenari girin: ");
scanf("%d",&c);

s = (a + b + c) / 2.00;
area = sqrt(s * (s-a) * (s-b) * (s-c));
printf ("ucgenin alani: %.2f\n",area);
return 0;
}