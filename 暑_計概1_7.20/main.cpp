//
//  main.cpp
//  暑_計概1_7.20
//
//  Created by Chang Chung Che on 2020/7/20.
//  Copyright © 2020 Chang Chung Che. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //印出X型
    /*
    int a;
    cout << "plz cin width";
    cin >> a;
    for (int i = a; i > 0; i--) {
        for (int j = 0; j < a; j++) {
            if (j == i - 1 || j == a - i) {
                cout << "x";
            }
            else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    cout << "\n\n";
    */
    
    
    //印出V型(for練習)
    /*
    for (int i = a; i > a/2; i--) {
        for (int j = 0; j < a; j++) {
            if (j == i - 1 || j == a - i) {
                cout << "x";
            }
            else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
    */
    
    //分數階層(abcde,負數break)(switch練習)
    /*
    int c = 0;
    int grade = 0;
    
    while (c >= 0) {
        cout << "plz insert score:\t";
        cin >> c;
        if (c <= 100 && c >=90) {
            grade = 0;
        }
        else if (c <= 89 && c >= 80) {
            grade = 1;
        }
        else if (c <= 79 && c >= 70) {
            grade = 2;
        }
        else if (c <= 69 && c >= 60) {
            grade = 3;
        }
        else if (c <= 59 && c > 0) {
            grade = 4;
        }
        else if (c > 100) {
            cout << "error";
        }
        else if (c < 0) {
            break;
        }
        cout << "your grade is:\t";
        switch (grade) {
            case 0:
                cout << 'a';
                break;
            case 1:
                cout << 'b';
                break;
            case 2:
                cout << 'c';
                break;
            case 3:
                cout << 'd';
                break;
            case 4:
                cout << 'f';
                break;
            default:
                break;
        }
        cout << '\n';
    }
     */
    
    //金字塔(do while 練習)
    /*
    int w;
    do {
        cout << "plz insert the bottom width of the pyramid:\n";
        cin >> w;
        int x = (w + 1)/2;
        int i;
        
        while (x) {
            i = 0;
            while (i < w) {
                if ((i <= w - x) &&(i >= x - 1)) {
                    cout << '*';
                }
                else {
                    cout << ' ';
                }
                i++;
            }
            cout << '\n';
            x--;
        }
    } while (w);
    */
    
    //資料庫取平均值(array練習)
    /*
    int a;
    cout << "plz enter the array size:\n";
    cin >> a;
    int array[a] = {0};
    float tot = 0;
    cout << "the array is:\t";
    for (int i = 0; i < a; i++) {
        srand(time(NULL));
//        time(NULL);
        array[i] = rand();
        cout << array[i] << "  ";
        tot = tot + array[i];
    }
    cout << "\naverage of the array is:\t" << tot/a << '\n';
    */
    
    //int char ascii練習
    /*
    char a;     //但還是以int的格式儲存
    cout << "plz cin the charactor:\n";
    cin >> a;
    
    cout << "ascii:\t" << (int)a << '\n';
    cout << "char:\t" << (char)a << '\n';
    a++;
    cout << "a++\n";
    cout << "ascii:\t" << (int)a << '\n';
    cout << "char:\t" << (char)a << '\n';
    */
    
    
    return 0;
}
