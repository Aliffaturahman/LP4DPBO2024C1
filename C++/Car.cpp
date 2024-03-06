/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import Library
#include "Header.h"

// Implementasi kelas Car

// Constructor with default initialization
Car::Car(string platNomor, string merk, string tahunProduksi, string warna,
         string jumlahKursi, string jumlahPintu) :
    Vehicle(platNomor, merk, tahunProduksi, warna), jumlahKursi(jumlahKursi), jumlahPintu(jumlahPintu) {}

// Setter and Getter methods for private attributes

// set jumlahKursi
void Car::setJumlahKursi(string jumlahKursi) {
    this->jumlahKursi = jumlahKursi;
}

// Get jumlahKursi
string Car::getJumlahKursi() const {
    return jumlahKursi;
}

// Set jumlahPintu
void Car::setJumlahPintu(string jumlahPintu) {
    this->jumlahPintu = jumlahPintu;
}

// Get jumlahPintu
string Car::getJumlahPintu() const {
    return jumlahPintu;
}
