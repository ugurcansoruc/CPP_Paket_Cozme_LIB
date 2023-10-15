#include "Paket_Yoneticisi.h"
#include "../Stratejiler/Hat_2/Hat_2_Paket_Stratejileri.h"
#include "../Stratejiler/Hat_1/Hat_1_Paket_Stratejileri.h"

Paket_Yoneticisi_c::Paket_Yoneticisi_c()
{
    //!< Hat_1 Paket Cozucu Initlemelerini Gerceklestirelim
    this->HAT_1_Paket_Cozucu_c.Paket_Stratejisi_Kaydet<Hat_1_Paket_Cozme_Stratejileri::Paket_1_Strateji_c>(Example_Protocol_Paket_IDler::PROJE_ID_1, Example_Protocol_Proje_ID_1::PROJE_1_PAKET_ID_1);

    //!< Hat_2 Paket Cozucu Initlemelerini Gerceklestirelim
    this->HAT_1_Paket_Cozucu_c.Paket_Stratejisi_Kaydet<Hat_2_Paket_Cozme_Stratejileri::Paket_1_Strateji_c>(Example_Protocol_Paket_IDler::PROJE_ID_1, Example_Protocol_Proje_ID_1::PROJE_1_PAKET_ID_1);

}

Paket_Cozumleyicisi_c<Example_Protocol_c> & Paket_Yoneticisi_c::Getir_HAT_1_Paket_Cozucu_c()
{
    return this->HAT_1_Paket_Cozucu_c;
}
Paket_Cozumleyicisi_c<Example_Protocol_c> & Paket_Yoneticisi_c::Getir_HAT_2_Paket_Cozucu_c()
{
    return this->HAT_2_Paket_Cozucu_c;
}

Paket_Cozumleyicisi_c<Example_Protocol_c> & Paket_Yoneticisi_c::Getir_HAT_3_Paket_Cozucu_c()
{
    return this->HAT_3_Paket_Cozucu_c;
}
