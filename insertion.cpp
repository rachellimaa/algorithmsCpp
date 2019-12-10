#include <iostream>

using namespace std;

int main(){
    std::cout << "Hello Word"<< std::endl;
    int k, j, n=5, aux, vetor[5] = {7,3,8,4,1};

    for (k = 1; k <= n - 1; k++){
      printf("\n[%d] ", k);

      aux = vetor[k];
      j = k - 1;
      while (j >= 0 && aux < vetor[j]) {
         printf("%d, ", j);

         vetor[j+1] = vetor[j];
         j--;
      }

      vetor[j+1] = aux;
   }
    
    return 0;
}
