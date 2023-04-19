int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
int wealth_max=0;
int i,j;
for(i=0;i<accountsSize;i++){
    int wealth_i=0;
    for(j=0;j< *accountsColSize;j++){
        wealth_i+=accounts[i][j];
    }
    if(wealth_i>wealth_max)
    wealth_max = wealth_i;
    }

return wealth_max;
}
