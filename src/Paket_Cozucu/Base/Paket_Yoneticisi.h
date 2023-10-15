#ifndef B_PAKET_COZME_PAKET_YONETICISI_H
#define B_PAKET_COZME_PAKET_YONETICISI_H

#include "Paket_Cozucu.h"

class Paket_Yoneticisi_c
{
private:
    Paket_Cozumleyicisi_c<YZHP_c> HAT_1_Paket_Cozucu_c;
    Paket_Cozumleyicisi_c<YZHP_c> HAT_2_Paket_Cozucu_c;
    Paket_Cozumleyicisi_c<YZHP_c> HAT_3_Paket_Cozucu_c;

public:
    Paket_Yoneticisi_c();

    Paket_Cozumleyicisi_c<YZHP_c> & Getir_HAT_1_Paket_Cozucu_c();
    Paket_Cozumleyicisi_c<YZHP_c> & Getir_HAT_2_Paket_Cozucu_c();
    Paket_Cozumleyicisi_c<YZHP_c> & Getir_HAT_3_Paket_Cozucu_c();

};


#endif //B_PAKET_COZME_PAKET_YONETICISI_H
