/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import Library
#include "Header.h"

int main() {
    // Membuat objek Car
    Car Car1("D 8556 LOL", "Audi   ", "2020", "Putih", "4", "4");
    Car Car2("A 1234 BON", "Porche ", "2023", "Pink ", "2", "2");
    Car Car3("B 2723 MAN", "Buggati", "2022", "Merah", "2", "2");
    Car Car4("F 2290 SAF", "BMW    ", "2021", "Hitam", "2", "2");

    cout << "+-----------------------------------+" << endl;
    cout << "+        ~ Car Information ~        +" << endl;
    cout << "+-----------------------------------+\n" << endl;

    // Menampilkan informasi Car 
    cout << "Car 1 Information :" << endl;
    cout << "Plat Nomor     : " << Car1.getPlatNomor() << endl;
    cout << "Merk           : " << Car1.getMerk() << endl;
    cout << "Tahun Produksi : " << Car1.getTahunProduksi() << endl;
    cout << "Warna          : " << Car1.getWarna() << endl;
    cout << "Jumlah Kursi   : " << Car1.getJumlahKursi() << endl;
    cout << "Jumlah Pintu   : " << Car1.getJumlahPintu() << endl;
    cout << endl;

    cout << "Car 2 Information :" << endl;
    cout << "Plat Nomor     : " << Car2.getPlatNomor() << endl;
    cout << "Merk           : " << Car2.getMerk() << endl;
    cout << "Tahun Produksi : " << Car2.getTahunProduksi() << endl;
    cout << "Warna          : " << Car2.getWarna() << endl;
    cout << "Jumlah Kursi   : " << Car2.getJumlahKursi() << endl;
    cout << "Jumlah Pintu   : " << Car2.getJumlahPintu() << endl;
    cout << endl;

    cout << "Car 3 Information :" << endl;
    cout << "Plat Nomor     : " << Car3.getPlatNomor() << endl;
    cout << "Merk           : " << Car3.getMerk() << endl;
    cout << "Tahun Produksi : " << Car3.getTahunProduksi() << endl;
    cout << "Warna          : " << Car3.getWarna() << endl;
    cout << "Jumlah Kursi   : " << Car3.getJumlahKursi() << endl;
    cout << "Jumlah Pintu   : " << Car3.getJumlahPintu() << endl;
    cout << endl;

    // Membuat objek Motorcycle
    Motorcycle Moto1("S 2923 ENM", "Yamaha ", "2022", "Hitam", "Naked Bike", "12 L");
    Motorcycle Moto2("D 1203 ABC", "Suzuki ", "2023", "Abu  ", "Sport Bike", "13.5 L");
    Motorcycle Moto3("B 1254 MAN", "Honda  ", "2019", "Putih", "Scooter", "5.2 L");
    Motorcycle Moto4("F 9958 BAA", "Harley ", "2023", "Hitam", "Cruiser", "18.3 L");
    Motorcycle Moto5("E 7340 DAM", "Suzuki ", "2021", "Biru ", "Trail", "7.5 L");
    Motorcycle Moto6("A 1204 LIP", "Vespa", "2020", "Hijau", "Vespa", "10.5 L");

    cout << "+-----------------------------------+" << endl;
    cout << "+     ~ Motorcycle Information ~    +" << endl;
    cout << "+-----------------------------------+\n" << endl;

    // Menampilkan informasi Motorcycle
    cout << "Motorcycle 1 Information :" << endl;
    cout << "Plat Nomor         : " << Moto1.getPlatNomor() << endl;
    cout << "Merk               : " << Moto1.getMerk() << endl;
    cout << "Tahun Produksi     : " << Moto1.getTahunProduksi() << endl;
    cout << "Warna              : " << Moto1.getWarna() << endl;
    cout << "Jenis Motor        : " << Moto1.getJenisMotor() << endl;
    cout << "Kapasitas Tangki   : " << Moto1.getKapasitasTangki() << endl;
    cout << endl;

    cout << "Motorcycle 2 Information :" << endl;
    cout << "Plat Nomor         : " << Moto2.getPlatNomor() << endl;
    cout << "Merk               : " << Moto2.getMerk() << endl;
    cout << "Tahun Produksi     : " << Moto2.getTahunProduksi() << endl;
    cout << "Warna              : " << Moto2.getWarna() << endl;
    cout << "Jenis Motor        : " << Moto2.getJenisMotor() << endl;
    cout << "Kapasitas Tangki   : " << Moto2.getKapasitasTangki() << endl;
    cout << endl;

    cout << "Motorcycle 3 Information :" << endl;
    cout << "Plat Nomor         : " << Moto3.getPlatNomor() << endl;
    cout << "Merk               : " << Moto3.getMerk() << endl;
    cout << "Tahun Produksi     : " << Moto3.getTahunProduksi() << endl;
    cout << "Warna              : " << Moto3.getWarna() << endl;
    cout << "Jenis Motor        : " << Moto3.getJenisMotor() << endl;
    cout << "Kapasitas Tangki   : " << Moto3.getKapasitasTangki() << endl;
    cout << endl;

    cout << "Motorcycle 4 Information :" << endl;
    cout << "Plat Nomor         : " << Moto4.getPlatNomor() << endl;
    cout << "Merk               : " << Moto4.getMerk() << endl;
    cout << "Tahun Produksi     : " << Moto4.getTahunProduksi() << endl;
    cout << "Warna              : " << Moto4.getWarna() << endl;
    cout << "Jenis Motor        : " << Moto4.getJenisMotor() << endl;
    cout << "Kapasitas Tangki   : " << Moto4.getKapasitasTangki() << endl;
    cout << endl;

    cout << "Motorcycle 5 Information :" << endl;
    cout << "Plat Nomor         : " << Moto5.getPlatNomor() << endl;
    cout << "Merk               : " << Moto5.getMerk() << endl;
    cout << "Tahun Produksi     : " << Moto5.getTahunProduksi() << endl;
    cout << "Warna              : " << Moto5.getWarna() << endl;
    cout << "Jenis Motor        : " << Moto5.getJenisMotor() << endl;
    cout << "Kapasitas Tangki   : " << Moto5.getKapasitasTangki() << endl;
    cout << endl;

    // Membuat objek Garage
    Garage Garage1("Bolip`s Garage", "200 x 100 M");
    Garage Garage2("Fahmen`s Garage", "100 x 150 M");
    Garage Garage3("Lip`s Garage", "250 x 300 M");

    // Menambahkan kendaraan ke Garage
    // Garage 1
    Garage1.addCar(Car1);
    Garage1.addCar(Car2);
    Garage1.addMotorcycle(Moto1);

    // Garage 2
    Garage2.addCar(Car3);
    Garage2.addMotorcycle(Moto2);

    // Garage 3
    Garage3.addMotorcycle(Moto3);
    Garage3.addMotorcycle(Moto4);
    Garage3.addMotorcycle(Moto5);

    // Menampilkan informasi Garage
    cout << "+-----------------------------------+" << endl;
    cout << "+      ~ Garage Information ~       +" << endl;
    cout << "+-----------------------------------+\n" << endl;

    // Garage 1
    cout << "--------------------------" << endl;
    cout << "First Garage Information :" << endl;
    cout << "--------------------------" << endl;
    cout << "Nama Garasi : " << Garage1.getNamaGarasi() << endl;
    cout << "Luas Garasi : " << Garage1.getLuasGarasi() << endl;
    
    cout << "\nCars in Garage:" << endl;
    int i = 1;
    for (const Car& c : Garage1.getCarList()) {
        cout << i << ". " << c.getPlatNomor() << " | " << c.getMerk() << " | " << c.getWarna() << endl;
        i++;
    }
    
    cout << "\nMotorcycles in Garage:" << endl;
    i = 1;
    for (const Motorcycle& m : Garage1.getMotorcycleList()) {
        cout << i << ". " << m.getPlatNomor() << " | " << m.getMerk() << " | " << m.getWarna() << endl;
        i++;
    }
    cout << endl;

    // Garage 2
    cout << "---------------------------" << endl;
    cout << "Second Garage Information :" << endl;
    cout << "---------------------------" << endl;
    cout << "Nama Garasi : " << Garage2.getNamaGarasi() << endl;
    cout << "Luas Garasi : " << Garage2.getLuasGarasi() << endl;
    
    cout << "\nCars in Garage:" << endl;
    i = 1;
    for (const Car& c : Garage2.getCarList()) {
        cout << i << ". " << c.getPlatNomor() << " | " << c.getMerk() << " | " << c.getWarna() << endl;
        i++;
    }

    cout << "\nMotorcycles in Garage:" << endl;
    i = 1;
    for (const Motorcycle& m : Garage2.getMotorcycleList()) {
        cout << i << ". " << m.getPlatNomor() << " | " << m.getMerk() << " | " << m.getWarna() << endl;
        i++;
    }
    cout << endl;

    // Garage 3
    cout << "--------------------------" << endl;
    cout << "Third Garage Information :" << endl;
    cout << "--------------------------" << endl;
    cout << "Nama Garasi : " << Garage3.getNamaGarasi() << endl;
    cout << "Luas Garasi : " << Garage3.getLuasGarasi() << endl;
    
    cout << "\nCars in Garage:" << endl;
    i = 1;
    for (const Car& c : Garage3.getCarList()) {
        cout << i << ". " << c.getPlatNomor() << " | " << c.getMerk() << " | " << c.getWarna() << endl;
        i++;
    }
    
    cout << "\nMotorcycles in Garage:" << endl;
    i = 1;
    for (const Motorcycle& m : Garage3.getMotorcycleList()) {
        cout << i << ". " << m.getPlatNomor() << " | " << m.getMerk() << " | " << m.getWarna() << endl;
        i++;
    }
    cout << endl;

    // Membuat objek ParkingLot
    ParkingLot ParkLotGarage1("30", "3");
    ParkingLot ParkLotGarage2("20", "2");
    ParkingLot ParkLotGarage3("45", "3");
    ParkingLot ParkLotGarageTotal("95", "8");

    // Menambahkan Kendaraan di Garage ke ParkingLot
    // Garage 1
    ParkLotGarage1.addGarage(Garage1);

    // Garage 2
    ParkLotGarage2.addGarage(Garage2);
    
    // Garage 3
    ParkLotGarage3.addGarage(Garage3);

    // Garage Total
    ParkLotGarageTotal.addGarage(Garage1);
    ParkLotGarageTotal.addGarage(Garage2);
    ParkLotGarageTotal.addGarage(Garage3);

    // Menampilkan informasi ParkingLot
    cout << "+-----------------------------------+" << endl;
    cout << "+    ~ Parking Lot Information ~    +" << endl;
    cout << "+-----------------------------------+\n" << endl;

    // Garage 1
    cout << "-------------------------------" << endl;
    cout << "First Parking Lot Information :" << endl;
    cout << "-------------------------------" << endl;
    cout << "Nama Garasi        :";
    for (const Garage& g : ParkLotGarage1.getGarageList()) {
        cout << " " << g.getNamaGarasi() << endl;
    }
    cout << "Kapasitas          : " << ParkLotGarage1.getKapasitas() << endl;
    cout << "Kendaraan Saat Ini : " << ParkLotGarage1.getJumlahKendaraanSaatIni() << endl;
    

    // Garage 2
    cout << "\n--------------------------------" << endl;
    cout << "Second Parking Lot Information :" << endl;
    cout << "--------------------------------" << endl;
    cout << "Nama Garasi        :";
    for (const Garage& g : ParkLotGarage2.getGarageList()) {
        cout << " " << g.getNamaGarasi() << endl;
    }
    cout << "Kapasitas          : " << ParkLotGarage2.getKapasitas() << endl;
    cout << "Kendaraan Saat Ini : " << ParkLotGarage2.getJumlahKendaraanSaatIni() << endl;
    

    // Garage 3
    cout << "\n-------------------------------" << endl;
    cout << "Third Parking Lot Information :" << endl;
    cout << "-------------------------------" << endl;
    cout << "Nama Garasi        :";
    for (const Garage& g : ParkLotGarage3.getGarageList()) {
        cout << " " << g.getNamaGarasi() << endl;
    }
    cout << "Kapasitas          : " << ParkLotGarage3.getKapasitas() << endl;
    cout << "Kendaraan Saat Ini : " << ParkLotGarage3.getJumlahKendaraanSaatIni() << endl;
    

    // Garage Total
    cout << "\n-------------------------------" << endl;
    cout << "Parking Lot Total Information :" << endl;
    cout << "-------------------------------" << endl;
    cout << "Daftar Garasi Seluruhnya  :" << endl;
    i = 1;
    for (const Garage& g : ParkLotGarageTotal.getGarageList()) {
        cout << i << ". " << g.getNamaGarasi() << endl;
        i++;
    }
    cout << "\nKapasitas Seluruhnya      : " << ParkLotGarageTotal.getKapasitas() << endl;
    cout << "Total Kendaraan Saat Ini  : " << ParkLotGarageTotal.getJumlahKendaraanSaatIni() << endl;
    

    return 0;
}
