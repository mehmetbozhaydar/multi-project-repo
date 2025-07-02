/*
* Fibonacci sayıları 0 ve 1 ile başlayan ve her sayının kendisinden önce 
* gelen iki sayının toplanması ile elde edildiği bir sayı dizisidir.
* 0, 1, 1, 2, 3, 5, 8, 13, ..
*
*
*  Bu tanıma uygun olarak Fibonacci serisinin kullanıcının istediği ilk n elemanını 
*  bulup ekrana yazdırır.
*/

#include <iostream>


int fibonacci(int n){
    if (n==0)
    {
        return 0;//ilk eleman 0 kabul edilir.
    }else if (n==1) {
        return 1;//ikinci eleman 1 kabul edilir.
    }else {
        return fibonacci(n -1)+fibonacci(n-2);
    }
}

int main() {
    int n;
    std::cout << "How many first elements of the fibonacci sequence should be written?" << std::endl;
    std::cin>>n;
    if (n<=0)
    {
        std::cout << " Please enter a positive number!" << std::endl;
        return 1;
    }
    std::cout <<  std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << fibonacci(i) << " , ";
        
    }
    std::cout <<  std::endl;
    return 0;
}   