from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Course import Course
from ProgramStudi import ProgramStudi

orang1 = Mahasiswa("321.120.777", "Rachman", 'L', "UPI", "unknown@upi.edu", "2106791", "FPMIPA")
orang2 = Mahasiswa("321.120.999", "Faiz", 'L', "ITB", "unknown@itb.edu", "2445567", "FPMIPA")
orang3 = Mahasiswa("321.120.000", "Maulana", 'L', "UNPAD", "unknown@unpad.edu", "21334454", "FPMIPA")
orang4 = Mahasiswa("321.121.129", "Dia", 'P', "UPI", "unknown@unpad.edu", "21334454", "FPMIPA")

guru1 = Dosen("320.111.189", "Rosa", 'P', "UPI", "unknown@upi.edu", "1289012", "FPMIPA", "S2", "Coding")


pel = Course("Alpro1", guru1, orang1)
pel.tambah_Mahasiswa(orang2)
pel.tambah_Mahasiswa(orang3)

print("==============================")
pel.printListCourse()
print("==============================")

pel2 = Course("Alpro2", guru1, orang1)
pel2.tambah_Mahasiswa(orang2)
pel2.tambah_Mahasiswa(orang4)

print("==============================")
pel2.printListCourse()
print("==============================")

kuliah = ProgramStudi("Ilmu Komputer", "IK", pel)
kuliah.tambah_pel(pel2)

print("==============================")
kuliah.printProdi()
print("==============================")

