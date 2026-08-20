let atual = 0;
let soma = 0;

function somarAte(limite){
    for(let i = 1; i<=limite; i++){
        soma += i;
        console.log(atual, ' + ', i, ' = ', soma);
        atual = soma;
    }
}

somarAte(10);