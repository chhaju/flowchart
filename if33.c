#include <stdio.h>
int main(){
int costprice,Tax;
printf("Enter a costprice");
scanf("%d",&costprice);
if(costprice>100000){
Tax=15%;
printf("Tax: %d", Tax);
}
else if(costprice>50000 && costprice<=100000){
Tax=10%;
printf("Tax: %d",Tax);
}
else if (costprice<=50000){
Tax=5%;
printf("Tax: %d",Tax);
}
return 0;
}
