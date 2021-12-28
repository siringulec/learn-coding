#include <iostream>
using namespace std;
int reverse_print (int arr[],int n){
    if (n-1 >=0 ){
        cout << arr[n-1] << endl;
        return reverse_print(arr, n-1);
    }
    else
        return -1;
}
int main(int argc, char *argv[]) {
    int a[6] = {1,2,3,4,5,6};
    reverse_print(a, 6);
    return 0;
}
