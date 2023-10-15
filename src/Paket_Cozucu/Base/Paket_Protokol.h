#ifndef PAKET_COZME_PAKET_PROTOKOL_H
#define PAKET_COZME_PAKET_PROTOKOL_H

#include <cstdint>
#include <string>
#include <vector>

struct Paket_Bilgisi_t {
    std::string key;
    std::vector<char> rawData;
};

class Protokol_c {
public:
    virtual Paket_Bilgisi_t Paket_Bilgisi_Olustur(const char* veri, uint16_t veri_boyutu) const = 0;
};

class Example_Protocol_c : public Protokol_c {
public:
    Paket_Bilgisi_t Paket_Bilgisi_Olustur(const char* veri, uint16_t veri_boyutu) const override {
        Paket_Bilgisi_t paket_bilgisi;
        // Anahtarı ve ham veriyi doldur
        // ...
        return paket_bilgisi;
    }
};

#endif //PAKET_COZME_PAKET_PROTOKOL_H
