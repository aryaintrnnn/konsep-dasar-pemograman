#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> antrian;
    int pilihan, bilangan;

    do{
        cout << "Pilihan Menu :\n";
        cout << "1. Tambah bilangan ke antrian.\n";
        cout << "2. Keluarkan bilangan dari antrian.\n";
        cout << "3. Menampilkan banyak bilangan di antrian.\n";
        cout << "4. Menampilkan semua bilangan di antrian.\n";
        cout << "5. Keluar dari program.\n";
        cout << "Menu yang di pilih :";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan bilangan yang ingin ditambahkan ke antrian : ";
            cin >> bilangan;
            antrian.push(bilangan);
            break;
        case 2:
            if(!antrian.empty()){
                cout << "Bilangan yang dikeluarkan dari antrian adalah : " << antrian.front() << endl;
                antrian.pop();
            }else{
                cout << "Antrian kosong.\n";
            }
            break;
        case 3:
            cout << "Banyak bilangan di antrian adalah : " << antrian.size() << endl;
            break;
        case 4:
            if(!antrian.empty()){
                cout << "Bilangan di antrian adalah : ";
                queue<int> antrian_salin = antrian;
                while (!antrian_salin.empty())
                {
                    cout << antrian_salin.front() << " ";
                    antrian_salin.pop();
                }
                cout << endl;
            }else{
                cout << "Antrian kosong.\n";
            }
            break;
        case 5:
            cout << "Terima kasih\nProgram ini dibuat oleh (220040273) Arya Ngurah Intaran\n";
            break;
        default:
            cout << "Pilihan tidak tersedia.\n";
            break;
        }
    }while(pilihan != 5);
    return 0;
}