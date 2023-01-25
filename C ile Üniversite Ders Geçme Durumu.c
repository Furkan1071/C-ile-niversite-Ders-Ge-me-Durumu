#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int vize, final, butunleme;
    printf("\nVize notunu giriniz: ");
    scanf("%d", &vize);
    printf("\nFinal notunu giriniz: ");
    scanf("%d", &final);

    float ders_ortalamasi;
    ders_ortalamasi = ((vize * 40) / 100) + ((final * 60) / 100);

    if (final<45)
    {
        printf("\nButunleme sinavina girmemeniz durumunda ders tekrarina duseceksiniz.");
        printf("\nButunleme sinavi notunuzu giriniz: ");
        scanf("%d",&butunleme);

        if (butunleme<45)
        {
            printf("\nMaalesef final/butunleme sinavindan gecer not alamadiginiz icin ders tekrarina dustunuz.");
        }

        else
        {
            ders_ortalamasi = ((vize*40)/100)+((butunleme*60)/100);
            printf("\nYeni ortalamaniz: %.2f",ders_ortalamasi);

            if (ders_ortalamasi>=50.00)
            {
                printf("\nTebrikler! Dersi basariyla gectiniz.");
            }
            else
            {
                printf("\nMaalesef, ders tekrarina dustunuz.");
            }
        }
    }
    else
    {
        if (ders_ortalamasi<50.00)
        {
            printf("\nDers ortalamaniz: %.2f",ders_ortalamasi);
            printf("\nDers ortalamaniz gecer notun altindadir. Lutfen ortalamanizi yukseltmek icin butunleme sinavina giriniz.");
            printf("\nButunleme sinavi notunuzu giriniz: ");
            scanf("%d", &butunleme);

            if (butunleme < 45)
            {
                printf("\nMaalesef final/butunleme sinavindan gecer not alamadiginiz icin ders tekrarina düstünüz.");
            }
            else
            {
                ders_ortalamasi = ((vize*40)/100)+((butunleme*60)/100);
                printf("\n\nYeni ortalamaniz: %.2f",ders_ortalamasi);

                if (ders_ortalamasi >= 50)
                {
                    printf("\nTebrikler! Dersi basariyla gectiniz.");
                }
                else
                {
                    printf("\nMaalesef, ders tekrari durumuna dustunuz.");
                }
            }
        }
        else
        {
            printf("\nTebrikler! Dersi basariyla gectiniz.");
        }
    }
    getch();
    return 0;
}

