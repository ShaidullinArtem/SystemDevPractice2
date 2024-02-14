//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int zindex = 3, yindex = 3, xindex = 3;
//
//    int ***arr = new int**[zindex];
//
//    // Выделение памяти
//    for(int i = 0; i < zindex; i++){
//        arr[i] = new int*[yindex];
//
//        for(int j = 0; j < yindex; j++){
//            arr[i][j] = new int[xindex];
//        }
//    }
//
//    srand(time(0));
//    for(int z = 0; z < zindex;z++)
//        for(int y = 0; y < yindex; y++)
//            for(int x = 0; x < xindex; x++)
//                arr[z][y][x] = rand();
//
//
//
//    for(int z = 0; z < zindex; z++)
//        for(int y = 0; y < yindex; y++) {
//            int rowSum = 0;
//            for(int x = 0;x < xindex; x++)
//                rowSum += arr[z][y][x];
//
//            cout << rowSum << endl;
//        }
//
//
//    return 0;
//}