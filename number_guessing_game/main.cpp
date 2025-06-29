#include <iostream>
#include <cstdlib>//rasgele sayı üretmek için
#include <ostream>

/*
 Proje adı: Sayı tahmin oyunu

 proje konusu: Belirlenen min ve max değerler arasında rastgele seçilen sayıyı 
 sınırlı sayıda tahmin etmeye çalışır.Oyun, tahmin edilen sayýya göre ipuçları verir
 ve oyuncunun oyunu tekrar oynamak isteyip istemediğini sorar. Proje, temel C++
 becerilerini geliştirmek amacıyla döngüler, koşullu ifadeler ve rastgele sayı üretme
 gibi konulara odaklanır.

*/
int main() {
    const int Max_tries=5;//Tahmin sayısı sabit değer olduğu için const tanımlı 
    const int Value_min=1;
    const int Value_max=100;

    char playAgain='y';//Oyunu tekrar oynanıp oynanmayacağını kontrol eden değişken

    while (playAgain=='y' || playAgain == 'Y')
    {
        srand(time(NULL));/*her seferinde farklı bir sayı üretilmesini sağlar
         / srand için sabit sayı ele tanımlanırsa sürekli aynı sayıyı üretmesine neden olur*/
        int secretNumber=rand() % (Value_max-Value_min+1)+Value_min;

        std::cout << "Welcome NUmber Guessing Game!\n\n";
        std::cout << "I kept a number." << Value_min << "-" << Value_max << " between\n";
        std::cout << "Let's see "<< Max_tries << " Can you find it in the prediction?\n";
        
        int guess;
        bool found= false;

        for (int i =1; i<=Max_tries;i++) {
            std::cout << i<<".enter your guess\n";
            std::cin >> guess;

            if (guess== secretNumber) {
                std::cout<< "Congratulations, you guessed it right.\n";
                found=true;
                break;
            }else if (guess> secretNumber) {
                std::cout << "The number I chose is smaller than the number you entered!\n ";
            }else {
                std::cout << "The number I chose is greater than the number you entered!\n";
            }
        }
        if (!found) {
            std::cout << "Sorry, your guessing rights are over. My number:"<<secretNumber<<"\n\n";
        } 

        std::cout << "Do you want to play again?(y/n)\n";
        std::cin >> playAgain;
        std::cout <<std::endl<<std::endl;
    }
    std::cout << "Thanks for playing the game! :)\n";

    return 0;
}