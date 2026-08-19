#include "iostream"
using namespace std;
int main () {
    int a[100] , b[100];
    int n, i, j, count;
    cout << "Enter the frame lenght: ";
    cin >> n;
    cout << " Enter the frame (bits one by one): \n";
     
     for ( i = 0; i < n; i++)
     cin >> a[i];
    i = 0;
    j = 0;
    count = 0;
    
    while ( i < n) {
        b[j] = a[i];
        if ( a [i] == 1)
         count++ ;
        else 
         count = 0;

        if (count == 5) {
            j++;
            b [j] = 0;
            count = 0;
        }
    }
}