#include "header.hh"

/* = => HUMAN SECTION <= = */

/* KONSTRUKTOR */

Human::Human(){
    nik = "";
    nama = "";
    gender = '-';
}

Human::Human(string nik, string nama, char gender){
    this->nik = nik;
    this->nama = nama;
    this->gender = gender;
}

/* Setter Getter */

void Human::setNIK(string nik){
    this->nik = nik;
}

string Human::getNIK(){
    return this->nik;
}

void Human::setNama(string nama){
    this->nama = nama;
}

string Human::getNama(){
    return this->nama;
}

void Human::setGender(char gender){
    this->gender = gender;
}

char Human::getGender(){
    return this->gender;
}

Human::~Human(){

}

/* Sivitas Section */

/* konstruktor */
Sivitas::Sivitas() : Human(){

}

Sivitas::Sivitas(string nik, string nama, char gender, string kampus, string email) : Human(nik, nama, gender){
    this->kampus = kampus;
    this->email = email;
}

/* setter getter */
void Sivitas::setKampus(string kampus){
    this->kampus = kampus;
}

string Sivitas::getKampus(){
    return this->kampus;
}

void Sivitas::setEmail(string email){
    this->kampus = kampus;
}

string Sivitas::getEmail(){
    return this->email;
}

Sivitas::~Sivitas(){

}

/* mahasiswa section*/

/* konstruktor */
Mahasiswa::Mahasiswa(){

}

Mahasiswa::Mahasiswa(string nik, string nama, char gender, string kampus, string email,
                    string nim, string fakultas) : Sivitas(nik, nama, gender, kampus, email){
    
    this->nim = nim;
    this->fakultas = fakultas;
}

void Mahasiswa::setNIM(string nim){
    this->nim = nim;
}

string Mahasiswa::getNIM(){
    return this->nim;
}

void Mahasiswa::setFakultas(string fakultas){
    this->fakultas = fakultas;
}

string Mahasiswa::getFakultas(){
    return this->fakultas;
}

void Mahasiswa::printMahasiswa(){
    cout << "Nama       : " << this->getNama() << endl;
    cout << "Gender     : " << this->getGender() << endl;
    cout << "Kampus     : " << this->getKampus() << endl;
    cout << "NIM        : " << this->nim << endl;
    cout << "Fakultas   : " << this->fakultas << endl;
}


Mahasiswa::~Mahasiswa(){

}

/* dosen section */

/* KONSTRUKTOR */
Dosen::Dosen(){

}

Dosen::Dosen(string nik, string nama, char gender, string kampus, string email, string nip, string fakultas, string pend_akhir, string keahlian)
            : Sivitas(nik, nama, gender, kampus, email){
    
    this->nip = nip;
    this->fakultas = fakultas;
    this->pend_akhir = pend_akhir;
    this->keahlian = keahlian;
}

void Dosen::setNIP(string nip){
    this->nip = nip;
}

string Dosen::getNIP(){
    return this->nip;
}

void Dosen::setFakultas(string fakultas){
    this->fakultas = fakultas;
}

string Dosen::getFakultas(){
    return this->fakultas;
}

void Dosen::setPendAkhir(string pend_akhir){
    this->pend_akhir = pend_akhir;
}

string Dosen::getPendAkhir(){
    return this->pend_akhir;
}

void Dosen::setKeahlian(string keahlian){
    this->keahlian = keahlian;
}

string Dosen::getKeahlian(){
    return this->keahlian;
}

void Dosen::printDosen(){
    cout << "Nama               : " << this->getNama() << endl;
    cout << "Gender             : " << this->getGender() << endl;
    cout << "Kampus             : " << this->getKampus() << endl;
    cout << "NIP                : " << this->nip << endl;
    cout << "Fakultas           : " << this->fakultas << endl;
    cout << "Pendidikan Akhir   : " << this->pend_akhir << endl;
    cout << "Keahlian           : " << this->keahlian << endl;
}

Dosen::~Dosen(){
    
}