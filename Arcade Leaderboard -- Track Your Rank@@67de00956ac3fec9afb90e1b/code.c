#include<stdio.h>
void trackPlayerRanks(int ranked[],int player[],int n,int m, int result[]){
    int dense_rank[200000],rank=1;
    dense_rank[0]=rank;
    for(int i=1;i<n;i++){
        if(ranked[i] != ranked[i-1]){
            rank++;
        }
        dense_rank[i]=rank;
    }
    int index=n-1;
    for(int i=0;i<m;i++){
        while(index>=0&&player[i]>=ranked[index]){
            index--;
        }
        result[i]=(index==-1)?1:dense_rank[index]+1;
    }
}