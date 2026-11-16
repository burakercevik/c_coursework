#include <stdio.h>

int main() {
    int kisa_kenar,uzun_kenar;
    printf ("\nCEVRE VE ALAN HESAPLAMA ARACI\n");
    printf ("dikdortgenin kisa kenarini girin: ");
    scanf ("%d", &kisa_kenar);
    printf ("dikdortgenin uzun kenarini girin: ");
    scanf ("%d", &uzun_kenar);

    int cevre = (uzun_kenar + kisa_kenar) * 2;
    int alan = uzun_kenar * kisa_kenar;

    printf ("\ndikdortgenin alani :%d \n", alan);
    printf ("dikdortgenin cevresi :%d \n\n", cevre);

    return 0;
}