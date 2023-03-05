#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "point.h"
using namespace std;



 point Center(const point* C, int n)
{
    float addx = 0, addy = 0;
    for (int i = 0; i < n; i++) {
        addx += C[i].getx();
        addy += C[i].gety();
    }
    return point(addx / n, addy / n);
}

int main()
{
    srand(time(0));

    const int n = 200;
    const int m = 20;

    point* A = new point[n];
    point* B = new point[n];
    point* p = new point[m];

  
    for (int i = 0; i < n; i++) {
        A[i].setx(70.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 91)));
        A[i].sety(70.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 91)));
    }

    
    for (int i = 0; i < n; i++) {
        B[i].setx(20.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 41)));
        B[i].sety(20.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 41)));
    }

    for (int i = 0; i < m; i++) {
        p[i].setx(5.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 101)));
        p[i].sety(5.0 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 101)));
    }

    
    for (int i = 0; i < m; i++) {
        point centerA = Center(A, n);
        point centerB = Center(B, n);
        if (p[i].distance(centerA) < p[i].distance(centerB)) {
            
            p[i].display();
            cout << " is in A"<< endl;
        }
        else {
           
            p[i].display();
            cout << " is in B" << endl;
        }
    }

    

    return 0;
}