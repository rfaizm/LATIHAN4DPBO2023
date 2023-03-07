#include "header.hh"

using namespace std;

int main(){
    Mahasiswa orang1("321.120.777", "Rachman", 'L', "UPI", "unknown@upi.edu", "2106791", "FPMIPA");
    Mahasiswa orang2("321.120.999", "Faiz", 'L', "ITB", "unknown@itb.edu", "2445567", "FPMIPA");
    Mahasiswa orang3("321.120.000", "Maulana", 'L', "UNPAD", "unknown@unpad.edu", "21334454", "FPMIPA");
    Mahasiswa orang4("321.121.129", "Dia", 'P', "UPI", "unknown@unpad.edu", "21334454", "FPMIPA");

    Dosen guru1("320.111.189", "Rosa", 'P', "UPI", "unknown@upi.edu", "1289012", "FPMIPA", "S2", "Coding");
    Dosen guru2("320.102.490", "Rani", 'P', "UPI", "unknown@upi.edu", "1280212", "FPMIPA", "S2", "Database");

    Course pel1("Alpro 1", guru1, orang1);
    pel1.addMahasiswa(orang2);
    pel1.addMahasiswa(orang3);

    Course pel2("Alpro 2", guru1, orang1);
    pel2.addMahasiswa(orang2);
    pel2.addMahasiswa(orang4);

    Course pel3("Basis Data", guru2, orang2);
    pel3.addMahasiswa(orang3);
    pel3.addMahasiswa(orang4);

    Prodi kuliah("Ilmu Komputer", "IK", pel1);
    kuliah.addCourse(pel2);
    kuliah.addCourse(pel3);

    cout << "=======================================" << endl;
    pel1.printListCourse();
    cout << "=======================================" << endl;
    cout << '\n';
    cout << "=======================================" << endl;
    pel2.printListCourse();
    cout << "=======================================" << endl;
    cout << '\n';
    cout << "=======================================" << endl;
    pel3.printListCourse();
    cout << "=======================================" << endl;
    cout << '\n';

    kuliah.printProdi();

    return 0;
}