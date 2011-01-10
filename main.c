 /*
 ============================================================================
 Name        : main.c
 Author      : ehsan abdolahi
 Version     :
 License     : gpl
 Description : ghabz bargh in C, Ansi-style
 email       : ehsan.abdolahy@gmail.com
 edited      : 10 January 2011, 13:08
 Created on 15 December 2010, 22:58
 ============================================================================
 */

#include <stdio.h>
#define kilowatt 50

int RoundNum(int sumkw) {

unsigned int  bb = 0;    /*adade mohesebe shode baraye mahe badi*/
int round = 0;  /* adade round shode baraye pardakhte moshtari */

    bb = sumkw % 100;  /* joda kardane adade khurde az adade asli */
    printf("\nadade kasr shode baraye mahe baad =  %d rial", bb);
        round = sumkw - bb;  /* kasre khurde adad az adade asli va mohasebe adade round shode */
    printf("\nmizan poole mohasebe shode baraye moshtari dar in mah = %d rial", round);
        printf("\n(^-^) (^_^) ");
}

int main()
{

int number,number2;    /* adad haye khande shode dar mahe 1 && 2*/
int sumkw;           /* adade khande shode * 50 */
int maliat;           /* 30% maliat */

printf("addad khande shode az kontor ra vared konid(month1): ");
    scanf("%d",&number);
printf("adade khande shode az kontor ra vared konid(month2): ");
    scanf("%d", &number2);
        number -= number2; /*  kasr adad 1 az 2 va rikhtan dar adade aval */
        sumkw = number * kilowatt; /*zarbe adad be dast amade dar 50 */
        sumkw += 12000;     /* adade be dast amade + 12000 maliat */
        maliat = sumkw / 30;        /* 30% maliat */
        sumkw += maliat;

    RoundNum(sumkw);

return 0;
      }
