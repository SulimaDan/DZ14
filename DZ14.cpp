#include <iostream>
using namespace std;

//bool existsInArray(int arr[], int size, int element) {
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] == element)
//            return true;
//    }
//    return false;
//}
//
//int* getUniqueElementsFromA(int A[], int M, int B[], int N, int& resultSize) {
//    int* result = new int[M];
//    resultSize = 0;
//
//    for (int i = 0; i < M; ++i) {
//        if (!existsInArray(B, N, A[i]) && !existsInArray(result, resultSize, A[i])) {
//            result[resultSize++] = A[i];
//        }
//    }
//    return result;
//}
//
//
//int main() {
//    int M, N;
//    cout << "Введіть розмір масиву A: "; cin >> M;
//    cout << "Введіть розмір масиву B: "; cin >> N;
//
//    int* A = new int[M];
//    int* B = new int[N];
//
//    cout << "Введіть елементи масиву A: ";
//    for (int i = 0; i < M; ++i) cin >> A[i];
//
//    cout << "Введіть елементи масиву B: ";
//    for (int i = 0; i < N; ++i) cin >> B[i];
//
//    int resultSize;
//    int* result = getUniqueElementsFromA(A, M, B, N, resultSize);
//
//    cout << "Елементи масиву A, яких немає в масиві B: ";
//    for (int i = 0; i < resultSize; ++i)
//        cout << result[i] << " ";
//
//    delete[] A;
//    delete[] B;
//    delete[] result;
//
//    return 0;
//}







//bool existsInArray(int arr[], int size, int element) {
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] == element)
//            return true;
//    }
//    return false;
//}
//
//int* getNonCommonElements(int A[], int M, int B[], int N, int& resultSize) {
//    int* result = new int[M + N];
//    resultSize = 0;
//
//    for (int i = 0; i < M; ++i) {
//        if (!existsInArray(B, N, A[i]) && !existsInArray(result, resultSize, A[i])) {
//            result[resultSize++] = A[i];
//        }
//    }
//
//    for (int i = 0; i < N; ++i) {
//        if (!existsInArray(A, M, B[i]) && !existsInArray(result, resultSize, B[i])) {
//            result[resultSize++] = B[i];
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    int M, N;
//    cout << "Введіть розмір масиву A: "; cin >> M;
//    cout << "Введіть розмір масиву B: "; cin >> N;
//
//    int* A = new int[M];
//    int* B = new int[N];
//
//    cout << "Введіть елементи масиву A: ";
//    for (int i = 0; i < M; ++i) cin >> A[i];
//
//    cout << "Введіть елементи масиву B: ";
//    for (int i = 0; i < N; ++i) cin >> B[i];
//
//    int resultSize;
//    int* result = getNonCommonElements(A, M, B, N, resultSize);
//
//    cout << "Елементи, які не є загальними для масивів A і B: ";
//    for (int i = 0; i < resultSize; ++i)
//        cout << result[i] << " ";
//
//    delete[] A;
//    delete[] B;
//    delete[] result;
//
//    return 0;
//}






//int* allocateArray(int size) {
//    return new int[size];
//}
//
//
//
//void initializeArray(int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << "Введіть елемент " << i + 1 << ": ";
//        cin >> arr[i];
//    }
//}
//
//
//
//
//
//void printArray(const int* arr, int size) {
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//
//
//
//
//void deleteArray(int* arr) {
//    delete[] arr;
//}
//
//
//
//
//
//int* addElementToEnd(int* arr, int& size, int element) {
//    int* newArr = new int[size + 1];
//    for (int i = 0; i < size; ++i) {
//        newArr[i] = arr[i];
//    }
//    newArr[size] = element;
//    ++size;
//    delete[] arr;
//    return newArr;
//}
//
//
//
//
//int* insertElementAt(int* arr, int& size, int element, int index) {
//    int* newArr = new int[size + 1];
//    for (int i = 0; i < index; ++i) {
//        newArr[i] = arr[i];
//    }
//    newArr[index] = element;
//    for (int i = index; i < size; ++i) {
//        newArr[i + 1] = arr[i];
//    }
//    ++size;
//    delete[] arr;
//    return newArr;
//}
//
//
//
//
//
//int* deleteElementAt(int* arr, int& size, int index) {
//    int* newArr = new int[size - 1];
//    for (int i = 0; i < index; ++i) {
//        newArr[i] = arr[i];
//    }
//    for (int i = index + 1; i < size; ++i) {
//        newArr[i - 1] = arr[i];
//    }
//    --size;
//    delete[] arr;
//    return newArr;
//}





//bool isPrime(int num) {
//    if (num < 2) return false;
//    for (int i = 2; i * i <= num; ++i) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//int* removePrimes(int* arr, int& size) {
//    int newSize = 0;
//
//
//    for (int i = 0; i < size; ++i) {
//        if (!isPrime(arr[i])) {
//            ++newSize;
//        }
//    }
//
// 
//    int* newArr = new int[newSize];
//    int index = 0;
//    for (int i = 0; i < size; ++i) {
//        if (!isPrime(arr[i])) {
//            newArr[index++] = arr[i];
//        }
//    }
//
//  
//    size = newSize;
//    delete[] arr;  
//
//    return newArr;
//}





void separateElements(int* arr, int size, int*& positives, int& posSize, int*& negatives, int& negSize, int*& zeros, int& zeroSize) {
    posSize = negSize = zeroSize = 0;


    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) ++posSize;
        else if (arr[i] < 0) ++negSize;
        else ++zeroSize;
    }

    positives = new int[posSize];
    negatives = new int[negSize];
    zeros = new int[zeroSize];


    int posIndex = 0, negIndex = 0, zeroIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) positives[posIndex++] = arr[i];
        else if (arr[i] < 0) negatives[negIndex++] = arr[i];
        else zeros[zeroIndex++] = arr[i];
    }
}
