let msg = document.getElementById('p')
let botao1 = document.getElementById('b1')
let botao2 = document.getElementById('b2')
let vet = []

function adicionar(){

    let txt = document.getElementById('t')
    let num = Number(txt.value)

    vet.push(num)

    txt.value = ''
}

function listar(){

    msg.innerHTML = ''
    
    for(let i=0; i<vet.length; i++){
        msg.innerText+= `|${vet[i]}| `
    }
}

botao1.addEventListener('click', adicionar)
botao2.addEventListener('click', listar)