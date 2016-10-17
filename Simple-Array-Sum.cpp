#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,x,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&x);
        sum+=x;
    }
    printf("%d",sum);
    return 0;
}
