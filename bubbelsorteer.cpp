#include "nederc.hh"
#include <iostream>

leegte printReeks(getal *reeks, getal n) {
    voor (getal i = 0; i < n; ++i)
        standaard::cuit << reeks[i] << " " << standaard::spoeldoor;
}

leegte bubbelSorteer(getal *reeks, getal n) {
    boel verwisseld = waar;
    getal j = 0;
    getal tijdelijk;

    zolang (verwisseld) {
        verwisseld = onwaar;
        j++;
        voor (getal i = 0; i < n - j; ++i) {
            indien (reeks[i] > reeks[i + 1]) {
                tijdelijk = reeks[i];
                reeks[i] = reeks[i + 1];
                reeks[i + 1] = tijdelijk;
                verwisseld = waar;
            }
        }
    }
}

getal voornaamst() {
    getal reeks[] = {95, 45, 48, 98, 485, 65, 54, 478, 1, 2325};
    getal n = groottevan(reeks) / groottevan(reeks[0]);

    standaard::cuit << "Voor bubbelsorteer:" << standaard::eindigl;
    printReeks(reeks, n);

    bubbelSorteer(reeks, n);

    standaard::cuit << "\nNa bubbelsorteer:" << standaard::eindigl;
    printReeks(reeks, n);

    keerterug (0);
}

