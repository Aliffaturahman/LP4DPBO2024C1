/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import Library
#include "Header.h"

// Implementasi kelas ParkingLot

// Constructor with default initialization
ParkingLot::ParkingLot(string kapasitas, string jumlahKendaraanSaatIni) :
    kapasitas(kapasitas), jumlahKendaraanSaatIni(jumlahKendaraanSaatIni) {}

// Setter and Getter methods for private attributes

// set kapasitas
void ParkingLot::setKapasitas(string kapasitas) {
    this->kapasitas = kapasitas;
}

// Get kapasitas
string ParkingLot::getKapasitas() const {
    return kapasitas;
}

// Set jumlahKendaraanSaatIni
void ParkingLot::setJumlahKendaraanSaatIni(string jumlahKendaraanSaatIni) {
    this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
}

// Get jumlahKendaraanSaatIni
string ParkingLot::getJumlahKendaraanSaatIni() const {
    return jumlahKendaraanSaatIni;
}

// Get garage list
const vector<Garage>& ParkingLot::getGarageList() const {
    return garageList;
}

// Method tambah garage
void ParkingLot::addGarage(const Garage& garage) {
    garageList.push_back(garage);
}

// // Method hapus garage
// void ParkingLot::removeGarage(const Garage& garage) {
//     // Cari dan hapus garage dari list
//     auto it = find(garageList.begin(), garageList.end(), garage);
//     if (it != garageList.end()) {
//         garageList.erase(it);
//     }
// }
