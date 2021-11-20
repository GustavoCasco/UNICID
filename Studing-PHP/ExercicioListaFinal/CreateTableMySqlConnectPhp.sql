CREATE DATABASE form;
use form;

CREATE TABLE cliente(
id bigint primary key auto_increment,
nome nvarchar(255),
dtnascimento date,
sexo nvarchar(10),
estadocivil nvarchar(50),
email nvarchar(255),
ddd1 nvarchar(4),
telefone1 char(9),
tipoTel nvarchar(50),
ddd2 nvarchar(4),
telefone2 char(9),
tipoTel2 nvarchar(50),
ddd3 nvarchar(4),
telefone3 char(9),
tipoTel3 nvarchar(50),
obs text
);

SELECT * FROM cliente;
