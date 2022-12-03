#include<iostream>
using namespace std;

int reverseTheArray(int array[], int size)
{
    int start = 0;
    int end = size-1;

    while(start <= end){
        swap(array[start], array[end]);
        start++;
        end--;
    }

}

int printTheArray(int array[], int size)
{
    for(int i = 0; i < size; i++ )
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[6] = {23, 43, 1, -24, 0, 21};

    reverseTheArray(arr, 5);
    reverseTheArray(brr, 6);

    printTheArray(arr, 5);
    printTheArray(brr, 6);

}
