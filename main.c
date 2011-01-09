#include <stdio.h>
//#include <conio.h>

int main()
{
      int num,mablagh, adadenahaei,maheghabl;
      int maliatbargh, khorde;
      int adaderound,kilowat =50;

    printf("adade khande shode az kontor dar mahe aval:");
    scanf("%d",&maheghabl);
    printf("adade khande shode az kontor:");
    scanf("%d",&num);
    mablagh = maheghabl - num;
    adadenahaei = mablagh * kilowat;
    adadenahaei = adadenahaei + 12000;
    maliatbargh = adadenahaei / 30 ;
    adadenahaei = adadenahaei + maliatbargh;

    khorde = adadenahaei % 100;
    adaderound = adadenahaei - khorde;
    printf("\n adade kasr shode baraye mahe bad = %d ", khorde);
    printf("\n mablaghe ghabele pardakht dar in mah: %d ", adaderound);
   // getch();
    return 0;

    }

