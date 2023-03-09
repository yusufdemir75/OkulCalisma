#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

double ortalamaHesapla(double vize, double final) {
    double ortalama = (vize * 0.4) + (final * 0.6);
    return ortalama;
}
int main() {



    // Sýralý verilen iki diziyi birleþtiren program kodu
    int dizi1[] = { 1,6,3,5,9 };
    int s1 = sizeof(dizi1) / sizeof(dizi1[0]);

    int dizi2[] = { 4,2,7,8 };
    int s2 = sizeof(dizi2) / sizeof(dizi2[0]);

    vector<int> dizi3(s1 + s2);

    int i = 0, j = 0, k = 0;

    while (i < s1 && j < s2) {
        if (dizi1[i] <= dizi2[j]) {
            dizi3[k] = dizi1[i];
            i++;
        }
        else {
            dizi3[k] = dizi2[j];
            j++;
        }
        k++;
    }
    while (i < s1) {
        dizi3[k] = dizi1[i];
        i++;
        k++;
    }

    while (j < s2) {
        dizi3[k] = dizi2[j];
        j++;
        k++;
    }

    cout << "Son dizinin Uzunlugu : ";
    for (int a = 0; a < s1 + s2; a++) {
        cout << dizi3[a];
    }
    std::cout << std::endl;


    //Sýralanmýþ bir diziden yinelenmiþ olan sayýlarý kaldýran program
    int dizi_1[] = { 0,0,1,1,2,3,2,4,5,6,6 };
    int n = sizeof(dizi_1) / sizeof(dizi_1[0]);

    std::vector<int> dizi_2;

    for (int i = 0; i < n; i++) {
        if (std::find(dizi_2.begin(), dizi_2.end(), dizi_1[i]) == dizi_2.end()) {
            dizi_2.push_back(dizi_1[i]);
        }
    }

    std::cout << "Yeni dizi: ";
    for (int i = 0; i < dizi_2.size(); i++) {
        std::cout << dizi_2[i] << " ";
    }
    std::cout << std::endl;


    //Klavyeden -1 giriline kadar, girilen sayýlarýn ortalamalarýný gösteren program

    int count = 0;  
    int sum = 0;    
    int number;     

    std::cout << "Sayilari girin (-1 girerek sonlandirin):" << std::endl;

    while (true) {
        std::cin >> number;
        if (number == -1) {
            break;
        }

        count++;
        sum += number;
    }

    if (count == 0) {
        std::cout << "Girilen sayi yok" << std::endl;
        return 0;
    }

    double average = static_cast<double>(sum) / count;
    std::cout << "Girilen sayilarin ortalamasi: " << average << std::endl;





    //Vize ve Final notu girilen öðrencinin ortalamasýný hesaplayan program


    double vize, final, ortalama;
    cout << "Lutfen vize notunu girin: ";
    cin >> vize;
    cout << "Lutfen final notunu girin: ";
    cin >> final;



    ortalama = ortalamaHesapla(vize, final);
    cout << "Ortalamaniz: " << ortalama << endl;



    return (0);



}
