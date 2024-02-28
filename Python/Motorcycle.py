# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Import File
from Vehicle import Vehicle

# Membuat kelas Motorcycle
class Motorcycle(Vehicle):
    # Membuat beberapa atribut private
    # jenisMotor Motorcycle
    __jenisMotor = ""
    # kapasitasTangki Motorcycle
    __kapasitasTangki = ""

    # Constructor with default initialization
    def __init__(self, platNomor="", merk="", tahunProduksi="", warna="", jenisMotor="", kapasitasTangki=""):
        # memanggil konstruktor dari kelas induk(superclass)
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jenisMotor = jenisMotor
        self.__kapasitasTangki = kapasitasTangki

    # Setter and Getter methods for private attributes
    # set jenisMotor
    def setjenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor

    # Get jenisMotor
    def getjenisMotor(self):
        return self.__jenisMotor

    # Set kapasitasTangki
    def setkapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki

    # Get kapasitasTangki
    def getkapasitasTangki(self):
        return self.__kapasitasTangki