# LP4DPBO2024C1

## Janji
*Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*

## Soal
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas berikut :

- Vehicle : plat nomor, merk, tahun produksi, warna
- Car : jumlah kursi, jumlah pintu
- Motorcycle : jenis motor, kapasitas tangki
- Garage : nama garasi, luas garasi, daftar kendaraan
- ParkingLot : kapasitas, jumlah kendaraan saat ini

## Desain Program
Desain Algoritma Menggunakan UML

![Desain_LP4 drawio](https://github.com/Aliffaturahman/LP4DPBO2024C1/assets/100842759/85b301be-5b5d-4f1c-91f1-814af7204fa5)

Program ini terdiri dari 5 kelas :

1. class Vehicle  
Memiliki 4 atribut yaitu platNomor, merk, tahunProduksi, warna. Atribut-atribut ini nantinya akan diwariskan kepada kelas-kelas turunannya.

2. class Motorcycle  
Memiliki 2 atribut yaitu jenisMotor dan kapasitasTangki dan 4 atribut tambahan dari kelas Vehicle. Kelas Motorcycle ini merupakan turunan dari kelas Vehicle. jenisMotor ini adalah atribut data untuk menjelaskan apa jenis motor dari suatu kendaraan motor. kapasitasTangki adalah atribut untuk mengetahui kapasitas pada tangki. Atribut-atribut ini nantinya akan diwariskan kepada kelas-kelas yang sekiranya masuk ke dalam turunan dari kelas Motorcycle  ini.

3. class Car  
Memiliki 2 atribut yaitu jumlahKursi dan jumlahPintu serta 6 atribut tambahan karena kelas Car ini merupakan turunan dari kelas Vehicle.

4. class Garage  
Memiliki 4 atribut yaitu namaGarasi, luasGarasi, motorcycleList, dan carList. Untuk motorcycleList dan carList merupakan array of object, yang mana dia adalah list yang dapat menampung beberapa objek di dalamnya. Kelas ini ber-composite dengan kelas Motorcycle dan kelas Car.

5. class ParkingLot  
Memiliki 3 atribut yaitu kapasitas, jumlahKendaraanSaatIni dan garageList. Untuk garageList merupakan array of object, yang mana dia adalah list yang dapat menampung beberapa objek di dalamnya. Kelas ini ber-composite dengan kelas course.
        
## Penjelasan Alur
Dengan menggunakan *hardcode*, maka program tidak perlu dijalankan secara manual, semua scan dilakukan di main dengan mengisikan data di bagian class Motorcycle, Car, dan juga Garage. Setelah semua sudah terisi dilanjutkan dengan menambahkan kendaraan kedalam salah satu parkiran yang masih kosong. Program akan berjalan dengan memasukan data dari kendaraan motor dan juga mobil ke dalam garasi. 

## Dokumentasi
1. Tampilan Output Program

![Tampilan Output](https://github.com/Aliffaturahman/LP4DPBO2024C1/assets/100842759/ef36383b-638c-4770-ae40-3d6479299bd4)
