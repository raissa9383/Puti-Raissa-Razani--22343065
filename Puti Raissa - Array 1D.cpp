#include <iostream>
using namespace std;

int main()
{
    int n, i;
    char name[20];
    float num[100], sum=0.0, average;

    cout << "Masukan nama siswa: ";
    cin >> name;

    cout << "Masukan banyak tugas siswa: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Masukan nilai tugas siswa: ";
        cin >> num[i];
        sum += num[i];
    }



    average = sum / n;
    cout << "\nRata-rata " << name << " adalah = " << average;

  if (average >= 75) {
    cout <<"\nSelamat, anda lulus!" << endl;
  }
  else {
    cout << "\nMaaf, anda harus mengikuti remedial" << endl;
  }

    return 0;
}
