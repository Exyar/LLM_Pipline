let price=[250,645,300,900,50];
for(let i=0;i<price.length;i++)
{
    price[i]-=price[i]/10;
}
console.log(price);

// or
let idx=0;
for(let val of price)
{
    let offer =val/10;
    price[idx]-=offer;
    console.log(price[idx]);
    idx++;
}
console.log(price);