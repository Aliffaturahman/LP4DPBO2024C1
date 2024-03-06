/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import Library
#include "Header.h"

// Implementasi kelas Vehicle

// Constructor with default initialization
Vehicle::Vehicle(string platNomor, string merk, string tahunProduksi, string warna) :
    platNomor(platNomor), merk(merk), tahunProduksi(tahunProduksi), warna(warna) {}

// Setter and Getter methods for private attributes

// set platNomor
void Vehicle::setPlatNomor(string platNomor) {
    this->platNomor = platNomor;
}

// Get platNomor
string Vehicle::getPlatNomor() const {
    return platNomor;
}

// Set merk
void Vehicle::setMerk(string merk) {
    this->merk = merk;
}

// Get merk
string Vehicle::getMerk() const {
    return merk;
}

// Set tahunProduksi
void Vehicle::setTahunProduksi(string tahunProduksi) {
    this->tahunProduksi = tahunProduksi;
}

// Get tahunProduksi
string Vehicle::getTahunProduksi() const {
    return tahunProduksi;
}

// Set warna
void Vehicle::setWarna(string warna) {
    this->warna = warna;
}

// Get warna
string Vehicle::getWarna() const {
    return warna;
}
