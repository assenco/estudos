create database Fatec2sem2026

use Fatec2sem2026

create table departamento (codigo int not null identity(1,1), departamento varchar(30))

select * from departamento 
insert into departamento (departamento) values ('TI')

insert into departamento values ('Financeiro'),('Administrativo'),('Engenharia'),('Compras'),('Marketing')

alter table departamento add constraint pk_departamento primary key (codigo)

insert into departamento values ('Patio')

select* from departamento

update departamento set departamento = 'Fiscal' where codigo = 7

delete departamento where codigo = 7 

create table funcionario (matricula int not null identity(1,1), nome varchar(30), salario float, codigodepartamento int, constraint pk_funcionario primary key (matricula))

select * from funcionario

alter table funcionario add constraint fk_depto_funcionario
foreign key (codigodepartamento) references departamento(codigo)

insert into funcionario values ('Maria', 2100, 2), ('Pedro', 1500, 1), ('Jose', 4300, 2), ('Carlos', 3000, 4)

select * from departamento
select * from funcionario

insert into funcionario values ('Marcia', 5000, 5)

insert into departamento values ('Diretoria')

delete from departamento where codigo = 1

update funcionario set salario = 1680 where matricula = 2

select * from funcionario

update funcionario set salario = (salario*1.10)

select nome, salario from funcionario
order by salario desc

create table venda (codigovenda int not null identity(1,1), produto varchar(50), valorunitario float, qtd int, total float, desconto float, valordesconto float, totalpagar float, matricula int, primary key (codigovenda), foreign key (matricula) references funcionario(matricula))

select * from venda

