

#include <iostream>

int main()
{
    int opt;
    int nr_10, nr_2=0, nr_8 = 0;
    int putere_2 = 1;
    int putere_8 = 1;
    int putere_16 = 1;
    int a[21];
    int k = 0;

    do { 
        
        std::cout << "\n";
        std::cout << "-------------------------------------\n";
        std::cout << "1.Transformarea numarului din baza 10 in baza 2.\n";
        std::cout << "2.Transformarea numarului din baza 10 in baza 8.\n";
        std::cout << "Transformarea numarului din baza 10 in baza 16.\n";
        std::cout << "Optiunea dumneavoastra: ";
        std::cin >> opt;
        std::cout << "\n";

        switch (opt)
        {

        case 1:
            std::cout << "Dati numarul in baza 10: ";
            std::cin >> nr_10;
           
            while (nr_10 != 0) {
                nr_2 = nr_2 + putere_2 * (nr_10 % 2);
                putere_2 = putere_2 * 10;
                nr_10 = nr_10 / 2;
            }
            std::cout << nr_2;
            std::cout << "\n";
            
            break;
        case 2:
            std::cout << "Dati numarul in baza 10: ";
            std::cin >> nr_10;
            nr_8 = 0;
            while (nr_10 != 0) {
                nr_8 = nr_8 + putere_8 * (nr_10 % 8);
                putere_8 = putere_8 * 10;
                nr_10 = nr_10 / 8;
            }
            std::cout << nr_8;
            std::cout << "\n";
            break;
        case 3: 
            
             std::cout << "Dati numarul in baza 10: ";
              std::cin >> nr_10;
              while (nr_10)
              {
                  a[++k] = nr_10 % 16;
                  nr_10/= 16;
              }

              for (int x = k; x >= 1; x--)
              {
                  if (a[x] <= 9)
                      std::cout<<a[x];
                  else
                  {
                      if (a[x] == 10)
                          std::cout << "A";
                      if (a[x] == 11)
                          std::cout << "B";
                      if (a[x] == 12)
                          std::cout << "C";
                      if (a[x] == 13)
                          std::cout << "D";
                      if (a[x] == 14)
                          std::cout << "E";
                      if (a[x] == 15)
                          std::cout << "F";
                  }
              }
            break;
        default:
            break;
        }
    } while (opt);



    
}
