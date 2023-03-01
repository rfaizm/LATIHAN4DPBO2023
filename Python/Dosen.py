from Sivitas import Sivitas

class Dosen(Sivitas):
    __nip = ""
    __fakultas = ""
    __pendAkhir = ""
    __keahlian = ""

    def __init__(self, nik="", nama="", gender='', kampus="", email="", nip = "", fakultas = "", pendAkhir = "", keahlian = ""):
        super().__init__(nik, nama, gender, kampus, email)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pendAkhir = pendAkhir
        self.__keahlian
    
    # setter getter nip
    def setNIP(self, nip):
        self.__nip = nip
    
    def getNIP(self):
        return self.__nip
    
    # setter getter fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getFakultas(self):
        return self.__fakultas
    
    # setter getter pend akhir
    def setPendAkhir(self, pendAkhir):
        self.__pendAkhir = pendAkhir
    
    def getPendAkhir(self):
        return self.__pendAkhir
    
    # setter getter keahlian
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian
    
    def getKeahlian(self):
        return self.__keahlian
    
    # Method
    def printDosen(self):
        print("Nama : " + str(self.getNama()))
        print("Gender : " + self.getGender())
        print("NIP : " + str(self.__nip))
        print("Fakultas : " + str(self.__fakultas))
