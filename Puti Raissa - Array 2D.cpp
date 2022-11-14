#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Masukan banyak baris: ";
    cin >> r;

    cout << "Masukan banyak kolom: ";
    cin >> c;

    cout << endl << "Masukan Matrix pertama: " << endl;


    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "matrix 1" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }


    cout << endl << "Masukan Matrix kedua: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "matrix 2" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }



    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];



    cout << endl << "Hasil dari perhitungan: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
