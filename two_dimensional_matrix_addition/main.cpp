/*
* İki  Boyutlu Dinamik Matrislerle Toplama İşlemi
*  
* Kullanıcıdan satır ve sütün sayısı aldıktan sonra , iki matris oluşturup bu 
* matrislerin elemanları yine kullanıcıdan alınıcak. Ardından bu iki matrisi eleman bazında
* toplayacak ve sonuçlar ekrana yazdırılacak.
* 
* Not: Tüm  bellek kullanıımından sonra belleği temizlemeyi unutma.Bu proje, pointer'ların ve 
* dinamik bellek yönetiminin kullanımını pekiştirmek için uygulama
*/

#include <iostream>

using namespace std;

int main() {
    int rows , cols;
    std::cout << "Enter the number of rows of the matrix" << std::endl;
    cin>>rows;
    std::cout << "Enter the number of columns  of the matrix" << std::endl;
    cin>>cols; 


    // İki Boyutlu matrisler için pointer kullanarak dinamik bellek 
    //int** türü, pointerların pointerıdır ve bu bize iki boyutlu bir dizi(matris) gibi davramasını sağlar
    int**matrix1=new int*[rows];
    int**matrix2=new int*[rows];
    int**total=new int*[rows];

    // dinamik olarak her satır için sütunlara yer ayırıyoruz
    for (int i = 0; i < rows; i++)
    {
        matrix1[i]=new int[cols];
        matrix2[i]=new int[cols];
        total[i]=new int[cols];
    }

    std::cout << "Enter the elements of the first matrix" << std::endl;
    for (int i=0 ;i<rows;i++) {
        for (int j=0; j<cols; j++) {
            cout<<"Matrix["<<i<<"]["<<j<<"] ";
            cin>>matrix1[i][j];
        
        }
    
    }

    std::cout << "Enter the elements of the second matrix" << std::endl;
    for (int i=0 ;i<rows;i++) {
        for (int j=0; j<cols; j++) {
            cout<<"Matrix["<<i<<"]["<<j<<"] ";
            cin>>matrix2[i][j];
        
        }
    
    }

    //toplama yapımı
    for (int i=0 ;i<rows;i++) {
        for (int j=0; j<cols; j++) {
            total[i][j]=matrix1[i][j]+matrix2[i][j];        
        }
    
    }


    std::cout << "Sum of matrices:" << std::endl;
    for (int i=0 ;i<rows;i++) {
        for (int j=0; j<cols; j++) {
            cout<<total[i][j];      
        }
    cout << endl;
    }

    //Bellek alanını serbest bırakma
    //Her matrisin satırlarını(ve içindeki sütunları) temizledik
    for (int i=0 ;i<rows;i++) {
        delete [] matrix1[i];
        delete [] matrix2[i];
        delete [] total[i];
    }

    //Matrislerin kendilerini bellekten temizliyoruz
    delete [] matrix1;
    delete [] matrix2;
    delete [] total;

    return 0;
}
