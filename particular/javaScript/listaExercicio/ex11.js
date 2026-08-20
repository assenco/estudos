function contarLetraA(palavra){
    let contador=0;

    for(let letra of palavra){
        if(letra==='a') contador++;
    }
    return contador;
}

console.log(contarLetraA('abacaxi'));