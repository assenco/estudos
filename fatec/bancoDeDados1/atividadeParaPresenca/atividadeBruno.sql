--Utilizei a IA para escrever os dados que seriam inseridos nas tabelas para tornar o trabalho de digitação mais rapido e diminuir o tempo para realizar a atividade

create database aula24Set

use aula24Set

create table usuario (codigo int not null identity(1,1), nome varchar(100), cidade varchar(100))

select * from usuario

create table veiculo (codigo int not null identity(1,1),tipo_veiculo varchar(50), modelo varchar(100), status varchar(50))

select * from veiculo

create table locacao (numero int not null identity(1,1), codigousuario int, codigoveiculo int, data date, valor decimal(10,2))

select * from locacao

alter table veiculo add autonomia int

alter table usuario add constraint pkUsuario primary key (codigo)

alter table veiculo add constraint pkVeiculo primary key (codigo)

alter table locacao add constraint pkLocacao primary key (numero)

alter table locacao add constraint fkUsuario foreign key (codigousuario) references usuario(codigo)

alter table locacao add constraint fkVeiculo foreign key (codigoveiculo) references veiculo(codigo)

insert into veiculo (tipo_veiculo, modelo, status, autonomia) values ('patinete', 'eco scooter x1', 'disponível', 25), ('bicicleta', 'eco bike urban', 'disponível', 40), ('carro elétrico', 'eco car compact', 'disponível', 200), ('patinete', 'eco scooter x2', 'disponível', 30), ('bicicleta', 'eco bike speed', 'disponível', 45)

insert into usuario (nome, cidade) values ('ana silva', 'são paulo'), ('bruno costa', 'campinas'), ('carla souza', 'mogi guaçu'), ('diego lima', 'rio de janeiro'), ('elaine rocha', 'belo horizonte')

insert into veiculo (tipo_veiculo, modelo, status, autonomia) values ('patinete', 'eco scooter x1', 'disponível', 25), ('bicicleta', 'eco bike urban', 'disponível', 40), ('carro elétrico', 'eco car compact', 'disponível', 200), ('patinete', 'eco scooter x2', 'disponível', 30), ('bicicleta', 'eco bike speed', 'disponível', 45)

insert into locacao (codigousuario, codigoveiculo, data, valor) values (1, 1, '2026-09-01', 15.00), (2, 2, '2026-09-02', 20.00), (3, 3, '2026-09-03', 80.00), (4, 4, '2026-09-04', 15.00), (5, 5, '2026-09-05', 20.00), (1, 3, '2026-09-06', 85.00), (2, 1, '2026-09-07', 15.00), (3, 2, '2026-09-08', 20.00), (4, 5, '2026-09-09', 22.00), (5, 4, '2026-09-10', 16.00)

update usuario set cidade = 'curitiba' where codigo = 1

update veiculo set status = 'em manutenção' where codigo = 2

delete from locacao where numero = 10