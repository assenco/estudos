//"let" serve para declarar uma variavel
//"idade" e o nome da variavel
let idade = 20; //number literal
let nome = 'rafael'; //string literal
let estaAprovado = true; //boolean
let sobrenome = undefined; //undefined
let selecionado = null; //redefinir um valor
let corSite = "azul";
//definindo um objeto "pessoa"
let pessoa = {
    nome: 'rafael',
    sobrenome: 'souza',
    idade: 20,
    estaAprovado: true,
};
//criando um array
let idades =[26,45,65,10];
//"const" define uma constante
const tipo = 89;
//"console.log" imprime na tela o valor da variavel que esta nos parenteses
//Quando for imprimir uma string ou valor especifico, colocar entre ''
console.log(tipo);
console.log(idade);
console.log('teste'); 
//imprimindo um objeto inteiro
console.log(pessoa);
//imprimindo um valor do objeto
console.log(pessoa.idade);
//imprimindo um array inteiro
console.log(idades);
//imprimindo um valor do array
console.log(idades[2]);
//Reatribuindo o valor de uma variavel
idade = 90;
//criar uma funcao, definir o nome (verbo+substantivo)
//dentro dos parenteses indica qual vai ser o valor recebido
function resetaCor(cor){
    //ira redefinir a cor do site para qual for a cor escolhida quando executar a funcao
    corSite = cor;
};
//criando uma funcao que pode concatenar dois valores
function corTonalidade(cor,tonalidade){
    corSite = cor + tonalidade;
};
//imprime a cor do site atual
console.log(corSite);
//executa a funcao de redefinir cor, recebendo a cor "vermelho"
resetaCor("vermelho");
//imprime nova cor
console.log(corSite);
//executa a funcao corTonalidade, recebendo a cor "verde" " claro"
corTonalidade("verde"," claro");
console.log(corSite);
