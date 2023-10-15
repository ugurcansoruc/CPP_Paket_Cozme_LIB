#ifndef PAKET_COZME_PAKET_COZUCU_H
#define PAKET_COZME_PAKET_COZUCU_H

#include <memory>
#include <unordered_map>
#include <string>
#include <sstream>
#include "Paket_Protokol.h"
#include "Paket_Strateji.h"

template <typename P>
class Paket_Cozumleyicisi_c {
protected:
    std::unique_ptr<P> protokol;
    std::unordered_map<std::string, std::unique_ptr<Temel_Paket_Stratejisi_c>> paket_stratejileri;

public:
    Paket_Cozumleyicisi_c() : protokol(std::make_unique<P>()) {}

    template <typename S, typename... IDs>
    void Paket_Stratejisi_Kaydet(IDs... ids) {
        std::string packetKey = Paket_Anahtari_Olustur(ids...);
        paket_stratejileri[packetKey] = std::make_unique<S>();
    }

    void Veri_Cozumle(const char* veri, uint16_t veri_boyutu) {
        Paket_Bilgisi_t paket_bilgisi = protokol->Paket_Bilgisi_Olustur(veri, veri_boyutu);
        if (paket_stratejileri.find(paket_bilgisi.key) != paket_stratejileri.end()) {
            auto& strategy = paket_stratejileri[paket_bilgisi.key];
            strategy->Paket_Cozumle(paket_bilgisi.rawData.data(), paket_bilgisi.rawData.size());
            strategy->Paket_Isle();
        }
    }

private:
    template <typename... IDs>
    std::string Paket_Anahtari_Olustur(IDs... ids) {
        std::ostringstream keyStream;
        ((keyStream << ids << "_"), ...);
        return keyStream.str();
    }
};

#endif //PAKET_COZME_PAKET_COZUCU_H
