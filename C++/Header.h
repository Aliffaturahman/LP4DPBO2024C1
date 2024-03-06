/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

#ifndef HEADER_H
#define HEADER_H

// Import Library
#include <iostream>
#include <string>
#include <vector>

// Using standard namespace.
using namespace std;

class Vehicle {
private:
    string platNomor;
    string merk;
    string tahunProduksi;
    string warna;

public:
    Vehicle(string platNomor = "", string merk = "", string tahunProduksi = "", string warna = "");
    void setPlatNomor(string platNomor);
    string getPlatNomor() const;
    void setMerk(string merk);
    string getMerk() const;
    void setTahunProduksi(string tahunProduksi);
    string getTahunProduksi() const;
    void setWarna(string warna);
    string getWarna() const;
    
};

class Car : public Vehicle {
private:
    string jumlahKursi;
    string jumlahPintu;

public:
    Car(string platNomor = "", string merk = "", string tahunProduksi = "", string warna = "",
        string jumlahKursi = "", string jumlahPintu = "");
    void setJumlahKursi(string jumlahKursi);
    string getJumlahKursi() const;
    void setJumlahPintu(string jumlahPintu);
    string getJumlahPintu() const;
};

class Motorcycle : public Vehicle {
private:
    string jenisMotor;
    string kapasitasTangki;

public:
    Motorcycle(string platNomor = "", string merk = "", string tahunProduksi = "", string warna = "",
               string jenisMotor = "", string kapasitasTangki = "");
    void setJenisMotor(string jenisMotor);
    string getJenisMotor() const;
    void setKapasitasTangki(string kapasitasTangki);
    string getKapasitasTangki() const;
};

class Garage {
private:
    string namaGarasi;
    string luasGarasi;
    vector<Motorcycle> motorcycleList;
    vector<Car> carList;

public:
    Garage(string namaGarasi = "", string luasGarasi = "");
    void setNamaGarasi(string namaGarasi);
    string getNamaGarasi() const;
    void setLuasGarasi(string luasGarasi);
    string getLuasGarasi() const;
    const vector<Motorcycle>& getMotorcycleList() const;
    void addMotorcycle(const Motorcycle& motorcycle);
    void removeMotorcycle(const Motorcycle& motorcycle);
    const vector<Car>& getCarList() const;
    void addCar(const Car& car);
    // void removeCar(const Car& car);
};

class ParkingLot {
private:
    string kapasitas;
    string jumlahKendaraanSaatIni;
    vector<Garage> garageList;

public:
    ParkingLot(string kapasitas = "", string jumlahKendaraanSaatIni = "");
    void setKapasitas(string kapasitas);
    string getKapasitas() const;
    void setJumlahKendaraanSaatIni(string jumlahKendaraanSaatIni);
    string getJumlahKendaraanSaatIni() const;
    const vector<Garage>& getGarageList() const;
    void addGarage(const Garage& garage);
    // void removeGarage(const Garage& garage);


};

#endif // HEADER_H
