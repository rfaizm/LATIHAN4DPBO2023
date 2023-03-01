from Dosen import Dosen
from Mahasiswa import Mahasiswa

class Course:
    __matkul = ""
    __dosen = ""
    

    def __init__(self, matkul = "", dosen = Dosen(), mahasiswa = Mahasiswa()):
        self.__mahasiswa = []
        self.__matkul = matkul
        self.__dosen = dosen
        self.__mahasiswa.append(mahasiswa)
    
    # setter getter matkul
    def setMatkul(self, matkul):
        self.__matkul = matkul

    def getMatkul(self):
        return self.__matkul
    
    # setter getter dosen
    def setDosen(self, dosen):
        self.__dosen = dosen

    def getDosen(self):
        return self.__dosen
    
    # setter getter mahasiswa
    def tambah_Mahasiswa(self, mahasiswa):
        self.__mahasiswa.append(mahasiswa)
    
    def getMahasiswa(self):
        return self.__mahasiswa
    
    
    # Method
    def printListCourse(self):
        print("Mata Kuliah : " + self.__matkul)
        self.__dosen.printDosen()
        print("")
        print("")
        print("Daftar Mahasiswa: ")
        for coba in self.__mahasiswa:
            coba.printMahasiswa()
            print("")
            
    
    def printCourse(self):
        print("Mata Kuliah : " + self.__matkul)
