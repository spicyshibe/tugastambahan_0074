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

    public :

    void outputdata() 
    {
        if (cekganjil)
        {
            cout << "Luas segitiga : " << hitungluas(a, t) << endl;
        }

        else
        {
            cout << "Alas yang di masukkan adalah bilangan ganjil. Luas tidak dapat di hitung" << endl;
            
        }
        
        

    }

};

int main()
{
    segitiga s;
    s.inputdata();
    s.outputdata();
    return 0;
    
    
}

