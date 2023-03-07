#include "header.hh"

/* = => COURSE SECTION <= = */

/* KONSTRUKTOR */
Course::Course(){
    matkul = "";
}

Course::Course(string matkul, Dosen dosen, Mahasiswa murid){
    this->matkul = matkul;
    this->dosen = dosen;
    this->llistMurid.push_back(murid);
}

void Course::setMatkul(string matkul){
    this->matkul = matkul;
}

string Course::getMatkul(){
    return this->matkul;
}

void Course::setDosen(Dosen dosen){
    this->dosen = dosen;
}

Dosen Course::getDosen(){
    return this->dosen;
}

void Course::addMahasiswa(Mahasiswa murid){
    this->llistMurid.push_back(murid);
}

void Course::printListCourse(){
    cout << "Mata Kuliah            :" << this->matkul << endl;
    cout << "       Deskripsi Dosen     " << endl;
    cout << "===========================" << endl;
    this->dosen.printDosen();
    cout << "       Profil Mahasiswa     " << endl;
    cout << "============================" << endl;
    for(list<Mahasiswa>::iterator it = llistMurid.begin(); it != llistMurid.end(); it++){
        it->printMahasiswa();
        cout << '\n';
    }
}

void Course::printCourse(){
    cout << "Mata Kuliah    : " << this->matkul << endl;
}

Course::~Course(){

}

