//
// Created by Afeef Khateeb on 8/12/2017.
//

#include <stdio.h>
int binary_search(int x, int v[], int n);
mainbinarysearch(){

    int r=6;
    int m[]={1,2,3,4,5,6,7,8,9,10};
    int n=0;
    printf(binary_search(r,m,n));

}
int binary_search(int x, int v[], int n){
    int low, mid, high;
    low =0;
    while(low<=high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid + 1;

        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;

}
