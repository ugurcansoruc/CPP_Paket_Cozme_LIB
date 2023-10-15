cmake_minimum_required(VERSION 3.25)
project(Paket_Cozme)

set(CMAKE_CXX_STANDARD 17)

add_executable(Paket_Cozme main.cpp
        Paket_Cozucu/Base/Paket_Cozucu.cpp
        Paket_Cozucu/Base/Paket_Cozucu.h
        Paket_Cozucu/Base/Paket_Strateji.cpp
        Paket_Cozucu/Base/Paket_Strateji.h
        Paket_Cozucu/Base/Paket_Protokol.cpp
        Paket_Cozucu/Base/Paket_Protokol.h
        Paket_Cozucu/Stratejiler/Hat_1/Hat_1_Paket_Stratejileri.h
        Paket_Cozucu/Stratejiler/Hat_2/Hat_2_Paket_Stratejileri.h
        Paket_Cozucu/Stratejiler/Hat_1/Hat_1_Paket_Stratejileri.cpp
        Paket_Cozucu/Stratejiler/Hat_2/Hat_2_Paket_Stratejileri.cpp
        Paket_Cozucu/Stratejiler/Veri_Yapilari.h
        Paket_Cozucu/Base/Paket_Yoneticisi.cpp
        Paket_Cozucu/Base/Paket_Yoneticisi.h)
