#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()

{
    int i,j,indexmax,temp,tab[N]={12,124,5,45,4};
    for(j=0; j<N-1; j++){

            indexmax = i;
    for(i=0; i<N-j-1; i++){
            if(tab[indexmax]<tab[i+1]){
                indexmax = i+1;

    }
            }
              temp =  tab[N-j-1];
              tab[N-j-1] = tab[indexmax] ;
              tab[indexmax]=tab[N-j-1];
    }

    for(i=0; i<N; i++){

        printf("%d = %d\n", i, tab[i]);
            }

    return 0;
}
