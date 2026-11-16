#include <stdio.h>

int main () {
    int total = 3725;
    int hours,minutes,seconds;
    double in_hours;
hours = total / 3600;
minutes = (total % 3600) / 60;
seconds = total % 60;
in_hours = (double)total / 3600;

printf ("%d seconds = %d h %d min %ds\n", total,hours,minutes,seconds);
printf ("in_hours = %.2f\n",in_hours);
return 0;

}