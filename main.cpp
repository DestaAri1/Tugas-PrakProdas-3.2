/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n, sn, un;
    char yn;
    string up = "==================================================\n";
do {
    cout << up;
    cout << "\t\tPROGRAM DERET ANGKA"<<endl;
    cout << up;
    cout << " Menghitung Jumlah Deret 3, 7, 11, 15, ..."<< endl;
    cout << " a=3,\tb=4"<<endl;
    cout << " Masukkan Deret Aritmatika ke-"; cin >> n;
    cout << endl<<endl;
    sn = n*(2*n+1);
    un = 3+(n-1)*4;
    cout << " Suku yang anda pilih adalah suku ke-"<<n<<" dengan nilai "<<un<<""<<endl;
    cout << " Jadi Jumlah Totalnya Yaitu " << sn;
    cout << endl<<endl;
    cout << up;
    cout << " Apakah Anda Ingin Mencoba Lagi? [Y/N]? ";
    cin >> yn;
}
    while ((yn=='Y')||(yn=='y'));
    cout<<endl<<endl;
    cout << "***********TERIMAKASIH***********";
    return 0;
}


