#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Human{
    private:
        string nik;
        string nama;
        char gender;
    
    public:
        Human();
        Human(string nik, string nama, char gender);

        void setNIK(string nik);
        string getNIK();
        void setNama(string nama);
        string getNama();
        void setGender(char gender);
        char getGender();
        ~Human();
};

class Sivitas : public Human{
    private:
        string kampus;
        string email;
    public:
        Sivitas();
        Sivitas(string nik, string nama, char gender, string kampus, string email);

        void setKampus(string kampus);
        string getKampus();
        void setEmail(string email);
        string getEmail();
        ~Sivitas();
};

class Mahasiswa : public Sivitas{
    private:
        string nim;
        string fakultas;
    public:
        Mahasiswa();
        Mahasiswa(string nik, string nama, char gender, string kampus, string email, string nim, string fakultas);

        void setNIM(string nim);
        string getNIM();
        void setFakultas(string fakultas);
        string getFakultas();

        void printMahasiswa();
        ~Mahasiswa();
};

class Dosen : public Sivitas{
    private:
        string nip;
        string fakultas;
        string pend_akhir;
        string keahlian;
    public:
        Dosen();
        Dosen(string nik, string nama, char gender, string kampus, string email, string nip, string fakultas, string pend_akhir, string keahlian);

        void setNIP(string nip);
        string getNIP();
        void setFakultas(string fakultas);
        string getFakultas();
        void setPendAkhir(string pend_akhir);
        string getPendAkhir();
        void setKeahlian(string keahlian);
        string getKeahlian();

        void printDosen();
        ~Dosen();
};

class Course{
    private:
        string matkul;
        Dosen dosen;
        list<Mahasiswa> llistMurid;
    
    public:
        Course();
        Course(string matkul, Dosen dosen, Mahasiswa murid);

        void setMatkul(string matkul);
        string getMatkul();
        void setDosen(Dosen dosen);
        Dosen getDosen();
        void addMahasiswa(Mahasiswa murid);

        void printListCourse();
        void printCourse();
        ~Course();
};

class Prodi{
    private:
        string namaProdi;
        string kodeProdi;
        list<Course> llistCourse;
    public:
        Prodi();
        Prodi(string namaProdi, string kodeProdi, Course pel);

        void setNamaProdi(string namaProdi);
        string getNamaProdi();
        void setKodeProdi(string kodeProdi);
        string getKodeProdi();
        void addCourse(Course pel);

        void printProdi();
        ~Prodi();
};