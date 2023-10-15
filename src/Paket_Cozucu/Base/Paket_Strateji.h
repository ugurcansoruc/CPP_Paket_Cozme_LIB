#ifndef PAKET_COZME_PAKET_STRATEJI_H
#define PAKET_COZME_PAKET_STRATEJI_H

#include <cstdio>

class Temel_Paket_Stratejisi_c {
public:
    virtual void Paket_Cozumle(const char* rawData, size_t veri_boyutu) = 0;
    virtual void Paket_Isle() = 0;
    virtual ~Temel_Paket_Stratejisi_c() = default;  // Virtual destructor
};

template <typename T>
class Paket_Stratejisi_c : public Temel_Paket_Stratejisi_c{
protected:
    T paket;
    void Paket_Ayarla(const T& paket) { this->paket = paket; }
    T Paket_Al() const { return paket; }
};

template <typename T>
class Yaygin_Veri_Cozumleme_Stratejisi_c : public Paket_Stratejisi_c<T> {
public:
    void Paket_Cozumle(const char* rawData, size_t veri_boyutu) override {
        // Ortak Paket_Cozumle uygulaması
        // ...
    }
};

#endif //PAKET_COZME_PAKET_STRATEJI_H
