#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main() {
    int n, m;
    int i, j;
    cout << "\n Vvedite kolichestvo radov ";
    cin >> n;
    cout << "\n Vvedite kolichestvo chisel v radu ";
    cin >> m;
    int** matr = new int* [n];
    for (i = 0; i < n; i++)
        matr[i] = new int[m];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            matr[i][j] = rand() % 10;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << matr[i][j] << " ";
        cout << "\n";
    }
    int k;
    cout << "\n Vvedite e chto bi zakonchit vipolnenie programi ";
    cin >> k;
    int** temp = new int* [n - 1];

    for (i = 0; i < m; i++)
        temp[i] = new int[m];

    int t;
    for (i = 0, t = 0; i < n; i++)
        if (i != k)
        {
            for (j = 0; j < m; j++)
                temp[t][j] = matr[i][j];
            t++;
        }
}
