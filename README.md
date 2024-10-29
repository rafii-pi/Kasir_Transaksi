
## 💻 Fundamental & Algoritma Pemrograman
Program ini ialah sebagai bentuk Ujian Tengah semester 1 bagian 2 mata kuliah fundamental programming yaitu membuat program kasir sederhana menggunakan bahasa C dengan ketentuan soal sebagai berikut.

## 📑 Deskripsi Soal
Buatlah Program **Rental Mobil Sport Que** yang menampilkan **id transaksi, tanggal transaksi, Status, id member, nama customer, nomor kendaraan, type mobil, harga sewa, lama sewa dan jumlah bayar** dengan ketentuan sebagai berikut : 
```bash
- id_transaksi      : (input user)
- tanggal_transaksi : (input user)
- status            : Member/Umum(input user memilih)
- id_member         : (jika ada)
- nama_customer     : (input user)
- nomor kendaraan   : (input user)
- jenis_mobil_sport : Hot Hatch/Sedan Sport/Grand Tourer/Muscle (input user memilih)
```
Dengan ketentuan harga sewa type mobil sewa/hari yaitu :
```bash
- ketentuan_harga_sewa
|---|-------------------------------|
|No |  Type Mobil  |   Harga Sewa   |
|---|-------------------------------|
| 1 | Hot Hatch    | Rp.3.500.000,- |
| 2 | Sedan Sport  | Rp.4.000.000,- |
| 3 | Grand Tourer | Rp.5.500.000,- |
| 4 | Muscle       | Rp.6.000.000,- |
|-----------------------------------|
```
Kemudian kita diminta untuk mencatat lama pinjam mobil sport per/hari.
```bash
- lama_pinjam(hari) : (input user)
```
Setelah lama_pinjam terdata, kita melakukan operasi hitung untuk menghitung total biaya sewa. Yaitu dengan rumus :
```bash
- total_sewa = harga_sewa(hari) * lama_pinjam
```
Kemudian kita menentukan diskon berdasarkan lama peminjaman per/hari Dengan ketentuan harga diskon sewa type mobil sewa/hari yaitu :
```bash
- ketentuan_diskon  --> lama_pinjam(N)
|----------------------------------|
|  Lama Pinjam(hari)  |   Diskon   |
|----------------------------------|
|      N < 3 hari     |  Tidak Ada |
|      3 - 5 hari     |     5%     |
|      N > 5 hari     |    10%     |
|----------------------------------|
```
Setelah semua data complete, kita melakukan operasi hitung untuk menghitung harga total sewa yagn sudah dimasukkan dengan diskon. Yaitu dengan rumus :
```bash
- jumlah_bayar = total_sewa - diskon
```
Kurang lebih tampilan output/struk nya seperti berikut
```bash
|-----------------------------------|
|        # Data Transaksi #         |
|  ID Transaksi      : 001          |
|  Tanggal Transaksi : 29/10/2024   |
|  Status Member     : Member       |
|  ID Member         : 1105         |
|  Nama Penyewa      : Anonim Cuyy  |
|  Nomor Kendaraan   : 1023         |
|  Jenis Mobil       : Hot Hatch    |
|  Lama Pinjam       : 6 Hari       |
|  Total Sewa        : Rp.21000000  |
|  Diskon Pinjam     : 10 persen    |
|  Jumlah Bayar      : Rp.18900000  |
|-----------------------------------|
```
Setelah mengerti konsep, terapkan menggunakan bahasa **C**. Selalu hati-hati dan teliti dalam penulisan program, goodluck><
```bash
  🦫 it's only college assignment :)
```
## Authors

- [@rafii-pii](https://github.com/rafii-pi)


