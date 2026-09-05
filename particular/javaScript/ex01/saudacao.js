let botao = document.getElementById("b")
let msg = document.getElementById("m")
let saudacao

function executar(){

    let txt = document.getElementById("tx")
    let num = Number(txt.value)
    let nom = document.getElementById("n")
    let nome = nom.value

    if(num>=6 && num<=12){
        saudacao = `Bom Dia, ${nome}`
    }else if(num>=13 && num<=18){
        saudacao = `Boa Tarde, ${nome}`
    }else saudacao = `Boa Noite, ${nome}`

    msg.innerText = saudacao
}

botao.addEventListener('click', executar)