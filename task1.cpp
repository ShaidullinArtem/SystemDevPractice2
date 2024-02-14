//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//
//void *generateRandomArray(int arr[], int size) {
//    srand(time(0));
//    for (int i = 0; i < size; ++i) {
//        arr[i] = rand() % 21 - 10;
//        printf("%-3d", arr[i]);
//    }
//
//
//
//    return arr;
//}
//
//int arrayDifference(int arr[], int size) {
//    int evenSum = 0, oddSum = 0;
//
//    for (int i = 0; i < size; ++i) {
//        arr[i] % 2 == 0 ? evenSum += arr[i] : oddSum += arr[i];
//    };
//
//    return evenSum - oddSum;
//}
//
//int main() {
//    int arrSize = 10;
//    int arr[arrSize];
//    generateRandomArray(arr, arrSize);
//
//    int difference = arrayDifference(arr, arrSize);
//    cout << endl << "Difference is: " << difference;
//
//    return 0;
//}
