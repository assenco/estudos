const carro = {
    modelo: 'Nivus',
    ano: '2022',
    cor: 'azul'
};

for(const item in carro){
    console.log(item, ' : ', carro[item]);
};