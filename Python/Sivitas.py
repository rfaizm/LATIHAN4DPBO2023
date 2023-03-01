from Human import Human

class Sivitas(Human):
    __kampus = ""
    __email = ""

    def __init__(self, nik="", nama="", gender='', kampus="", email=""):
        super().__init__(nik, nama, gender)
        self.__kampus = kampus
        self.__email = email        

    # Getter
    # Kampus
    def getKampus(self):
        return self.__kampus
    
    # Email
    def getEmail(self):
        return self.__email
    
    # Setter
    # Kampus
    def setKampus(self, kampus):
        self.__kampus = kampus
    
    # Email
    def setEmail(self, email):
        self.__email = email