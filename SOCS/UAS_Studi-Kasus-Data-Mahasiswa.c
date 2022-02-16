#include <stdio.h>
#include <stdlib.h>

/*  
    Raiza Rahman - 2501985211
    Ujian Akhir Semester - Algorithm & Programming
    Studi kasus tipe soal A
*/

/*  
    - Program harus dapat menyimpan setidaknya nilai dari 2 mata kuliah
    - Untuk tiap mata kuliah, program harus dapat menyimpan dan menampilkan rincian data nilai tiap mahasiswa
    - Nilai tiap mahasiswa pada tiap mata kuliah dimasukkan satu-satu. Program harus juga dapat mengubah nilai yang sudah tersimpan.
    - Program harus dapat menampilkan data nilai seluruh mahasiswa pada suatu mata kuliah yang diurutkan berdasarkan NIM
    - Program harus berjalan terus hingga user memberikan input untuk menghentikan program
*/

// Declare variabel i sebagai index array
int i = 0;

// Declare variabel total sebagai variabel penghitung jumlah data yang sudah diinputkan oleh user
int total = 0;

// Struct data untuk variabel data mahasiswa
struct data{
    // Variabel nim untuk data nim yang disimpan dengan tipe data long long integer
    long long int nim;

    /*  Variabel alpro untuk nilai Algorithm & Programming
        Variabel pdm untuk nilai Program Design & Methods
        Variabel stat untuk nilai Basic Statistics
        Variabel disc untuk nilai Discrete Mathematics
        Variabel alg untuk nilai Linear Algebra
    */
    int alpro, pdm, stat, disc, alg;
};

// Declare variabel struct data dengan kapasitas 10 array
struct data data[10];

