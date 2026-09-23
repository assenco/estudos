create database sistemaNuvex

use sistemaNuvex

create table rifa (id int not null identity(1,1), premio varchar(50), valor decimal (7,2))

select * from rifa

create table compra (id int not null identity(1,1), idContribuinte int, idRifa int, dataHorario datetime)

select * from compra

create table contribuinte (id int not null identity(1,1))

select * from contribuinte

exec sp_rename 'contribuinte.id', 'idUsuario', 'COLUMN';

create table doacao (id int not null identity(1,1), idContribuinte int, idFinanceiro int, dataHorario datetime)

select * from doacao

create table evento (id int not null identity(1,1), idFuncionario int, idContribuinte int, dataHorario datetime)

select * from doacao

create table usario (id int not null identity(1,1), nome varchar(70), cpf char(11), telefone int, rua varchar(70), numeroRua int, bairro varchar(70), cidade varchar(70))

select * from usuario

exec sp_rename 'usario', 'usuario'

create table funcionario (idUsuario int, dataAdmissao date, dataDemissao date)

select * from funcionario

create table cadastro (idAdministrativo int, idUsuario int, data date)

select * from cadastro

create table administrativo (idSetor int)

select * from administrativo

create table financeiro (idSetor int)

select * from financeiro

create table setor (id int not null identity(1,1))

select * from setor

alter table rifa add constraint pkRifa primary key(id)

alter table compra add constraint pkCompra primary key(id)

alter table doacao add constraint pkDoacao primary key(id)

alter table contribuinte add constraint pkContribuinte primary key(idUsuario)

alter table evento add constraint pkEvento primary key(id)

alter table usuario add constraint pkUsuario primary key(id)

alter table funcionario alter column idUsuario int not null

alter table funcionario add constraint pkFuncionario primary key(idUsuario)

alter table cadastro add id int not null identity(1,1)

alter table cadastro add constraint pkCadastro primary key(id)

alter table administrativo alter column idSetor int not null

alter table administrativo add constraint pkAdministrativo primary key(idSetor)

alter table financeiro alter column idSetor int not null

alter table financeiro add constraint pkFinanceiro primary key(idSetor)

alter table setor add constraint pkSetor primary key(id)

alter table compra add constraint fkRifa foreign key(idRifa) references rifa(id)

alter table compra add constraint fkContribuinte foreign key(idContribuinte) references contribuinte(idUsuario)

exec sp_rename 'fkContribuinte', 'fkContribuinteCompra', 'object'

alter table contribuinte add constraint fkUsuario foreign key(idUsuario) references usuario(id)

alter table doacao add constraint fkContribuinteDoacao foreign key(idContribuinte) references contribuinte(idUsuario)

alter table evento add constraint fkEvento foreign key(idFuncionario) references funcionario(idUsuario)

exec sp_rename 'fkEvento', 'fkFuncionario', 'object'

alter table evento add constraint fkContribuinte foreign key(idContribuinte) references contribuinte(idUsuario)

alter table funcionario add constraint fkUsuarioFuncionario foreign key(idUsuario) references usuario(id)

exec sp_rename 'fkUsuario', 'fkUsuarioContribuinte', 'object'

alter table cadastro add constraint fkAdministrativo foreign key(idAdministrativo) references administrativo(idSetor)

alter table cadastro add constraint fkUsuarioCadastro foreign key(idUsuario) references usuario(id)

alter table administrativo add constraint fkSetorAdministrativo foreign key(idSetor) references setor(id)

alter table financeiro add constraint fkSetorFinanceiro foreign key(idSetor) references setor(id)