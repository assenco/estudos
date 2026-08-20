const ano = 2026;

const pessoa = {
    nome: 'Bruno',
    nascimento: 2008,
}

let idade = ano - pessoa.nascimento;

console.log(pessoa.nome, ' nasceu em ', pessoa.nascimento, ' e tem ', idade, ' anos');