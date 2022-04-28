#include <stdio.h>

int main(void) {
  int n,m,i,j,k, w;
  int macierz_1[10][10];
  int macierz_2[10][10];
  int nowa_macierz[m][m];
  printf("Wpisz liczbę wierszy macierzy 1: \n");
  scanf("%d", &m);
  printf("Wpisz liczbę kolumn macierzy 1: \n");
  scanf("%d", &n);
  printf("Wpisz liczbę wierszy macierzy 2: \n");
  scanf("%d", &w);
  printf("Wpisz liczbę kolumn macierzy 2: \n");
  scanf("%d", &k);

  if(n==w){
    
    for (i=0; i<m; i++){
    for(j=0; j<n; j++){
      printf("Podaj elementy macierzy 1: ");
      scanf("%d", &macierz_1[i][j]);
    }
  }
    for(i=0;i<w;i++){ //wprowadzanie
      for(j=0;j<k;j++){
        printf("Podaj wyraz macierzy 2: ");
        scanf("%d", &macierz_2[i][j]);
      }
    }
    for(i=0;i<w;++i){
      for(j=0;j<k;++j)
      {
        nowa_macierz[i][j]=0;
        for(int y=0;y<m;++y)
          nowa_macierz[i][j]=nowa_macierz[i][j]+macierz_1[i][y]*macierz_2[y][j];
      }
    }
    printf("Macierz 1 pomnozona przez macierz 2 daje macierz \n");
    for(i=0;i<w;++i){
      for(j=0;j<k;++j){
        printf("%d ", nowa_macierz[i][j]); 
      }
      printf("\n");
    }
  }
  else printf("Tych macierzy nie mozna pomnozyc\n");
  return 0;
}