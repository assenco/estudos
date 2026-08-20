let nome = 'pedro';
let periodo = 'manha';
let mensagem = saudar (nome, periodo);

function saudar (nome, periodo){
    if(periodo == 'manha') {
        return 'Bom dia, ' + nome;
    }
    else if(periodo == 'tarde'){
        return 'Boa tarde, '+ nome;
    }else return 'Boa noite, '+ nome;
}

console.log(mensagem);