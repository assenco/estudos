let botao = document.getElementById('b')
let msg = document.getElementById('p')

function tabuada(){

let txt = document.getElementById('t')
let num = Number(txt.value)

msg.innerText = ''

for (let c = 1; c <= 10; c++) {
        msg.innerHTML += `${num} x ${c} = ${num * c}<br>`
    }
}

botao.addEventListener('click', tabuada)