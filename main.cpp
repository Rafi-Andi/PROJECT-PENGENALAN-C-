#include <iostream>
#include <string>  // Tambahkan header untuk tipe string

// Fungsi untuk meminta input nama pengguna
int nama() {
    std::string nama;
    std::cout << "Isi nama anda disini: ";
    std::cin >> nama;
    std::cout << "\n[]" << std::endl;
    std::cout << "     Halo " << nama << ", selamat datang di Kalkulator BMI kami!\n";  
    std::cout << "[]" << std::endl;
    return 0;
}

int main() {
    double usia, berat, tinggi, bmi, target_bmi, target_berat;
    std::string kategori_bmi;  // Ubah tipe kategori_bmi menjadi string
    std::string kategori_usia;
    char pilihan;
    std::cout << "[==========================]" << std::endl;
    std::cout << "[SELAMAT DATANG DISMART BMI]" << std::endl;
    std::cout << "[==========================]\n" << std::endl;


    
    // Memanggil fungsi nama
    nama();

    std::cout << "\n-----------------------------------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Tolong isi Usia, tinggi badan dan berat badan anda di bawah ini yaaa Usahakan isi seperti yang sudah kami beri contoh!!" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------------------------------------" << std::endl;

    
    //Input Usia
    std::cout << "\nMasukkan usia anda (dalam tahun): ";
    std::cin >> usia;
    // Meminta pengguna memasukkan berat badan dalam kg
    std::cout << "Masukkan berat badan dalam kg: ";
    std::cin >> berat;

    // Meminta pengguna memasukkan tinggi badan dalam meter
    std::cout << "Masukkan tinggi badan dalam meter: ";
    std::cin >> tinggi;

    // Menghitung BMI
    bmi = berat / (tinggi * tinggi);

    // Menampilkan hasil BMI    
    if (usia < 17) {
        kategori_usia = "anak-anak";
    } else if (usia >= 17 && usia <49 ) {
        kategori_usia = "dewasa";
    } else {
        kategori_usia = "lansia";
    }

    std::cout << "\n===================================================================================================================================" << std::endl;
    std::cout << "Usia anda dalam kategori: " << kategori_usia << std::endl;

    if (bmi < 18.5) {
        kategori_bmi = "Kekurangan Berat Badan";
        std::cout << "Anda tergolong dalam kategori: " << kategori_bmi << std::endl;
        std::cout << "Saran: Anda mungkin perlu menambah berat badan. Konsultasikan dengan ahli gizi untuk mengetahui pola makan yang sehat dan seimbang." << std::endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        kategori_bmi = "Normal";
        std::cout << "Anda tergolong dalam kategori: " << kategori_bmi << std::endl;
        std::cout << "Saran: Anda berada di berat badan yang sehat! Tetap jaga pola makan yang seimbang dan aktif berolahraga." << std::endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        kategori_bmi = "Kelebihan Berat Badan";
        std::cout << "Anda tergolong dalam kategori: " << kategori_bmi << std::endl;
        std::cout << "Saran: Anda sedikit kelebihan berat badan. Pertimbangkan untuk mengadopsi gaya hidup lebih aktif dan memperhatikan pola makan." << std::endl;
    } else {
        kategori_bmi = "Obesitas";
        std::cout << "Anda tergolong dalam kategori: " << kategori_bmi << std::endl;
        std::cout << "Saran: Anda berada dalam kategori obesitas. Penting untuk segera berkonsultasi dengan dokter atau ahli gizi untuk menangani masalah ini dan mengurangi risiko kesehatan." << std::endl;
    }
    std::cout << "===================================================================================================================================" << std::endl;

    std::cout << "\nApakah Anda ingin mencapai target BMI tertentu? (y/n): ";
    std::cin >> pilihan;

    if (pilihan == 'y' || pilihan == 'Y'){
        std::cout << "BMI Normal untuk anak - anak dan dewasa adalah 18.5 - 24.9, dan 22 - 27 untuk lansia" << std::endl;
        std::cout << "Silakan masukkan target BMI yang Anda inginkan: ";
        std::cin >> target_bmi; 
        // Menghitung target berat badan
        target_berat = target_bmi * (tinggi * tinggi);
        std::cout << "Untuk mencapai BMI " << target_bmi << ", berat badan Anda harus menjadi: " << target_berat << " kg." << std::endl;
    } else if (pilihan == 'n' || pilihan == 'N'){
        std::cout << "Terima kasih telah menggunakan Kalkulator BMI kami!" <<std::endl;
    } else {
        std::cout << "Pilihan tidak valid. Silakan pilih 'y' atau 'n' " << std::endl; 
    }

    return 0;
}
