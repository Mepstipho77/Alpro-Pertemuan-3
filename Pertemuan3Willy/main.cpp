#include <iostream>

using namespace std;

//tipe data fungsi, nama fungsi (parameter )
int max(int a,int b){
    if(a > b){
        cout << a << endl; // output bisa di ganti
        return a;
    } else {
        cout << b << endl;
        return b;
    }
}

int main()
{/*
    int x; //Deklarasi
    string  teks;

    cout<<"Masukan jumlah perulangan (x): ";
    cin>>x;

    cout<<"Masukan teks yang ingin di tampilkan: ";
    cin>>teks;

    for (int i=1;i<=x;i++){
        //cout<<teks<<endl;//tanpa nomor
        cout<<i<<". "<<teks<<endl;//ada nomor
    }

    int y;
    y = 10;

    if(x > y) {
        cout<<"X Anda Terlalu Banyak!!!"<<"\n";
    } else if (x < y) {
        cout<<"X anda PNP"<<"\n";
    } else {   // bisa juga else if (x == y)
        cout<<"X anda sama"<<"\n"
    }*/

int x = 5;
int y = 20;

/*if(x > y) {
    cout << x << " Lebih Dari " << y <<endl;
} else if (x < y) {
    cout << x << " Kurang dari " << y <<endl;
} else {
    cout << x << " sama dengan " << y <<endl;
}*/
for(int i = 0; i < 10; i++){
    x++;
    y++;
    max(x,y);
}





    return 0;
}
