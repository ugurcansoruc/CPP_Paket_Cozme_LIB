#include "Paket_Cozucu/Base/Paket_Yoneticisi.h"

int main() {

    Paket_Yoneticisi_c * Paket_Yonetici_c_o = new Paket_Yoneticisi_c();

    char * soketten_gelen_veri_s8 = nullptr;
    uint16_t veri_boyutu_u16 = 0;

    Paket_Yonetici_c_o->Getir_HAT_1_Paket_Cozucu_c().Veri_Cozumle(soketten_gelen_veri_s8, veri_boyutu_u16);
    Paket_Yonetici_c_o->Getir_HAT_2_Paket_Cozucu_c().Veri_Cozumle(soketten_gelen_veri_s8, veri_boyutu_u16);
    Paket_Yonetici_c_o->Getir_HAT_3_Paket_Cozucu_c().Veri_Cozumle(soketten_gelen_veri_s8, veri_boyutu_u16);

    return 0;
}
