#include <iostream>
#include <fstream>
#include <string>
#include <list>
#define MAX_SIZE 100
using namespace std;

class Functions {
    int* arr, n;
    public:
        Functions(int array[], int size){
            arr = array;
            n = size;
        }
        void display(fstream& file){
            for (int i = 0; i < n; i++)
            {
                file << arr[i] << " ";
            }
            file << endl;
        }
};

class Hash{
		int BUCKET;
		list<int>* table;
	public:
        Hash(int b, int array[], int n){
            this->BUCKET = b;
            table = new list<int>[BUCKET];
            int index;
            for (int j = 0; j < n; j++){
                index = hashFunction(array[j]);
                table[index].push_back(array[j]);
            }
        }
        // void insertItem(int key){
        //     int index = hashFunction(key);
        //     table[index].push_back(key);
        // }
        // void deleteItem(int key){
        //     int index = hashFunction(key);
        //     list <int> ::iterator i;
        //     for (i = table[index].begin();
        //          i != table[index].end(); i++) {
        //         if (*i == key)
        //             break;
        //     }
        //     if (i != table[index].end())
        //         table[index].erase(i);
        // }
        int hashFunction(int x) {
            return (x % BUCKET);
        }
        void outputHash(fstream& file){
            file << "Hash table:" << endl;
            for (int i = 0; i < BUCKET; i++) {
                file << i;
                for (auto x : table[i])
                    file << " --> " << x;
                file << endl;
            }
        }
};

class HeapSort {
    public:
        int *arr, n;
        HeapSort(int array[], int count){
            arr = array;
            count = n;
        }
        void heapify(int arr[], int n, int i)
        {
            int l = 2 * i + 1;
            int r = 2 * i + 2;
            int max = i;
            if (l < n && arr[l] > arr[max])
                max = l;
            if (r < n && arr[r] > arr[max])
                max = r;
            if (max != i) {
                swap(arr[i], arr[max]);
                heapify(arr, n, max);
            }
        }

        void buildHeap(int arr[], int n)
        {
            for (int i = n / 2 - 1; i >= 0; i--)
                heapify(arr, n, i);
        }

        void heapSort(int arr[], int n)
        {
            buildHeap(arr, n);
            for (int i = n - 1; i >= 0; i--){
                swap(arr[0], arr[i]);
                heapify(arr, i, 0);
            }

        }

        // void print(int arr[], int n, fstream& file){
        //     file << "Grades sorted." << endl;
        //     for (int i = 0; i < n; i++)
        //     {
        //         file << arr[i] << " ";
        //     }
        //     file << endl;
        // }
};



int main() {
    int ar[MAX_SIZE], n = 0, num, x = 5;
    fstream infile, outfile;
    infile.open ("input.txt");
    while(infile >> num){
        ar[n] = num;
        n++;
    }
    infile.close();
    HeapSort heap(ar, n);
    heap.heapSort(ar, n);
    outfile.open("output.txt");
    Functions f(ar, n);
    f.display(outfile);
    Hash hash(x, ar, n);
	hash.outputHash(outfile);
    outfile.close();

    return 0;
}
