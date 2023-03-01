class Human :
    __nik = ""
    __nama = ""
    __gender = ''

    def __init__(self, nik = "", nama = "", gender = ''):
        self.__nik = nik
        self.__nama = nama
        self.__gender = gender

    # Getter 
    # NIK
    def getNik(self):
        return self.__nik
    
    # Nama
    def getNama(self):
        return self.__nama
    
    # Gender
    def getGender(self):
        return self.__gender
    
    # Setter
    # NIK
    def setNik(self, nik):
        self.__nik = nik

    # Nama
    def setNama(self, nama):
        self.__nama = nama

    # Gender
    def setGender(self, gender):
        self.__gender = gender
    