#ifndef PAKET_COZME_VERI_YAPILARI_H
#define PAKET_COZME_VERI_YAPILARI_H
 enum Example_Protocol_Paket_IDler
{
    PROJE_ID_1 = 1,
    PROJE_ID_2 = 2,
};

enum Example_Protocol_Proje_ID_1
{
    PROJE_1_PAKET_ID_1 = 1,
    PROJE_1_PAKET_ID_2 = 2,
    PROJE_1_PAKET_ID_3 = 3,
    PROJE_1_PAKET_ID_4 = 4
};

enum Example_Protocol_Proje_ID_2
{
    PROJE_2_PAKET_ID_1 = 1,
    PROJE_2_PAKET_ID_2 = 2,
    PROJE_2_PAKET_ID_3 = 3,
    PROJE_2_PAKET_ID_4 = 4
};

struct Paket_1_t
{
    int degisken_1;
};

struct Paket_2_t
{
    int degisken_1;
    int degisken_2;
};

#endif //PAKET_COZME_VERI_YAPILARI_H
