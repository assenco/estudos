function dizerOla(){
    console.log("ola, Mundo");
}

dizerOla();

function olaNome(nome){
    console.log('ola, ',nome);
}

olaNome('Bruno');

function somar(a, b){
    let res;
    res = a +b;
    return res;
}

console.log(somar(2, 8))

function ehPar(x){
    if(x % 2 == 0) return true;
    else return false;
}

console.log(ehPar(7))

function converter(x){
    let resultado;
    res = x * 365;
    return res;
}
console.log(converter(19))