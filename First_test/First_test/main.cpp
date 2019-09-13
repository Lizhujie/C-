//
//  main.cpp
//  First_test
//
//  Created by Yuki Aragaki on 2019/9/13.
//  Copyright © 2019 Yuki Aragaki. All rights reserved.
//

#include <iostream>
using namespace std;

int addArray(int *array, int n);

int main() {
    // insert code here...
    int data[] = {0 , 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(data)/sizeof(data[0]);
    cout << "总和为 :" << addArray(data, size) << endl;
    cout << "Hello, World!\n" << endl;
    return 0;
}

int addArray(int *array, int n ){
    
    int sum = 0;
    int i;
    for(i=0; i<n; i++){
        sum += *array ++;
    }
    
    return sum;
}
