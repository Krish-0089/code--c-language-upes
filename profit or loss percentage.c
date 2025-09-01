Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/#include<stdio.h>
int main(){
    int cost_price;
    int selling_price;
    printf("cost price : ");
    scanf("%d",&cost_price);
    printf("selling price : ");
    scanf("%d",&selling_price);
    int profit,loss;
    profit=((selling_price-cost_price)*100)/cost_price;
    loss=((cost_price-selling_price)*100)/cost_price;
    if(cost_price<selling_price){
    printf("profit =%d%%",profit);        
    }
    else if(cost_price>selling_price){
        printf("loss =%d%%",loss);
    }
    else{
        printf("no profit no loss");
    }
    return 0;
}
