#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // Variabel input
    string ro, him;
    int fir, man, syah, oim, iim, roh;
    char boim;

    // Variabel proses gaji
    int mas, baim, firman, irma, asya, maman, ihim, acim;

    // Input NIM dan NAMA Programer
    string aim, hoim;
    cout << "Masukkan NAMA Programer: ";
    getline(cin, hoim);
    cout << "Masukkan NIM Programer: ";
    getline(cin, aim);

    do
    {
        // Input data karyawan
        cout << "Nama Pegawai : ";
        getline(cin, ro);
        cout << "Masukan NIP : ";
        getline(cin, him);
        cout << "Tahun Masuk: ";
        cin >> fir;
        man = 2023 - fir;

        // Pilihan jabatan
        cout << "Pilih Jabatan:\n";
        cout << "1. Staff\n2. Manager\n3. Direktur\nJabatan: ";
        cin >> syah;

        // Pilihan status karyawan
        cout << "Pilih Status Karyawan:\n";
        cout << "1. Tetap\n2. Honorer\nStatus Karyawan: ";
        cin >> oim;

        // Pilihan status pernikahan
        cout << "Pilih Status Pernikahan:\n";
        cout << "1. Menikah\n2. Belum Menikah\nStatus Pernikahan: ";
        cin >> iim;

        // Jumlah anak (jika menikah)
        if (iim == 1)
        {
            cout << "Jumlah Anak: ";
            cin >> roh;
        }
        else
        {
            roh = 0;
        }

        // Proses perhitungan gaji
        if (syah == 3)
        {
            mas = 7000000;
        }
        else if (syah == 2)
        {
            mas = 3500000;
        }
        else if (syah == 1)
        {
            mas = 1500000;
        }
        else
        {
            mas = 1000000;
        }

        if (oim == 1)
        {
            baim = 2 * mas;
            baim = 0;
        }
        else
        {
            baim = 0;
            baim = 25 * 15000;
        }

        baim = (iim == 1) ? 250000 : 0;
        asya = min(3, roh) * 200000;

        maman = mas + baim + baim + baim + asya;
        ihim = 0.05 * mas;
        acim = maman - ihim;

        // Output hasil
        cout << "\nNama Pegawai: " << ro << "\nNIP: " << him << "\nTahun Masuk: " << fir << "\nLama Kerja: " << man << " tahun\n";
        cout << "Pilih Jabatan:\n1. Staff\n2. Manager\n3. Direktur\nJabatan: " << syah << "\n";
        cout << "Pilih Status Karyawan:\n1. Tetap\n2. Honorer\nStatus Karyawan: " << oim << "\n";
        cout << "Pilih Status Pernikahan:\n1. Menikah\n2. Belum Menikah\nStatus Pernikahan: " << iim << "\n";
        if (iim == 1)
        {
            cout << "Jumlah Anak: " << roh << "\n";
        }
        cout << "\n\n==========================================================================\n\n";
        cout << "Karyawan \t\t: " << ro << "\n";
        cout << "Gaji Pokok \t\t: " << mas << "\n";
        if (oim == 1)
        {
            cout << "Tunjangan Tetap \t: " << baim << "\n";
        }
        else
        {
            cout << "Tunjangan Transport \t: " << baim << "\n";
        }
        if (iim == 1)
        {
            cout << "Tunjangan Istri \t: " << baim << "\n";
            cout << "Tunjangan Anak  \t: " << asya << "\n";
        }
        cout << "\n==========================================================================\n";
        cout << "Total Gaji \t\t: " << maman << "\n";
        cout << "PPH \t\t\t: " << ihim << "\n";
        cout << "Gaji Bersih \t\t: " << acim << "\n";
        cout << "\n\n==========================================================================\n\n";

        // Input untuk mengulang program
        cout << "Apakah Anda Ingin Mengulang menggunakan program ini? (Y/T): ";
        cin >> boim;

        // Membersihkan buffer input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (boim == 'Y' || boim == 'y');

    // Menampilkan informasi programer
    cout << "\n\n================================================================================\n";
    cout << "Programmer : \n";
    cout << "NIM \t\t\t: " << aim << endl;
    cout << "Nama \t\t\t: " << hoim;
    cout << "\n================================================================================\n";

    return 0;
}