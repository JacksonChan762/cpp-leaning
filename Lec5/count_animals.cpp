    #include <iostream>
    using namespace std;


    int main()
    {
        for (int i = 0 ; i <= 12; ++i){
            for(int j = 0 ; j <=12 ; ++j){
                if( i*4.5 + j*3 == 36 ){
                    cout << i << " * 4.5 + " << j << " * 3 = 36" << endl;

                }
            }
        }
    }