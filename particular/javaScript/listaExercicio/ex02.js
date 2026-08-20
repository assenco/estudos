const num = [2,5];

for(let i=0; i<2; i++){
    if(num[i]%2==0) console.log(num[i], 'e par');
    else console.log(num[i], 'e impar');
}

for(let i=0; i<2; i++){
    num[i]%2==0 ? console.log(num[i], 'e par') : console.log(num[i], 'e impar');
}