/*
* Aralarında Asal :
* Kullanıcıdan alınan 2 tam sayının aralarında asal olup olmadığını 
* bulan bir uygulama .(ikisayının ebob 1 ise aralarında asaldır.)
*/
#include <iostream>

int ebobFind(int x, int y){
    int ebob =1;
    int minNumber = (x < y) ? x : y;


    for (int i=1; i<=minNumber; i++ ){
        if (x%i==0 && y%i==0) {
            ebob=i;
        
        }
    }
    return ebob;
}

int main() {
    std::cout << "Welcome! Finding prime numbers program" << std::endl;

    int number1, number2;
    std::cout << "Enter number 1" << std::endl;
    std::cin>>number1;
    std::cout << "Enter number 2" << std::endl;
    std::cin>>number2;
    int ebob =ebobFind(number1,number2 );

    if (ebob==1) {
        std::cout << number1 <<" and " << number2<<" The majority is prime"<<std::endl;
    }else {
        std::cout << number1 <<" and " << number2<<" The majority is not prime"<<std::endl;
    }


    return 0;
}