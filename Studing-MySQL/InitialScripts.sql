CREATE DATABASE exercicio;
USE exercicio;

CREATE TABLE IF NOT EXISTS fabricantes(
idFabricante INT PRIMARY KEY auto_increment,
nomeFabricante nvarchar(100),
siteFabricante nvarchar(200),
idfAtivo nvarchar(1)
);

CREATE TABLE IF NOT EXISTS  categoria(
idCategoria INT PRIMARY KEY auto_increment,
nomeCategoria nvarchar(45),
idfAtivo nvarchar(1)
);

CREATE TABLE IF NOT EXISTS tipo_pessoa(
idPessoa int primary key auto_increment,
nomeTipoPessoa nvarchar(255)
);


CREATE TABLE Pessoa(
idPessoa INT NOT NULL,
nomePessoa nvarchar(250) NOT NULL,
cpfPessoa nvarchar(16) ,
rgPessoa nvarchar(12) ,
emailPessoa nvarchar (100) ,
dataNascimento date NOT NULL,
idfSexo nvarchar(1) NOT NULL,
idfAtivo nvarchar(1) NOT NULL,
idTipoPessoa int NOT NULL,
CONSTRAINT Pk_pessoa PRIMARY KEY (idPessoa),
CONSTRAINT FK_PESSOA FOREIGN KEY (idTipoPessoa) REFERENCES tipo_pessoa(idPessoa),
CONSTRAINT uq_pessoa_cpf UNIQUE (cpfPessoa),
CONSTRAINT uq_pessoa_rg UNIQUE(rgPessoa),
CONSTRAINT uq_pessoa_email UNIQUE (emailPessoa)
);

SELECT P.nomePessoa, p.cpfPessoa, tp.nomeTipoPessoa from Pessoa P 
INNER JOIN tipo_pessoa tp ON tp.idPessoa = p.idTipoPessoa;