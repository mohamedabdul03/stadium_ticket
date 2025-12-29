#include <stdio.h>

int main() {
    //variableska ii haya xogta
    int match, heerarka, quantity, price, total;  // meelaha ay xogta userku galiyo ay ku dhacayso
    int vipseat = 50;         //qiimaha vip-da
    int goldseat = 100;         //qiimaha gold-ga
    int silverseat = 500;         //qiimaha xilver-ta
//xulashada ciyaarta
    printf("--- Kusoo dhowoow garoonka Galkayo Stadium! ---\n");
    printf("1. Real Madrid vs Barcelona\n");
    printf("2. Liverpool vs Man City\n");
    printf("3. Chealsea vs Atletico Madrid\n");


    printf("\n Xulo kulanka aad xiiseynayso (1-3): ");
    scanf("%d", &match);

    //heerarka kuraastu kala leeyihiin

    printf("\n Heerarka: \n  1. VIP ($100) \n  2. Gold ($75) \n  3. Silver ($50)\n");
    printf("Xulo kursiga aad doorbidayso (1-3): ");
    scanf("%d", &heerarka);

        if (heerarka == 1) {
            printf("Imisa VIP Ticket ayaad u baahantahay? ");
            scanf("%d", &quantity);
            if (quantity <= vipseat) {
                total = quantity * 100;
                printf("Waa laguu xaqiijiyay dalabkaaga! Khidmadda guud ahaan waa: $%d\n", total);
            } else {
                printf("Waanu ka xunnahay, kaliya  %d oo kuraas VIP ah ayaa ka haray.\n", vipseat);
            }
        }
        else if (heerarka == 2) {
            printf("Imisa GOLD Ticket ayaad u baahantahay? ");
            scanf("%d", &quantity);
            if (quantity <= goldseat) {
                total = quantity * 75;
                printf("Waa laguu xaqiijiyay dalabkaaga! Khidmadda guud ahaan waa: $%d\n", total);
            } else {
                printf("Waanu ka xunnahay, kaliya  %d oo kuraas GOLD ah ayaa ka haray.\n", goldseat);
            }
        }
        else if (heerarka == 3) {
            printf("Imisa SILVER Ticket ayaad u baahantahay?");
            scanf("%d", &quantity);
            if (quantity <= silverseat) {
                total = quantity * 50;
                printf("Waa laguu xaqiijiyay dalabkaaga! Khidmadda guud ahaan waa: $%d\n", total);
            } else {
                printf("Waanu ka xunnahay, kaliya  %d oo kuraas SILVER ah ayaa ka haray.\n", silverseat);
            }
        }
        else {
            // kani waxa uu qabanayaa haddii uu qofku lambar qaldan galiyo
            printf("Uhh huh! Waxaad galisay lambar qaldan \n");
        }

    return 0;
}
