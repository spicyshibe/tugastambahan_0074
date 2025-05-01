#include <iostream>
using namespace std;

class segitiga{


    public :

    int a;
    int t;
    bool cekganjil;



    void inputdata(){
        cout << "masukkan alas segitiga : " << endl;
        cin >> a;
        cout << "masukkan tinggi segitiga : " << endl;
        cin >> t;

        if (a % 2 == 1)
        {
            cekganjil = false;

        }
        
        else
        {
            cekganjil = true;

        }
        
        

    }



    private :

    float hitungluas(int a, int t) {

        return 0.5 * a * t;

    }

   

