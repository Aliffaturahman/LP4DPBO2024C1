# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Membuat kelas ParkingLot
class ParkingLot:
    # Membuat beberapa atirbut private
    # kapasitas ParkingLot
    __kapasitas = ""
    # jumlahKendaraanSaatIni ParkingLot
    __jumlahKendaraanSaatIni = ""

    # Constructor with default initialization
    def __init__(self, kapasitas="", jumlahKendaraanSaatIni=""):
        # memanggil konstruktor dari kelas induk(superclass)
        self.__kapasitas = kapasitas
        self.__jumlahKendaraanSaatIni = jumlahKendaraanSaatIni
        self.__garageList = []

    # Setter and Getter methods for private attributes
    # set kapasitas
    def setkapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    # Get kapasitas
    def getkapasitas(self):
        return self.__kapasitas

    # Set jumlahKendaraanSaatIni
    def setjumlahKendaraanSaatIni(self, jumlahKendaraanSaatIni):
        self.__jumlahKendaraanSaatIni = jumlahKendaraanSaatIni

    # Get jumlahKendaraanSaatIni
    def getjumlahKendaraanSaatIni(self):
        return self.__jumlahKendaraanSaatIni
    
    # Get garage list
    def get_garageList(self):
        return self.__garageList

    # Method tambah garage
    def add_garage(self, garage):
        self.__garageList.append(garage)

    # Method hapus garage
    def remove_garage(self, garage):
        self.__garageList.remove(garage)