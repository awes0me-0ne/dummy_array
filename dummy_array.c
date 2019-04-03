#include<stdio.h>
#define SIZE 50

int main(){
  int i;
  int n;
  double x[SIZE];
  double y[SIZE];

  double *x_p;
  double *y_p;

  double dot_product=0.0;

  printf("n=");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%lf",&x[i]);
  }
  for(i=0;i<n;i++){
    scanf("%lf",&y[i]);
  }
  x_p=x;
  y_p=y;
  for(i=0;i<n;i++){
    dot_product += (*(x_p+i))*(*(y_p+i));
  }
  printf("dot_product=%6.2f\n",dot_product);
  return 0;
}
