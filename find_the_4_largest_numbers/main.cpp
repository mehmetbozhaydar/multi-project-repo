/*
   En büyük 4 sayısyı bulma


	Kullanıcıdan alınan pozitif tam sayılar arasından en büyük dört tanesini bulan bir uygulama.
	Uygulamamazı yazarken dinamik dizi oluşturmak için pointer kullanıcaz ve sayıları sıralı bir şekilde ekrana
	yazdırıcaz.

*/
#include <iostream>


void findLargestfour(int*arr, int size){
    //en büyük 4 sayıyı sakalayacak dizi
    int largest[4]={0,0,0,0};

    //girilen sayıları kontrolet ve en büyük 4 taneyi güncelle
    for (int i = 0; i < size; i++)
    {
        int current =arr[i];
        
        if(current > largest[0]){
            largest[3]=largest[2];
            largest[2]=largest[1];
            largest[1]=largest[0];
            largest[0]=current;

        }else if (current > largest[1]) {
            largest[3]=largest[2];
            largest[2]=largest[1];
            largest[1]=current;
        
        }else if (current > largest[2]) {
            largest[3]=largest[2];
            largest[2]=current; 
        }else if (current > largest[3]) {
            largest[3]=current;
        }
    }
        std::cout<< "The largest 4 numbers: ";
        for (int i = 0; i<4; i++)
        {
            std::cout << largest[i] <<"  ";
        }
        std::cout << std::endl;

}

int main() {
    std::cout << "Welcome! Find the 4 largest numbers\n" << std::endl;
    int n ;
    std::cout << "How many numbers will you enter?" << std::endl;
    std::cin>>n;

    //Dinamik dizi oluşturma
    int* numbers= new int[n];

    //kullanıcıdan sayıları alma
    std::cout << "Please enter numbers:  " ;
    for(int i=0; i<n; i++){
        std::cin>>numbers[i]; //*(numbers+1);
    }

    findLargestfour(numbers,n);
    
    delete [] numbers;

    return 0;
}
