function criarCelular(marca, tamanho, bateria){
    return{
        marca,
        tamanho,
        bateria,
        ligar(){
            console.log('ligando')
        }
    }
}

console.log(criarCelular('asus', 4.5, 5000))