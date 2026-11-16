#include <stdio.h>
int main() {
    int value,first_div,second_div,third_div,four_div;
    printf ("Please enter a 4-digit positive number: ");
    scanf ("%d", &value);
    if (value >= 999 && value <= 9999) {
    first_div = value % 10;
    value = value / 10;
    second_div = value % 10;
    value = value / 10;
    third_div = value % 10;
    value = value / 10;
    four_div = value;
    if (first_div % 3 == 0)
    printf ("%d\n", first_div);
    if (second_div % 3 == 0)
    printf ("%d\n",second_div);
    if (third_div % 3 == 0)
    printf ("%d\n",third_div);
    if (four_div % 3 == 0)
    printf ("%d\n",four_div);
    } else {
        printf ("The entered number must be a 4-digit positive number.\n");
    }
return 0;
}