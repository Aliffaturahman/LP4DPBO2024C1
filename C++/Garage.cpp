/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import Library
#include "Header.h"

// Implementasi kelas Garage

// Constructor with default initialization
Garage::Garage(string namaGarasi, string luasGarasi) :
    namaGarasi(namaGarasi), luasGarasi(luasGarasi) {}

// Setter and Getter methods for private attributes

// set namaGarasi
void Garage::setNamaGarasi(string namaGarasi) {
    this->namaGarasi = namaGarasi;
}

// Get namaGarasi
string Garage::getNamaGarasi() const {
    return namaGarasi;
}

// Set luasGarasi
void Garage::setLuasGarasi(string luasGarasi) {
    this->luasGarasi = luasGarasi;
}

// Get luasGarasi
string Garage::getLuasGarasi() const {
    return luasGarasi;
}

// Get motorcycle list
const vector<Motorcycle>& Garage::getMotorcycleList() const {
    return motorcycleList;
}

// Method tambah motorcycle
void Garage::addMotorcycle(const Motorcycle& motorcycle) {
    motorcycleList.push_back(motorcycle);
}

// // Method hapus motorcycle
// void Garage::removeMotorcycle(const Motorcycle& motorcycle) {
//     // Cari dan hapus motorcycle dari list
//     auto it = find(motorcycleList.begin(), motorcycleList.end(), motorcycle);
//     if (it != motorcycleList.end()) {
//         motorcycleList.erase(it);
//     }
// }

// Get car list
const vector<Car>& Garage::getCarList() const {
    return carList;
}

// Method tambah car
void Garage::addCar(const Car& car) {
    carList.push_back(car);
}

// // Method hapus car
// void Garage::removeCar(const Car& car) {
//     // Cari dan hapus car dari list
//     auto it = find(carList.begin(), carList.end(), car);
//     if (it != carList.end()) {
//         carList.erase(it);
//     }
// }
