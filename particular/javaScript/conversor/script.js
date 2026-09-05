let botaoPolegada = document.getElementById('bPol')
let botaoMilimetro = document.getElementById('bMM')
let botaoFracao = document.getElementById('bFra')
let botaoCalcular = document.getElementById('bCal')

let tipoMedida = document.getElementById('tMed')
let input = document.getElementById('inp')
let output = document.getElementById('out')
let modoAtual

function tipoMilimetro(){
    tipoMedida.innerText = ""
    output.innerText = ""

    botaoCalcular.innerText = "Converter para Milímetro"
    tipoMedida.innerText = "milímetros (mm)"
    modoAtual = 'mm'
}

function tipoPolegada(){
    tipoMedida.innerText = ""
    output.innerText = ""
    
    botaoCalcular.innerText = "Converter para Polegada"
    tipoMedida.innerText = "polegadas"
    modoAtual = 'pol'
}

function tipoFracao(){
    tipoMedida.innerText = ""
    output.innerText = ""
    
    botaoCalcular.innerText = "Converter para Milímetro"
    tipoMedida.innerText = "milímetros (mm)"
    modoAtual = 'fra'
}

function executarCalculo(){

    let valor = Number(input.value)

    if(modoAtual==='mm'){
        output.innerText = valor * 25.4
    } else if(modoAtual==='pol'){
        output.innerText = valor / 25.4
    } else if(modoAtual==='fra'){
        output.innerText = 'eita'
    }
}

botaoPolegada.addEventListener('click', tipoMilimetro)
botaoMilimetro.addEventListener('click', tipoPolegada)
botaoFracao.addEventListener('click', tipoFracao)
botaoCalcular.addEventListener('click', executarCalculo)