// Fungsi untuk menukar posisi dua nilai yang digunakan di algoritma sorting
int swap(struct data *x, struct data *y){
    // Declare variabel struct temp untuk variabel sementara
    struct data temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

// Prosedur sorting yang digunakan untuk mengurutkan data-data secara ascending
void sort(){

    for(int i = 0; i < total; i++){
        for(int j = i+1; j < total; j++){
            if(data[i].nim > data[j].nim){
                // Pemanggilan fungsi swap untuk menukar posisi dua nilai
                swap(&data[i], &data[j]); 
            }
        }
    }
}

// Fungsi binary searching yang digunakan saat user memilih menu edit dan show
int search(struct data data[], long long int key){
    total = 0;

    // Membuka file database.txt dengan mode r untuk membaca isi file
    FILE *grade = fopen("database.txt", "r");

    // Looping untuk membaca data-data yang ada di dalam file database.txt
    while(!feof(grade)){
        fscanf(grade, " %lld#%d#%d#%d#%d#%d\n", &data[total].nim, &data[total].alpro, &data[total].pdm, &data[total].stat, &data[total].disc, &data[total].alg);
        total++;
    }

    // Declare variabel untuk menentukan posisi kiri dan kanan pada array yang digunakan saat pembagian array menjadi dua pada proses searching
    long int left = 0, right = total;

    /* Karena data sudah disort tiap menampilkan data, maka di fungsi ini tidak butuh sorting lagi */ 

    while(left <= right){
        // Declare variabel mid, yaitu variabel yang berada di tengah array saat pembagian array menjadi dua bagian
        int mid = left + (right - left) / 2;

        // Jika nilai key berada di bagian tengah
        if(data[mid].nim == key){
            return mid;
        }
        // Jika nilai mid lebih kecil dibanding nilai key
        if(data[mid].nim < key){
            left = mid + 1;
        // Jika nilai mid lebih besar dibanding nilai key
        }else{
            right = mid - 1;
        }
    }

    return -1;

    // Penutupan file
    fclose(grade);

}

// Prosedur untuk menampilkan data yang ada di dalam file database.txt + pengurutan secara ascending
void showsorting(){

    /* 
        Membuka file database.txt dengan mode r untuk membaca isi file
        Menggunakan mode r karena membaca data di dalam file
    */
    FILE *grade = fopen("database.txt", "r");

    // Variabel count untuk menandakan urutan data saat menampilkan data
    int count = 1;

    // Variabel total untuk menyimpan jumlah data
    total = 0;

    // Membaca data yang ada di dalam file database.txt
    while(!feof(grade)){
        fscanf(grade, " %lld#%d#%d#%d#%d#%d\n", &data[total].nim, &data[total].alpro, &data[total].pdm, &data[total].stat, &data[total].disc, &data[total].alg);
        total++;
    }

    // Pemanggilan prosedur sort untuk mengurutkan data secara ascending
    sort();

    // Menutup file database.txt
    fclose(grade);

    /* 
        Membuka file database.txt dengan mode w untuk memasukkan data ke dalam file
        Menggunakan mode w agar data sebelumnya ter-overwrite dengan data yang sudah disorting
    */
    fopen("database.txt", "w");

    // Looping untuk menulis ulang data yang sudah diurut ke dalam file
    for(int j = 0; j < total; j++){
        fprintf(grade, "%lld#%d#%d#%d#%d#%d\n", data[j].nim, data[j].alpro, data[j].pdm, data[j].stat, data[j].disc, data[j].alg);
    }

    // Menutup file database.txt
    fclose(grade);

    // Menampilkan data NIM
    for(int j = 0; j < total; j++){
        printf("%d. %lld\n", count++, data[j].nim);
    }

}

// Fungsi untuk menambahkan data ke dalam file
int add(){

    /*
        Membuka file database.txt dengan mode append 
        Menggunakan mode append agar saat user menginput data tidak akan menimpa data yang sudah ada
    */
    FILE *grade = fopen("database.txt", "a");

    // Menu
    system("cls");
    printf("\tAdd Score\n");

    // Memasukkan data NIM mahasiswa
    printf("\n\nInsert NIM: ");
    scanf("%lld", &data[i].nim);

    // Memasukkan data nilai alpro
    printf("Algorithm & Programming: ");
    scanf("%d", &data[i].alpro);

    // Memaasukkan data nilai pdm
    printf("Program Design & Methods: ");
    scanf("%d", &data[i].pdm);

    // Memasukkan data nilai stat
    printf("Basic Statistics: ");
    scanf("%d", &data[i].stat);

    // Memasukkan data nilai diskrit
    printf("Discrete Mathematics: ");
    scanf("%d", &data[i].disc);

    // Memasukkan data nilai algebra
    printf("Linear Algebra: ");
    scanf("%d", &data[i].alg);

    // Memasukkan data yang sudah diinput user ke dalam file database.txt
    fprintf(grade, "%lld#%d#%d#%d#%d#%d\n", data[i].nim, data[i].alpro, data[i].pdm, data[i].stat, data[i].disc, data[i].alg);

    // Menutup file database.txt
    fclose(grade);

    // Variabel total ditambah satu untuk menghitung jumlah data yang diinput oleh user
    total++;

    // Variabel i ditambah satu untuk index array
    i++;

    printf("Success!\n");
    getchar();
    printf("Press enter to continue...");
    getchar();
    return 0;
}

// Prosedur untuk mengedit data nilai mahasiswa
void edit(){
    // Declare variabel key untuk input kata kunci yang akan dicari oleh user
    long long int key;

    // Declare variabel y untuk hasil dari searching
    int y = 0;

    // Menampilkan data NIM mahasiswa
    printf("List of NIM: \n");
    showsorting();

    // Meminta user untuk memasukkan NIM mahasiswa yang ingin diedit data nilainya
    printf("Insert NIM you want to edit: ");
    scanf("%lld", &key);

    y = search(data, key);

    /* 
        Membuka file database.txt dengan mode r+ untuk membaca dan menulis isi file
    */
    FILE *grade = fopen("database.txt", "r+");

    // Jika kata kunci tidak ditemukan
    if(y == -1){
        printf("NIM not found!\n");
        getchar();
        printf("Press enter to continue...\n");
        getchar();
    // Jika kata kunci ditemukan
    }else{
        printf("\tAdd Score\n");

        printf("NIM: ");
        scanf("%lld", &data[y].nim);

        // Mengubah data nilai alpro
        printf("Algorithm & Programming: ");
        scanf("%d", &data[y].alpro);

        // Mengubah data nilai pdm
        printf("Program Design & Methods: ");
        scanf("%d", &data[y].pdm);

        // Mengubah data nilai stat
        printf("Basic Statistics: ");
        scanf("%d", &data[y].stat);

        // Mengubah data nilai diskrit
        printf("Discrete Mathematics: ");
        scanf("%d", &data[y].disc);

        // Mengubah data nilai algebra
        printf("Linear Algebra: ");
        scanf("%d", &data[y].alg);

        // Menimpa data yang sudah dimasukkan oleh user ke dalam file
        fprintf(grade, "%lld#%d#%d#%d#%d#%d\n", data[y].nim, data[y].alpro, data[y].pdm, data[y].stat, data[y].disc, data[y].alg);

        // Menutup file database.txt
        fclose(grade);
    }

    // Menutup file database.txt
    fclose(grade);
}

// Fungsi untuk menampilkan data nilai mahasiswa
int show(){
    // Declare variabel key untuk input kata kunci yang akan dicari oleh user
    long long int key;

    // Declare variabel x untuk input menu, y untuk hasil dari searching
    int x, y;

    /* 
        Membuka file database.txt dengan mode r untuk membaca isi file
        Menggunakan mode r karena membaca data di dalam file
    */
    FILE *grade = fopen("database.txt", "r");

    // Jika file database.txt tidak ditemukan
    if(grade == NULL){
        system("cls");
        printf("File not found!\n");
        getchar();
        printf("Press enter to continue...\n");
        getchar();
        return 0;
    }

    // Menutup file database.txt
    fclose(grade);

    // Menu
    system("cls");

    printf("\tSubject:\n");
    printf("\n1. Algorithm & Programming\n");
    printf("2. Program Design & Methods\n");
    printf("3. Basic Statistics\n");
    printf("4. Discrete Mathematics\n");
    printf("5. Linear Algebra\n\n");

    // User memasukkan input yang akan dipilih
    printf("Select Subject Number: ");
    scanf("%d", &x);
    getchar();

    // Jika user memasukkan input 1
    if(x == 1){

        // Menampilkan data NIM mahasiswa
        system("cls");
        printf("\tList of NIM:\n\n");
        showsorting();

        // User memasukkan NIM yang akan dilihat nilainya
        printf("Input NIM to see Algorithm & Programming score: ");
        scanf("%lld", &key);

        // Hasil dari searching
        y = search(data, key);

        // Jika data tidak ditemukan
        if(y == -1){
            printf("NIM not found!\n");
        // Jika data ditemukan
        }else{
            printf("\nNIM: %lld\nScore: %d\n", data[y].nim, data[y].alpro);
        }

        getchar();
        printf("\n\tPress enter to continue...\n");
        getchar();
        return -1;

    // Jika user memasukkan input 2
    }else if(x == 2){

        // Menampilkan data NIM mahasiswa
        system("cls");
        printf("List of NIM:\n");
        showsorting();

        // User memasukkan NIM yang akan dilihat nilainya
        printf("Input NIM to see Program Design & Methods score: ");
        scanf("%lld", &key);

        // Hasil dari searching
        y = search(data, key);

        // Jika data tidak ditemukan
        if(y == -1){
            printf("NIM not found!\n");
        // Jika data ditemukan
        }else{
            printf("\nNIM: %lld\nScore: %d\n", data[y].nim, data[y].pdm);
        }
        
        getchar();
        printf("\n\tPress enter to continue...\n");
        getchar();
        return -1;

    // Jika user memasukkan input 3
    }else if(x == 3){

        // Menampilkan data NIM mahasiswa
        system("cls");
        printf("List of NIM:\n");
        showsorting();

        // User memasukkan NIM yang akan dilihat nilainya
        printf("Input NIM to see Basic Statistics score: ");
        scanf("%lld", &key);

        // Hasil dari searching
        y = search(data, key);

        // Jika data tidak ditemukan
        if(y == -1){
            printf("NIM not found!\n");
        // Jika data ditemukan
        }else{
            printf("\nNIM: %lld\nScore: %d\n", data[y].nim, data[y].stat);
        }
        
        getchar();
        printf("\n\tPress enter to continue...\n");
        getchar();
        return -1;

    // Jika user memasukkan input 4
    }else if(x == 4){

        // Menampilkan data NIM mahasiswa
        system("cls");
        printf("List of NIM:\n");
        showsorting();

        // User memasukkan NIM yang akan dilihat nilainya
        printf("Input NIM to see Discrete Mathematics score: ");
        scanf("%lld", &key);

        // Hasil dari searching
        y = search(data, key);

        // Jika data tidak ditemukan
        if(y == -1){
            printf("NIM not found!\n");
        // Jika data ditemukan
        }else{
            printf("\nNIM: %lld\nScore: %d\n", data[y].nim, data[y].disc);
        }
        
        getchar();
        printf("\n\tPress enter to continue...\n");
        getchar();
        return -1;

    // Jika user memasukkan input 5
    }else if(x == 5){

        // Menampilkan data NIM mahasiswa
        system("cls");
        printf("List of NIM:\n");
        showsorting();

        // User memasukkan NIM yang akan dilihat nilainya
        printf("Input NIM to see Linear Algebra score: ");
        scanf("%lld", &key);

        // Hasil dari searching
        y = search(data, key);

        // Jika data tidak ditemukan
        if(y == -1){
            printf("NIM not found!\n");
        // Jika data ditemukan
        }else{
            printf("\nNIM: %lld\nScore: %d\n", data[y].nim, data[y].alg);
        }
        
        getchar();
        printf("\n\tPress enter to continue...\n");
        getchar();
        return -1;

    // Jika user salah memasukkan input
    }else{
        printf("Invalid Input!\n");
        printf("Press any key to continue...\n");
        getchar();
        return 0;        
    }

    // Menutup file database.txt
    fclose(grade);

    printf("\tSuccess!\n");
    printf("\tPress enter key to continue...\n");
    getchar();

}

// Prosedur untuk menampilkan menu utama
void menu(){

    // Declare variabel x untuk variabel user memilih menu
    int x;

    // Looping secara terus-menerus sehingga menu akan berjalan terus-menerus hingga user memilih untuk keluar dari program
    while(1){

        // Menu
        system("cls");
        printf("\tGrade Report\n");
        printf("\t1. Add\n");
        printf("\t2. Edit\n");
        printf("\t3. Show\n");
        printf("\t4. Exit\n");

        // User memilih menu yang dipilih
        printf("\tInput Number: ");
        scanf("%d", &x);

        // Jika memilih menu pertama
        if(x == 1){

            // Program akan memanggil fungsi add untuk menambahkan data
            add();

        // Jika memilih menu kedua
        }else if(x == 2){

            // Program akan memanggil fungsi edit untuk mengedit data
            edit();

        // Jika memilih menu ketiga
        }else if(x == 3){

            // Program akan memanggil fungsi show untuk menampilkan data
            show();

        // Jika memilih menu keempat
        }else if(x == 4){

            // Keluar dari program
            system("cls");
            printf("Goodbye! Good to see you!\n");

            exit(1);
        
        // Jika user memasukkan input yang salah
        }else{

            // Program akan mengulangi menu
            system("cls");
            printf("\tInvalid Number!\n");
            getchar();
            printf("\tPress any key to continue...\n");
            getchar();
        }
    }
}

// Fungsi main
int main(){

    // Memanggil prosedur menu
    menu();

    return 0;
}