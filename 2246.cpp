#include<bits/stdc++.h>
using namespace std;

//array <array <int,200> ,200> parede;

int area(int parede[][205], int pos,int i, int j, int h, int l) {
    if (i < 0 || i >= h || j < 0 || j >= l)
        return 0;
    if (parede[i][j] == pos) {
        parede[i][j] = -1;
        return 1+area(parede, pos, i+1, j, h, l)+area(parede, pos, i-1, j, h, l)
                + area(parede, pos, i, j+1, h, l)+area(parede, pos, i, j-1, h, l);
    }
    return 0;
}

int main () {
    int parede[205][205],alt,larg;

    cin >>alt>>larg;
    for (int i=0; i<alt; i++)
        for (int j=0; j<larg; j++)
            cin >> parede[i][j];
    int tam, tmin=-1;
    for (int i =0; i<alt; i++)
        for (int j=0;j<larg; j++)
            if (parede[i][j] != -1) {
                tam= area(parede,parede[i][j], i, j, alt, larg );
                if (tmin == -1 || tam < tmin) {
                    tmin = tam;
                    if (tmin == 1)
                        break;
                }
            }
    cout << tmin << endl;
    return 0;
}