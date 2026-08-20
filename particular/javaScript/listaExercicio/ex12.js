const estoque={
    camisa:10,
    calca:20,
    meia:5,
};

function calcular(estoque){
    let total=0;
    for(const item in estoque){
        total+=item;
    }
    return total;
}
console.log(calcular(total));