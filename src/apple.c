#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    long long int sum = 0;
    int i;
    for(i = 0; i < n; i++){
        sum += ((A[i]-1)/x)+1;}
    return sum <= k;
}
int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb = 0;
    ub = 1000000000;
    while (ub - lb > 1) {
        int m = (lb + ub) / 2;
        if(p(m)){
            ub = m;
        }
        else{
            lb = m;
        }
    }
    printf("%d\n" ,ub);
  return 0;
}
