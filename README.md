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
Dengan menggunakan *hardcode*, maka program tidak perlu dijalankan secara manual, semua scan dilakukan di main dengan mengisikan data di bagian class Motorcycle, Car, Garage, dan juga ParkingLot. Setelah semuanya sudah terisi dilanjutkan dengan menambahkan kendaraan (mobil atau motor) kedalam salah satu garasi yang masih kosong. Program akan berjalan dengan memasukan data dari kendaraan motor dan juga mobil ke dalam garasi yang menyesuaikan berdasarkan luas garasi, kondisi tempat parkir saat ini seperti total tempat parkir yang masih tersedia dan jumlah kendaraan saat ini yang sudah parkir di dalam garasi. 

## Dokumentasi
Tampilan Output Program (Menggunakan Bahasa C++)

1. Car Information

![1 - Car Information](https://github.com/Aliffaturahman/LP4DPBO2024C1/assets/100842759/a66ae342-2b78-4b00-8790-e024e23ed2de)

2. Motorcycle Information
   
![2 - Motorcycle Information](https://github.com/Aliffaturahman/LP4DPBO2024C1/assets/100842759/c99910fa-a3b0-48bd-841a-4b24865e70ac)

3. Garage Information
   
![3 - Garage Information](https://github.com/Aliffaturahman/LP4DPBO2024C1/assets/100842759/5b99a905-be04-452f-adf5-081339682d2a)

4. Parking Lot Information
   
![4 - Parking Lot Information](https://github.com/Aliffaturahman/LP4DPBO2024C1/assets/100842759/6d72b6a6-fc52-4b2e-83ed-23d738ec50a5)
