#ifndef PAKET_COZME_PAKET_YONETICISI_H
#define PAKET_COZME_PAKET_YONETICISI_H

#include "Paket_Cozucu.h"

class Paket_Yoneticisi_c
{
private:
    Paket_Cozumleyicisi_c<Example_Protocol_c> HAT_1_Paket_Cozucu_c;
    Paket_Cozumleyicisi_c<Example_Protocol_c> HAT_2_Paket_Cozucu_c;
    Paket_Cozumleyicisi_c<Example_Protocol_c> HAT_3_Paket_Cozucu_c;

public:
    Paket_Yoneticisi_c();

    Paket_Cozumleyicisi_c<Example_Protocol_c> & Getir_HAT_1_Paket_Cozucu_c();
    Paket_Cozumleyicisi_c<Example_Protocol_c> & Getir_HAT_2_Paket_Cozucu_c();
    Paket_Cozumleyicisi_c<Example_Protocol_c> & Getir_HAT_3_Paket_Cozucu_c();

};


#endif //PAKET_COZME_PAKET_YONETICISI_H
