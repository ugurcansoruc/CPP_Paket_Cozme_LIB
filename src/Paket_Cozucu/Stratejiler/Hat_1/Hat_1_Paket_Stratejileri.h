//
// Created by ugurc on 10/15/2023.
//

#ifndef PAKET_COZME_HAT_1_PAKET_STRATEJILERI_H
#define PAKET_COZME_HAT_1_PAKET_STRATEJILERI_H


#include "../Veri_Yapilari.h"
#include "../../Base/Paket_Strateji.h"

namespace Hat_1_Paket_Cozme_Stratejileri
{
    class Paket_1_Strateji_c : public Yaygin_Veri_Cozumleme_Stratejisi_c<Paket_1_t> {
    public:
        void Paket_Isle() override {
            Paket_1_t paket1 = this->paket;
        }
    };
}

#endif //PAKET_COZME_HAT_1_PAKET_STRATEJILERI_H