INSERT INTO venda VALUES ('Caneta Azul',10,2,20,10,2,18,1);
INSERT INTO venda VALUES ('Caneta Preta',12,3,36,5,1.8,34.2,2);
INSERT INTO venda VALUES ('Lápis HB',5,10,50,8,4,46,3);
INSERT INTO venda VALUES ('Borracha',3,5,15,0,0,15,4);
INSERT INTO venda VALUES ('Caderno 100 Folhas',25,2,50,10,5,45,5);
INSERT INTO venda VALUES ('Caderno Universitário',35,1,35,15,5.25,29.75,6);
INSERT INTO venda VALUES ('Régua 30cm',8,4,32,5,1.6,30.4,1);
INSERT INTO venda VALUES ('Apontador',4,8,32,0,0,32,2);
INSERT INTO venda VALUES ('Marca Texto',9,6,54,10,5.4,48.6,3);
INSERT INTO venda VALUES ('Cola Bastão',7,3,21,5,1.05,19.95,4);
INSERT INTO venda VALUES ('Tesoura Escolar',15,2,30,10,3,27,5);
INSERT INTO venda VALUES ('Papel Sulfite A4',45,1,45,5,2.25,42.75,6);
INSERT INTO venda VALUES ('Grampeador',30,2,60,12,7.2,52.8,1);
INSERT INTO venda VALUES ('Clips Caixa',6,10,60,0,0,60,2);
INSERT INTO venda VALUES ('Pasta Catálogo',18,3,54,10,5.4,48.6,3);
INSERT INTO venda VALUES ('Envelope Ofício',2,20,40,0,0,40,4);
INSERT INTO venda VALUES ('Calculadora',50,1,50,20,10,40,5);
INSERT INTO venda VALUES ('Agenda',22,2,44,15,6.6,37.4,6);
INSERT INTO venda VALUES ('Corretivo',8,5,40,5,2,38,1);
INSERT INTO venda VALUES ('Estojo',20,2,40,10,4,36,2);
INSERT INTO venda VALUES ('Caneta Azul',10,4,40,10,4,36,3);
INSERT INTO venda VALUES ('Caneta Preta',12,5,60,5,3,57,4);
INSERT INTO venda VALUES ('Lápis HB',5,6,30,0,0,30,5);
INSERT INTO venda VALUES ('Borracha',3,7,21,5,1.05,19.95,6);
INSERT INTO venda VALUES ('Caderno 100 Folhas',25,3,75,10,7.5,67.5,1);
INSERT INTO venda VALUES ('Caderno Universitário',35,2,70,12,8.4,61.6,2);
INSERT INTO venda VALUES ('Régua 30cm',8,5,40,0,0,40,3);
INSERT INTO venda VALUES ('Apontador',4,9,36,5,1.8,34.2,4);
INSERT INTO venda VALUES ('Marca Texto',9,4,36,10,3.6,32.4,5);
INSERT INTO venda VALUES ('Cola Bastão',7,6,42,0,0,42,6);
INSERT INTO venda VALUES ('Tesoura Escolar',15,3,45,10,4.5,40.5,1);
INSERT INTO venda VALUES ('Papel Sulfite A4',45,2,90,15,13.5,76.5,2);
INSERT INTO venda VALUES ('Grampeador',30,1,30,5,1.5,28.5,3);
INSERT INTO venda VALUES ('Clips Caixa',6,15,90,0,0,90,4);
INSERT INTO venda VALUES ('Pasta Catálogo',18,4,72,10,7.2,64.8,5);
INSERT INTO venda VALUES ('Envelope Ofício',2,30,60,0,0,60,6);
INSERT INTO venda VALUES ('Calculadora',50,2,100,20,20,80,1);
INSERT INTO venda VALUES ('Agenda',22,3,66,10,6.6,59.4,2);
INSERT INTO venda VALUES ('Corretivo',8,3,24,5,1.2,22.8,3);
INSERT INTO venda VALUES ('Estojo',20,1,20,0,0,20,4);
INSERT INTO venda VALUES ('Caneta Azul',10,8,80,10,8,72,5);
INSERT INTO venda VALUES ('Caneta Preta',12,2,24,0,0,24,6);
INSERT INTO venda VALUES ('Lápis HB',5,12,60,5,3,57,1);
INSERT INTO venda VALUES ('Borracha',3,10,30,0,0,30,2);
INSERT INTO venda VALUES ('Caderno 100 Folhas',25,4,100,12,12,88,3);
INSERT INTO venda VALUES ('Caderno Universitário',35,3,105,15,15.75,89.25,4);
INSERT INTO venda VALUES ('Régua 30cm',8,7,56,8,4.48,51.52,5);
INSERT INTO venda VALUES ('Apontador',4,12,48,0,0,48,6);
INSERT INTO venda VALUES ('Marca Texto',9,8,72,10,7.2,64.8,1);
INSERT INTO venda VALUES ('Cola Bastão',7,5,35,5,1.75,33.25,2);
INSERT INTO venda VALUES ('Tesoura Escolar',15,4,60,0,0,60,3);
INSERT INTO venda VALUES ('Papel Sulfite A4',45,3,135,10,13.5,121.5,4);
INSERT INTO venda VALUES ('Grampeador',30,3,90,10,9,81,5);
INSERT INTO venda VALUES ('Clips Caixa',6,20,120,5,6,114,6);
INSERT INTO venda VALUES ('Pasta Catálogo',18,5,90,10,9,81,1);
INSERT INTO venda VALUES ('Envelope Ofício',2,40,80,0,0,80,2);
INSERT INTO venda VALUES ('Calculadora',50,1,50,10,5,45,3);
INSERT INTO venda VALUES ('Agenda',22,4,88,12,10.56,77.44,4);
INSERT INTO venda VALUES ('Corretivo',8,6,48,5,2.4,45.6,5);
INSERT INTO venda VALUES ('Estojo',20,3,60,10,6,54,6);
INSERT INTO venda VALUES ('Caneta Azul',10,3,30,0,0,30,1);
INSERT INTO venda VALUES ('Caneta Preta',12,4,48,10,4.8,43.2,2);
INSERT INTO venda VALUES ('Lápis HB',5,14,70,5,3.5,66.5,3);
INSERT INTO venda VALUES ('Borracha',3,8,24,0,0,24,4);
INSERT INTO venda VALUES ('Caderno 100 Folhas',25,5,125,10,12.5,112.5,5);
INSERT INTO venda VALUES ('Caderno Universitário',35,2,70,5,3.5,66.5,6);
INSERT INTO venda VALUES ('Régua 30cm',8,10,80,10,8,72,1);
INSERT INTO venda VALUES ('Apontador',4,14,56,0,0,56,2);
INSERT INTO venda VALUES ('Marca Texto',9,3,27,5,1.35,25.65,3);
INSERT INTO venda VALUES ('Cola Bastão',7,8,56,10,5.6,50.4,4);
INSERT INTO venda VALUES ('Tesoura Escolar',15,5,75,12,9,66,5);
INSERT INTO venda VALUES ('Papel Sulfite A4',45,2,90,5,4.5,85.5,6);
INSERT INTO venda VALUES ('Grampeador',30,4,120,15,18,102,1);
INSERT INTO venda VALUES ('Clips Caixa',6,12,72,0,0,72,2);
INSERT INTO venda VALUES ('Pasta Catálogo',18,6,108,10,10.8,97.2,3);
INSERT INTO venda VALUES ('Envelope Ofício',2,25,50,0,0,50,4);
INSERT INTO venda VALUES ('Calculadora',50,2,100,15,15,85,5);
INSERT INTO venda VALUES ('Agenda',22,5,110,10,11,99,6);
INSERT INTO venda VALUES ('Corretivo',8,4,32,5,1.6,30.4,1);
INSERT INTO venda VALUES ('Estojo',20,4,80,10,8,72,2);
INSERT INTO venda VALUES ('Caneta Azul',10,5,50,10,5,45,3);
INSERT INTO venda VALUES ('Caneta Preta',12,6,72,5,3.6,68.4,4);
INSERT INTO venda VALUES ('Lápis HB',5,9,45,0,0,45,5);
INSERT INTO venda VALUES ('Borracha',3,15,45,5,2.25,42.75,6);
INSERT INTO venda VALUES ('Caderno 100 Folhas',25,2,50,10,5,45,1);
INSERT INTO venda VALUES ('Caderno Universitário',35,4,140,15,21,119,2);
INSERT INTO venda VALUES ('Régua 30cm',8,6,48,8,3.84,44.16,3);
INSERT INTO venda VALUES ('Apontador',4,11,44,0,0,44,4);
INSERT INTO venda VALUES ('Marca Texto',9,7,63,10,6.3,56.7,5);
INSERT INTO venda VALUES ('Cola Bastão',7,7,49,5,2.45,46.55,6);
INSERT INTO venda VALUES ('Tesoura Escolar',15,2,30,0,0,30,1);
INSERT INTO venda VALUES ('Papel Sulfite A4',45,4,180,10,18,162,2);
INSERT INTO venda VALUES ('Grampeador',30,2,60,5,3,57,3);
INSERT INTO venda VALUES ('Clips Caixa',6,18,108,0,0,108,4);
INSERT INTO venda VALUES ('Pasta Catálogo',18,7,126,10,12.6,113.4,5);
INSERT INTO venda VALUES ('Envelope Ofício',2,35,70,0,0,70,6);
INSERT INTO venda VALUES ('Calculadora',50,3,150,20,30,120,1);
INSERT INTO venda VALUES ('Agenda',22,2,44,10,4.4,39.6,2);
INSERT INTO venda VALUES ('Corretivo',8,8,64,5,3.2,60.8,3);
INSERT INTO venda VALUES ('Estojo',20,5,100,10,10,90,4);

select count(*) as 'qtd' from departamento

create table funcao (codigo int not null identity(1,1), nome varchar(30))

alter table funcao add constraint pk_funcao primary key(codigo)

insert into funcao values ('cadastrar')
insert into funcao values ('visualizar')
insert into funcao values ('editar')
insert into funcao values ('delet')

select * from funcao

update funcao set nome = 'deletar' where codigo = 4