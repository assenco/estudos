function encontrarMaior(a, b, c){
    const num =[a, b, c];
    let maior;

    maior=num[0];
    for(let i=1; i<3;i++){
        if(num[i]>maior)maior=num[i];
    }
    return maior;
}

console.log(encontrarMaior(1, 2, 3));

//--------------------------------------------

function encontrarMaior(a, b, c){
    if(a>=b && a>=c) return a;
    if(b>=a && b>=c) return b;
    return c;
} 
console.log(encontrarMaior(1, 2, 3));