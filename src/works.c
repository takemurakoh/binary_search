#include <stdio.h>

int n;
int k;
int A[100000];
int p(int x){
    long long int sum = 0;
    int h = 1;
    int i;
    for(i = 0; i < n; i++){
        if (sum + A[i] <= x)sum += A[i];
        else{
            if(x >= A[i]){h += 1;
                sum = A[i];}
            else return 0;}
    }
    return  h <= k;
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
