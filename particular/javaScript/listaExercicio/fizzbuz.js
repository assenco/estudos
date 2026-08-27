function fizzbuzz(num){
    if(num%3==0){
        return 'fizz';
    }
    if(num%5==0){
        return 'buzz';
    }
    if(num%3==0 && num%5==0){
        return 'fizzbuzz';
    }else{
        return 'entrada';
    }
}

console.log(fizzbuzz(1)); 