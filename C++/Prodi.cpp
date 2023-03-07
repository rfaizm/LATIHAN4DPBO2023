#include "header.hh"

/*KONSTRUKTOR*/
Prodi::Prodi(){
    namaProdi = "";
    kodeProdi = "";
}

Prodi::Prodi(string namaProdi, string kodeProdi, Course pel){
    this->namaProdi = namaProdi;
    this->kodeProdi = kodeProdi;
    this->llistCourse.push_back(pel);
}

void Prodi::setNamaProdi(string namaProdi){
    this->namaProdi = namaProdi;
}

string Prodi::getNamaProdi(){
    return this->namaProdi;
}

void Prodi::setKodeProdi(string kodeProdi){
    this->kodeProdi = kodeProdi;
}

string Prodi::getKodeProdi(){
    return this->kodeProdi;
}

void Prodi::addCourse(Course pel){
    this->llistCourse.push_back(pel);
}

void Prodi::printProdi(){
    cout << "Nama Prodi     : " << this->namaProdi << endl;
    cout << "Kode Prodi     : " << this->kodeProdi << endl;
    cout << "       Daftar Course     " << endl;
    cout << "=========================" << endl;
    for(list<Course>::iterator it = llistCourse.begin(); it != llistCourse.end(); it++){
        it->printCourse();
    }
}

Prodi::~Prodi(){

}