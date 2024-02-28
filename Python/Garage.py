# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 4 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Membuat kelas Garage
class Garage:
    # Membuat beberapa atirbut private
    # namaGarasi Garage
    __namaGarasi = ""
    # luasGarasi Garage
    __luasGarasi = ""

    # Constructor with default initialization
    def __init__(self, namaGarasi="", luasGarasi=""):
        # memanggil konstruktor dari kelas induk(superclass)
        self.__namaGarasi = namaGarasi
        self.__luasGarasi = luasGarasi
        self.__motorcycleList = []
        self.__carList = []

    # Setter and Getter methods for private attributes
    # set namaGarasi
    def setnamaGarasi(self, namaGarasi):
        self.__namaGarasi = namaGarasi

    # Get namaGarasi
    def getnamaGarasi(self):
        return self.__namaGarasi

    # Set luasGarasi
    def setluasGarasi(self, luasGarasi):
        self.__luasGarasi = luasGarasi

    # Get luasGarasi
    def getluasGarasi(self):
        return self.__luasGarasi
    
     # Get motorcycle list
    def get_motorcycleList(self):
        return self.__motorcycleList

    # Method tambah motorcycle
    def add_motorcycle(self, motorcycle):
        self.__motorcycleList.append(motorcycle)

    # Method hapus motorcycle
    def remove_motorcycle(self, motorcycle):
        self.__motorcycleList.remove(motorcycle)

    # Get car list
    def get_carList(self):
        return self.__carList

    # Method tambah car
    def add_car(self, car):
        self.__carList.append(car)

    # Method hapus car
    def remove_car(self, car):
        self.__carList.remove(car)