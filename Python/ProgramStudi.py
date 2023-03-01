from Course import Course

class ProgramStudi:

    __namaProdi = ""
    __kodeProdi = ""
    __pel = []

    def __init__(self, namaProdi = "", kodeProdi = "", pel = Course()):
        self.__namaProdi = namaProdi
        self.__kodeProdi = kodeProdi
        self.__pel.append(pel)
    
    # setter getter nama prodi
    def setNamaProdi(self, namaProdi):
        self.__namaProdi = namaProdi
    
    def getNamaProdi(self):
        return self.__namaProdi
    
    # setter getter kode prodi
    def setKodeProdi(self, kodeProdi):
        self.__kodeProdi = kodeProdi
    
    def getKodeProdi(self):
        return self.__kodeProdi
    
    # setter getter course
    def tambah_pel(self, pel):
        self.__pel.append(pel)

    def getCourse(self):
        return self.__pel
    
    #Method
    def printProdi(self):
        print("Nama Prodi : ", self.__namaProdi)
        print("Kode Prodi : ", self.__kodeProdi)
        for coba in self.__pel:
            coba.printCourse()
