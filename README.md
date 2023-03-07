# LATIHAN4DPBO2023
### Saya Rachman Faiz Maulana NIM 2106791 mengerjakan Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
* **Mahasiswa**: NIM, nama, jenis_kelamin, fakultas
* **Human**: NIK, nama, jenis_kelamin
* **SivitasAkademik**: asal_universitas, email_edu
* **Dosen**: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian
* **Course**: nama_matakuliah
* **Program Studi**: nama_prodi, kode, course

## Desain Program

Desain relasi algoritma menggunakan class diagram:

![latian3 drawio](https://user-images.githubusercontent.com/100756074/222103661-a30c9885-a560-4035-8e47-3fd73bde6caa.png)

Terdapat 6 kelas dalam program yang dibuat:

1. Kelas Human, kelas ini digunakan untuk mempresentasikan objek sebagai manusia, dimana terdapat atribut berupa NIK, Nama, dan Jenis Kelamin. Kelas ini menjadi kelas utama dari kelas lainnya yang memiliki objek sama yaitu manusia.

2. Kelas Sivitas Akademik, kelas ini digunakan untuk mempresentasikan objek sebagai sekelompok orang yang aktif di lingkup akademi, dimana ada dua atribut yaitu asal universitas dan email universitas. Kelas ini merupakan anak dari kelas Human.

3. Kelas Mahasiswa, kelas ini digunakan untuk mempresentasikan objek sebagai mahasiswa, dimana ada beberapa atribut yang yang mencirikan sebagai mahasiswa yaitu NIM, Program Studi, dan Fakultas. Kelas ini merupakan anak dari kelas sivitas akademik, karena mahasiswa merupakan bagian dari kelompok sivitas akademik.

4. Kelas Dosen, Kelas ini mempresentasikan objek sebagai dosen, dimana terdapat beberapa atribut yaitu NIP, Fakultas, Program Studi, Pendidikan Terakhir, dan Keahlian. Kelas ini merupakan anak dari kelas Sivitas akademik karena sivitas akademik terdiri dari mahasiswa dan dosen.

5. Kelas Course, kelas ini mempresentasikan sebagai mata kuliah yang ada di sebuah universitas, dimana ada beberapa atribut yang ada di kelas ini yaitu Nama Matkul, Nama Dosen (Dosen yang mengajar), dan ListMhs (Daftar Mahasiswa yang mengontrak matkul tersebut). Kelas ini melakukan composite ke kelas mahasiswa untuk mengisi dari atribut ListMhs.

6. Kelas Prodi, kelas ini mempresentasikan program studi yang ada di universitas, dimana atribut yang ada di kelas ini adalah Nama Prodi, Kode Prodi, ListMatkul (Berisi daftar mata kuliah yang ada di prodi tersebut) dan composite kelas Course untuk mengisi list matkul.


## Alur Program

Pada program ini inputan dilakukan secara manual, dan output yang diberikan berupa mata kuliah yang berisi dosen, daftar mahasiswa yang mengontrak, dan informasi prodi dengan mata kuliah apa saja yang ada di prodi itu.

## Dokumentasi

- List Daftar Matkul

![ss2](https://user-images.githubusercontent.com/100756074/223350111-236be12f-431b-4c29-964d-7287edaad7a1.png)

![ss1](https://user-images.githubusercontent.com/100756074/223350122-8805c6cc-a81e-45ea-ab07-e1aad41f4d9a.png)

- List Prodi dan Matkul yang Ada
- 
![ss3](https://user-images.githubusercontent.com/100756074/223350500-0ee6d4ff-9fbc-4fca-93df-548794743c40.png)
