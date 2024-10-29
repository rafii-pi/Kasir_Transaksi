#include <stdio.h>

char tanggal_transaksi[11], nama_penyewa[100], status[11];
int id_transaksi, no_kendaraan, jenis_mobil, total_sewa, jumlah_bayar, kembalian, lama_pinjam, diskon_mobil, id_member, status_mem;

int mobil(){
	int sewa;
	
	printf("Pilih Mobil(1/2/3/4)\t: ");
    scanf("%d", &jenis_mobil);
    
    printf("Lama Sewa (hari)\t: ");
    scanf("%d", &lama_pinjam);
    
    if(jenis_mobil == 1){
    	sewa = 3500000 * lama_pinjam;
    	total_sewa = sewa;
	}
	else if(jenis_mobil == 2){
		sewa = 4000000 * lama_pinjam;
		total_sewa = sewa;
	}
	else if(jenis_mobil == 3){
		sewa = 5500000 * lama_pinjam;
		total_sewa = sewa;
	}
	else if(jenis_mobil == 4){
		sewa = 6000000 * lama_pinjam;
		total_sewa = sewa;
	}
}
int diskon(){
	if(lama_pinjam < 3){
		diskon_mobil = 0;
		jumlah_bayar = total_sewa;
	}
	else if(lama_pinjam <= 5){
		diskon_mobil = 5;
		jumlah_bayar = total_sewa - (total_sewa * 5 / 100);
	}
	else{
		diskon_mobil = 10;
		jumlah_bayar = total_sewa - (total_sewa * 10 / 100);
	}
	
}

int main(){
	
	printf("|-------------------------------------------------|\n");
	printf("|  SELAMAT DATANG DI TOKO RENTAL MOBIL SPORT QUE  |\n");
	printf("|-------------------------------------------------|\n\n");
	
	printf("ID Transaksi\t : ");
    scanf("%d", &id_transaksi);
    getchar();
    
    printf("Tanggal Transaksi\n(dd/mm/yyyy)\t : ");
    fgets(tanggal_transaksi, sizeof(tanggal_transaksi), stdin);
    
    printf("ID Member\t : ");
    scanf("%d", &id_member);
    getchar();
    
    printf("Nama Penyewa\t : ");
    fgets(nama_penyewa, sizeof(nama_penyewa), stdin);
    
    printf("Nomor Kendaraan\t : ");
    scanf("%d", &no_kendaraan);
    getchar();
    
    //printf("Status Member\t : ");
    //fgets(status, sizeof(status), stdin);
    
    printf("\nStatus Member\n1.Member\n2.Umum\nPilih Status(1/2): ");
    scanf("%d",&status_mem);    
    
    printf("\n------------------------------------\n");
    printf("|NO|  TYPE MOBIL  |   HARGA SEWA   |\n");
    printf("-----------------------------------|\n");
    printf("|1 | Hot Hatch    | Rp.3.500.000,- |\n");
    printf("|2 | Sedan Sport  | Rp.4.000.000,- |\n");
    printf("|3 | Grand Tourer | Rp.5.500.000,- |\n");
    printf("|4 | Muscle       | Rp.6.000.000,- |\n");
    printf("------------------------------------\n");
    //print sewa tipe mobil dibawah rumus
    mobil();
    diskon();
    printf("\n----------------------------------------------");
    //output
    printf("\n\n");
    printf("# Data Transaksi #\n");
    printf("ID Transaksi\t  : %d\n",id_transaksi);
    printf("Tanggal Transaksi : %s\n",tanggal_transaksi);
    if(status_mem == 1){
    	printf("Status Member\t  : Member\n",status_mem);
	}
	else{
		printf("Status Member\t  : Umum\n",status_mem);
	}
    printf("ID Member\t  : %d\n",id_member);
    printf("Nama Penyewa\t  : %s",nama_penyewa);
    printf("Nomor Kendaraan\t  : %d\n",no_kendaraan);
    if(jenis_mobil == 1){
    	printf("Jenis Mobil\t  : Hot Hatch\n");
	}
	else if(jenis_mobil == 2){
    	printf("Jenis Mobil\t  : Sedan Sport\n");
	}
	else if(jenis_mobil == 3){
    	printf("Jenis Mobil\t  : Grand Tourer\n");
	}
	else{
    	printf("Jenis Mobil\t  : Muscle\n");
	}
    printf("Lama Pinjam\t  : %d Hari\n",lama_pinjam);
    printf("Total Sewa\t  : Rp.%d\n",total_sewa);
    printf("Diskon Pinjam\t  : %d persen\n",diskon_mobil);
    printf("Jumlah Bayar\t  : Rp.%d\n",jumlah_bayar);
    
}