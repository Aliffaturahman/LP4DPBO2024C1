# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Import File
from Vehicle import Vehicle

# Membuat kelas Car
class Car(Vehicle):
    # Membuat beberapa atirbut private
    # jumlahKursi Car
    __jumlahKursi = ""
    # jumlahPintu Car
    __jumlahPintu = ""

    # Constructor with default initialization
    def __init__(self, platNomor="", merk="", tahunProduksi="", warna="", jumlahKursi="", jumlahPintu=""):
        # memanggil konstruktor dari kelas induk(superclass)
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu

    # Setter and Getter methods for private attributes
    # set jumlahKursi
    def setjumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi

    # Get jumlahKursi
    def getjumlahKursi(self):
        return self.__jumlahKursi

    # Set jumlahPintu
    def setjumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu

    # Get jumlahPintu
    def getjumlahPintu(self):
        return self.__jumlahPintu