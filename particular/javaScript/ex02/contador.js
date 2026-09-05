let botao = document.getElementById('b')
let msg = document.getElementById('p')

function contar(){

let txt = document.getElementById('t')
let num= Number(txt.value)
const vet = []

for(let i=num; i<=10; i++){
    vet.push(i)
}

msg.innerText= vet.join(', ')
}

botao.addEventListener('click', contar)