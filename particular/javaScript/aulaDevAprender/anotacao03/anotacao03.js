//for in
const pessoa = {
    nome: 'matheus',
    idade: 25,
};
//comando busca uma chave dentro de pessoa
for(let chave in pessoa){
    //imprime todas variaveis em pessoa "nome" e "idade"
    console.log(chave);
}

for(let chave in pessoa){
    //imprime somente a variavel nome
    console.log(pessoa.nome);
}

const cores = ['vermelho','azul','verde'];

for(let indice in cores){
    console.log(cores[indice]);
}

//for of
for(let cor of cores){
    console.log(cor);
}