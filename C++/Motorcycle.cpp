/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import Library
#include "Header.h"

// Implementasi kelas Motorcycle

// Constructor with default initialization
Motorcycle::Motorcycle(string platNomor, string merk, string tahunProduksi, string warna,
                       string jenisMotor, string kapasitasTangki) :
    Vehicle(platNomor, merk, tahunProduksi, warna), jenisMotor(jenisMotor), kapasitasTangki(kapasitasTangki) {}

// Setter and Getter methods for private attributes

// set jenisMotor
void Motorcycle::setJenisMotor(string jenisMotor) {
    this->jenisMotor = jenisMotor;
}

// Get jenisMotor
string Motorcycle::getJenisMotor() const {
    return jenisMotor;
}

// Set kapasitasTangki
void Motorcycle::setKapasitasTangki(string kapasitasTangki) {
    this->kapasitasTangki = kapasitasTangki;
}

// Get kapasitasTangki
string Motorcycle::getKapasitasTangki() const {
    return kapasitasTangki;
}
