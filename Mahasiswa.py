from Sivitas import Sivitas

class Mahasiswa(Sivitas):
    __nim = ""
    __fakultas = ""

    def __init__(self, nik = "", nama = "", gender = '',kampus="", email="", nim ="", fakultas=""):
        super().__init__(nik,nama,gender,kampus, email)
        self.__nim = nim
        self.__fakultas = fakultas
    
    # Getter
    # NIM
    def getNim(self):
        return self.__nim
    
    # Fakultas
    def getFakultas(self):
        return self.__fakultas
    
    # Setter
    # NIM
    def setNim(self, nim):
        self.__nim = nim
    
    # Fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
    
    # Method
    def printMahasiswa(self):
        print("Nama : " + str(self.getNama()))
        print("Gender : " + self.getGender())
        print("NIM : " + str(self.__nim))
        print("Fakultas : " + str(self.__fakultas))