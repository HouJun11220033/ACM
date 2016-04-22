#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int binary_search(int len, int num[], int request) {
    int left = 0, right = len - 1, mid;
    while (left < right) {
        mid = (left+right)/2; // step 1: ????????mid
        if (request <= num[mid]) { // step 2: ?????????????
            right = mid; // step 2+: ??????right??????
        } else { 
            left = mid+1; // step 3: ??????left??????
        }
    }
    // step 4: ????????????
    if(request>num[len-1]) left++;
    if (request > ) left++;
    
    
    return left;
}
int main() {
    int num[10] = {1, 3, 4, 5, 7, 8, 8, 9, 10, 13};
    printf("%d\n", binary_search(10, num, 6));
    return 0;
}
