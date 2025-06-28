#include <iostream>
using namespace std;
/******
Proje= Hesap makinesi
*****
Proje tanımı :
İki int sayı alıp bu sayılar üzerinden dört işlem yapacak.
işlemi seçimi için menü gözükecek ve sonuç ekrana yazılacak.
**/

int main() {
    // setlocale(LC_ALL, "turkish"); türkçe karakter görüntülemek için

    // Kulanıcıdan alağımımız sayılar, işlemler ve sonuç için değişken tanımı
    int num1, num2;
    char operation;
    float result;

    std::cout << "******** Calculator *******" << std::endl;
    std::cout <<""<<std::endl;

    // Kullanıcıdan sayı alma
    cout<<"Enter the first number\n";
    cin>>num1;
    cout<<"Enter the second number\n";
    cin>>num2;

    cout<<"Select the action you want to perform?(+, -, *, /)\n";
    cin>>operation;

    //işlemi seç ve hesapla
    switch (operation) {
        case '+':
        result=num1 + num2;
        cout<< "Result: " << result << endl;
        break;
        case '-':
        result=num1 - num2;
        cout<< "Result: " << result << endl;
        break;
        case '*':
        result=num1 * num2;
        cout<< "Result: " << result << endl;
        break;
        case '/':
        // 0 bölmeyi kontrol etme
        if(num2 != 0){
            result=(float)num1 / num2; // küsüratı görmek için float eklendi
            cout<< "Result: " << result << endl;
        }else {
            cout<< "division by zero error\n ";
        }
        break;
        default:
        std::cout << "Invalid transaction" << std::endl;
        
    }

    return 0;
}