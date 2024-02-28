# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Membuat kelas Vehicle
class Vehicle:
    # Membuat beberapa atirbut private
    # platNomor Vehicle
    __platNomor = ""
    # merk Vehicle
    __merk = ""
    # tahunProduksi Vehicle
    __tahunProduksi = ""
    # warna Vehicle
    __warna = ""

    # Constructor with default initialization
    def __init__(self, platNomor="", merk="", tahunProduksi="", warna=""):
        self.__platNomor = platNomor
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna

    # Setter and Getter methods for private attributes
    # set platNomor
    def setplatNomor(self, platNomor):
        self.__platNomor = platNomor

    # Get platNomor
    def getplatNomor(self):
        return self.__platNomor

    # Set merk
    def setmerk(self, merk):
        self.__merk = merk

    # Get merk
    def getmerk(self):
        return self.__merk

    # Set Gender
    def settahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi

    # Get Gender
    def gettahunProduksi(self):
        return self.__tahunProduksi

    # Set Sleeve Type
    def setwarna(self, warna):
        self.__warna = warna

    # Get Sleeve Type
    def getwarna(self):
        return self.__warna