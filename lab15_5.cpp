#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *a, int *b, int *c, int *d);

int main(){
    int a = 50, b = 100, c = 500, d = 1000;

    srand(time(0));    
    
    for(int i = 0; i < 10; i++){
        shuffle(&a, &b, &c, &d);
        cout << a << " " << b << " " << c << " " << d << "\n";
    }
    
    return 0;
}

void shuffle(int *a, int *b, int *c, int *d){
    int temp;
    int *arr[] = {a, b, c, d};

    for (int i = 0; i < 4; i++){
        int randIndex = rand() % 4;
        temp = *arr[i];
        *arr[i] = *arr[randIndex];
        *arr[randIndex] = temp;
    }
}
