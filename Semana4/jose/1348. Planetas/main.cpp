// compile & run:     g++ main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://omegaup.com/arena/problem/Planetas#problems
//
// © Jose Garfias Lopez
//

#include <cstdio>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
#include <algorithm>

#define MAX 1004
#define ERROR 1e-6

using namespace std;

int tam;
vector<double> planets;

double force(double Xi, double M) {
    return 1/fabs(Xi - M);
}

double eval(double M) {
    double forceRight = 0;
    double forceLeft = 0;
    for (int i=0; i<tam; i++) {
        if (planets[i] < M) { // planets to the left
            forceLeft += force(planets[i], M);
        } else if (planets[i] > M) { // planets to the right
            forceRight += force(planets[i], M);
        } else { // planet in meteorit ? NOT 
            
        }
    }
    //cout<<"fl: "<<forceLeft<< " fr:"<<forceRight<<endl;
    return fabs(forceLeft)-fabs(forceRight);
}

// MODIFICAR PARA PODER COMPARAR CON NUMEROS NEGATIVOOSSSS
double binary_search(double first, double second) {
    double res = -1;
    double ini = first;
    double fin = second;
    for (int i=0; i<=50; i++) {
        double mid = ((ini + fin)/ 2.000000);
        double forcesDiff = eval(mid);
        //cout<<"ini:"<<ini<<" fin:"<<fin<<" mid:"<<mid<<" diff:"<<forcesDiff<<endl;
        if (forcesDiff >= 0) { // go to right
            res = mid;
            ini = mid;
        } else if (forcesDiff < 0) { // go to left
            fin = mid;
        }
    }
    return res;
}

int main() {
    cin>>tam;
    for (int i=0; i<tam; i++) {
        double temp;
        cin>>temp;
        planets.push_back(temp);
    }
    sort(planets.begin(), planets.end());
    // iterate between planets:
    vector<double> results;
    if (tam > 1) {
        for (int i=0; i<tam-1; i++) {
            // cout<<i<<" - "<<i+1<<endl;
            double resultSearch = binary_search(planets[i], planets[i+1]);
            if (resultSearch != -1) {
                results.push_back(resultSearch);
            }
        }
    }
    sort(results.begin(), results.end());
    int tamResults = results.size();
    cout<<tamResults<<endl;
    for (int i=0; i<tamResults; i++) {
        cout << fixed << setprecision(3) << results[i];
        if (i<tamResults-1) {
            cout<<" ";
        }
    }

    // double resultSearch = binary_search(0, 1);
    // cout<<resultSearch;

    return (0);
}