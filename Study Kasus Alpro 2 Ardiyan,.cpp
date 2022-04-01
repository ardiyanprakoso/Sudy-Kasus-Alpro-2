#include <iostream>
using namespace std;
int main()
{
    int kode, price, jumlah, total, bayar, jarak, ongkir, gratis_ongkir, hasil_diskon, diskon, total_belanja, hasil;
        cout<<"            RUMAH MAKAN KITA            "<<endl;
        cout<<"========================================"<<endl;
        cout<<"________________________________________"<<endl;
        cout<<"|     Menu Makanan      |    Harga     |"<<endl;
        cout<<"|_______________________|______________|"<<endl;
        cout<<"|                       |              |"<<endl;
        cout<<"|   1. Ayam Geprek      |  Rp. 21.000  |"<<endl;
        cout<<"|   2. Ayam Goreng      |  Rp. 17.000  |"<<endl;
        cout<<"|   3. Udang Goreng     |  Rp. 19.000  |"<<endl;
        cout<<"|   4. Cumi Goreng      |  Rp. 20.000  |"<<endl;
        cout<<"|   5. Ayam Bakar       |  Rp. 25.000  |"<<endl;
        cout<<"|_______________________|______________|"<<endl;
        cout<<""<<endl;
        cout<<"Masukan Pilihan Anda : ";
        cin>>kode;
        switch (kode){
        case 1:
            cout<<'\n'<<"Ayam Geprek"<<endl;
            price=21000;
            cout<<"Masukan Jumlah Porsi : ";
            cin>>jumlah;
            total=price*jumlah;
            cout<<"Total Harga          : Rp. "<<total<<endl;
            break;
                
        case 2:
            cout<<'\n'<<"Ayam Goreng"<<endl;
            price=17000;
            cout<<"Masukan Jumlah Porsi : ";
            cin>>jumlah;
            total=price*jumlah;
            cout<<"Total Harga          : Rp. "<<total<<endl;
            break;
                   
        case 3:
            cout<<'\n'<<"Udang Goreng"<<endl;
            price=19000;
            cout<<"Masukan Jumlah Porsi : ";
            cin>>jumlah;
            total=price*jumlah;
            cout<<"Total Harga          : Rp. "<<total<<endl;
            break;
                               
        case 4:
            cout<<'\n'<<"Cumi Goreng"<<endl;
            price=20000;
            cout<<"Masukan Jumlah Porsi : ";
            cin>>jumlah;
            total=price*jumlah;
            cout<<"Total Harga          : Rp. "<<total<<endl;
            break;
                               
        case 5:
            cout<<'\n'<<"Ayam Bakar"<<endl;
            price=25000;
            cout<<"Masukan Jumlah Porsi : ";
            cin>>jumlah;
            total=price*jumlah;
            cout<<"Total Harga          : Rp. "<<total<<endl;
            break;
            default:
            cout<<"Kode Yang Anda Masukan Tidak Tersedia";
        } 
        
		cout<<""<<endl;
        cout<<"Masukkan Jarak Dari Lokasi Ke Tempat Tujuan Anda"<<endl;
        cin>> jarak;
        cout<<endl;
        if (jarak <= 3){
        	cout<<"Biaya Ongkir Yang Harus Anda Bayar"<<endl;
        	ongkir=15000;
        	cout<<"Sebesar Rp. "<<ongkir;
		}
        else if (jarak >= 3){
        	total = total + 25000;
        	cout<<"Biaya Ongkir Yang Harus Anda Bayar"<<endl;
        	ongkir=25000;
        	cout<<"Sebesar Rp. "<<ongkir;
		}
		
		cout<<"\nTotal = "<<total<<endl;
		cout<<"======================================\n";
		
		if (total > 25000 &&  total <= 50000){
			cout<<"Gratis Ongkir - 3000"<<endl;
			gratis_ongkir = 3000;
			hasil_diskon = ongkir - gratis_ongkir;
			diskon = 0;
			total_belanja = total - diskon;
			hasil = total - diskon + hasil_diskon;
			
		}
		else if (total > 50000 && total <= 150000){
	        cout<<"Gratis Ongkir Sebesar 15%"<<endl;
			gratis_ongkir = 5000;
			hasil_diskon = ongkir - gratis_ongkir;
			diskon = total * 0.15;
			total_belanja = total - diskon;
			hasil = total - diskon + hasil_diskon;
		}
		else if (total > 150000){
		    cout<<"Gratis Ongkir Sebesar 35%"<<endl;
			gratis_ongkir = 8000;
			hasil_diskon = ongkir - gratis_ongkir;
			diskon = total * 0.35;
			total_belanja = total - diskon;
			hasil = total - diskon + hasil_diskon;
	    }
	
	    cout<<"======================================"<<endl;
	    cout<<"          FACTUR PEMBAYARAN           "<<endl;
	    cout<<"======================================"<<endl;
	    cout<<"Kode Menu Yang di Pilih\t : "<<"\n"<<kode<<endl;
	    total=price*jumlah;
        cout<<"Total Harga          : Rp. "<<total<<endl;
	    cout<<"======================================"<<endl;
	    cout<<"JUMLAH       : Rp. "<<total<<endl;
	    cout<<"ONGK0S KIRIM : Rp. "<<ongkir<<endl;
		cout<<"DISKON       : Rp. "<<diskon<<endl;
		cout<<"GRATIS ONGKIR: Rp. "<<gratis_ongkir<<endl;
		cout<<"======================================"<<endl;
		cout<<"TOTAL        : Rp. "<<hasil<<endl;
        
        cout<<"Terima Kasih Atas Kunjungan Anda Di RUMAH MAKAN KITA";
        return 0;
}
