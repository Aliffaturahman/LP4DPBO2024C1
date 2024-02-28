# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Import library and file.
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot
from Car import Car

# Buat objek Motorcycle
Moto1 = Motorcycle('S 2923 ENM', 'Yamaha', '2022', 'Hitam','Naked Bike', '12 L')
Moto2 = Motorcycle('D 1203 ABC', 'Suzuki', '2023', 'Abu - Abu', 'Sport Bike', '13.5 L')
Moto3 = Motorcycle('B 1254 MAN', 'Honda', '2019', 'Putih', 'Scooter', '5.2 L')
Moto4 = Motorcycle('F 9958 BAA', 'Harley Davidson', '2023', 'Hitam', 'Cruiser', '18.3 L')
Moto5 = Motorcycle('E 7340 DAM', 'Suzuki', '2021', 'Biru', 'Trail', '7.5 L')
Moto6 = Motorcycle('A 1204 LIP', 'Vespa', '2020', 'Kuning', 'Vespa', '10.5 L')
Moto7 = Motorcycle('AA 674 KOL', 'Kawasaki', '2020', 'Merah', 'Sport Bike', '12.5 L')
Moto8 = Motorcycle('AB 912 QSZ', 'Ducati', '2018', 'Biru', 'Sport Bike', '15.5 L')
Moto9 = Motorcycle('D 5546 POP', 'BMW', '2023', 'Hitam', 'Naked Bike', '18.5 L')

# Buat objek Car
Car1 = Car('Z 7070 NZY', 'Roll Royce', '2019','Hitam', '4', '4')
Car2 = Car('A 1234 BON', 'Porche', '2023','Pink', '2', '2')
Car3 = Car('B 2723 MAN', 'Buggati', '2022','Merah', '2', '2')
Car4 = Car('F 2290 SAF', 'BMW', '2021','Hitam', '2', '2')
Car5 = Car('B 7634 MUN', 'Mercedez', '2022','Hitam', '2', '2')
Car6 = Car('D 8556 LOL', 'Audi', '2020','Putih', '4', '4')

# Buat objek Garage
Garage1 = Garage('Bolip`s Garage', '200 x 100 M')
Garage2 = Garage('Fahmen`s Garage', '100 x 150 M')
Garage3 = Garage('Lip`s Garage', '250 x 300 M')

# Tambahkan Car dan Motorcycle ke dalam Garage
# Garage 1
Garage1.add_car(Car1)
Garage1.add_car(Car2)
Garage1.add_car(Car3)
Garage1.add_motorcycle(Moto1)
Garage1.add_motorcycle(Moto2)
Garage1.add_motorcycle(Moto3)

# Garage 2
Garage2.add_car(Car4)
Garage2.add_car(Car5)
Garage2.add_motorcycle(Moto4)
Garage2.add_motorcycle(Moto5)

# Garage 3
Garage3.add_car(Car6)
Garage3.add_motorcycle(Moto6)
Garage3.add_motorcycle(Moto7)
Garage3.add_motorcycle(Moto8)
Garage3.add_motorcycle(Moto9)

# Buat objek Tempat Parkir
jumlah = ParkingLot('20', '15')

# Tambahkan Garage ke dalam Tempat Parkir
jumlah.add_garage(Garage1)
jumlah.add_garage(Garage2)
jumlah.add_garage(Garage3)

# tampilkan Garage apa saja yang ada di Tempat Parkir Ilmu Komputer
print('Total Kendaraan yang Berada di Parkiran Saat Ini Sebanyak', jumlah.getjumlahKendaraanSaatIni(), ', dengan jumlah :')
print('1. 9 Motor')
print('2. 6 Mobil')

print('\nGarage Kosong yang Tersedia :')
i = 1
for Garages in jumlah.get_garageList():
    print(f"{i}. {Garages.getnamaGarasi()}")
    i += 1

print('\n+----------------------------------------------+')
print('+                                              +')
print('+  ~ Mengisi Garage Kosong Dengan Kendaraan ~  +')
print('+                                              +')
print('+----------------------------------------------+')

# tampilkan Car yang parkir di Garage1
print('\nMobil yang parkir di', Garage1.getnamaGarasi(), ':')
for Car in Garage1.get_carList():
    print('-', Car.getplatNomor(), '|', Car.getmerk())

# tampilkan Motorcycle yang parkir Garage1
print('\nMotor yang parkir di', Garage1.getnamaGarasi(), ':')
for Motorcycle in Garage1.get_motorcycleList():
    print('-', Motorcycle.getplatNomor(), '|', Motorcycle.getmerk())

# tampilkan Car yang parkir di Garage2
print('\nMobil yang parkir di', Garage2.getnamaGarasi(), ':')
for Car in Garage2.get_carList():
    print('-', Car.getplatNomor(), '|', Car.getmerk())

# tampilkan Motorcycle yang parkir Garage2
print('\nMotor yang parkir di', Garage2.getnamaGarasi(), ':')
for Motorcycle in Garage2.get_motorcycleList():
    print('-', Motorcycle.getplatNomor(), '|', Motorcycle.getmerk())

# tampilkan Car yang parkir di Garage3
print('\nMobil yang parkir di', Garage3.getnamaGarasi(), ':')
for Car in Garage3.get_carList():
    print('-', Car.getplatNomor(), '|', Car.getmerk())

# tampilkan Motorcycle yang parkir Garage3
print('\nMotor yang parkir di', Garage3.getnamaGarasi(), ':')
for Motorcycle in Garage3.get_motorcycleList():
    print('-', Motorcycle.getplatNomor(), '|', Motorcycle.getmerk())