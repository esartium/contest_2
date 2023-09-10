#include <iostream>
#include <cmath>
using namespace std;
int main()
{
            try {
                int N;
                cin >> N;
        int G = 2; //число кусочков, получившееся в результате первого разреза (пополам)
        int R; //число разрезов
        int G1 = 0; //число кусочков, получившееся в результате остальных разрезов
    if (N%2 == 0) {
        for (R = 1; G1 + G <= N; R++) {
        G1 = G*(R+1);
    }
    cout << R << "\n";
    }
     else {
        int Nn = N - 1;
        for (R = 1; G1 + G <= Nn; R++) {
        G1 = G*(R+1);
    }
    cout << R + 1 << "\n";
    }

    if ((N < 1)||(N > 2*pow(10,9)))
                throw 1;
        }
        catch (int i) {
        if (i==1) {
            cout << "неверный формат входных данных" << "\n";
            exit(EXIT_FAILURE);
        }
            }
    return 0;
}