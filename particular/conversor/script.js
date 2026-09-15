let botaoPolegada = document.getElementById('bPol')
let botaoMilimetro = document.getElementById('bMM')
let botaoCalcular = document.getElementById('bCal')

let tipoMedida = document.getElementById('tMed')
let input = document.getElementById('inp')
let output = document.getElementById('out')
let divResultado = document.getElementById('res')
let modoAtual

function tipoMilimetro(){
    tipoMedida.innerText = ""
    output.innerText = ""

    divResultado.classList.add('hidden') 

    botaoCalcular.innerText = "Converter para Milímetro"
    tipoMedida.innerText = "milímetros (mm)"
    modoAtual = 'mm'
}

function tipoPolegada(){
    tipoMedida.innerText = ""
    output.innerText = ""
    
    divResultado.classList.add('hidden') 

    botaoCalcular.innerText = "Converter para Polegada"
    tipoMedida.innerText = "polegadas"
    modoAtual = 'pol'
}

function executarCalculo(){

    let valor = Number(input.value)

     if (input.value === "") {
        alert("Por favor, digite um valor!");
        return;
    }

    if(modoAtual==='mm'){
        let calculo = valor * 25.4;
        output.innerText = calculo.toFixed(2);
    } else if(modoAtual==='pol'){
        let calculo = valor / 25.4;
        output.innerText = calculo.toFixed(2);
    }

    divResultado.classList.remove('hidden')
}

botaoPolegada.addEventListener('click', tipoMilimetro)
botaoMilimetro.addEventListener('click', tipoPolegada)
botaoCalcular.addEventListener('click', executarCalculo)


tipoMilimetro();