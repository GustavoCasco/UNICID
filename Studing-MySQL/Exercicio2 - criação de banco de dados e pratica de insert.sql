CREATE DATABASE exercicios;
USE exercicios;

CREATE TABLE locacoes(
diaentrada DATE,
diasaida DATE,
fabricante NVARCHAR (20),
modelo NVARCHAR (20),
placa NVARCHAR (8),
UF varchar (2),
horaentrada TIME,
horasaida TIME,
valor FLOAT(7,2),
convenio NVARCHAR(3),
obs TEXT
);

INSERT INTO locacoes 
	VALUES ("2021-09-15", "2021-09-15", "Audi", "Q5", "JBC-1210", "SP", "07:20", "10:00", 5.00, "sim", "Passou tempo minimo")
		,  ("2021-09-15", null , "volkswagen", "Virtus", "VIR-0000", "PA", "08:40", "", null, "nao", ""),
		   ("2021-09-16", " ", "Toyota", "Corolla", "TOY-1010", "SP", "09:02", " ", "" , "sim", ""),
           ("2021-09-16", "2021-09-16", "BMW", "Serie 3", "BMW-1234", "RS", "09:30", "09:40", 0.00, "nao", "tolerancia");
SELECT * FROM locacoes;