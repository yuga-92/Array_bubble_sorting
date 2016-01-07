//
//  main.c
//  Array_bubble_sorting
//
//  Created by Yuga Hal on 12/13/15.
//  Copyright © 2015 Yuga Hal. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr1 [] = {1,5,3,7,4,23,55,9, 0, 55};
    for (int i =0; i < (sizeof(arr1)/sizeof(arr1[0])); i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = sizeof(arr1)/sizeof(arr1[0])-1; i>=0; i--){
        for (int j=0; j<i; j++){
            if (arr1[j]> arr1[j+1]){
                int temp = arr1[j+1];
                arr1[j+1] = arr1[j];
                arr1[j]= temp;
            }
        }
    }
    for (int i =0; i< (sizeof(arr1)/sizeof(arr1[0])); i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    return 0;
}
